module.exports = grammar({
	name: 'ql',
	word: $ => $.identifier,
	rules: {
		expression: $ => $._expression,
		_expression: $ => choice(
			$.number,
			$.string,
			$.expression_name,
			$.expression_this,
			$.expression_object,
			$.expression_array,
			$.expression_tuple,
			$.expression_parentheses,
			$.expression_id,
			$.expression_property,
			$.expression_element,
			$.expression_count,
			$.expression_unary,
			$.expression_binary,
			$.expression_conditional,
			$.expression_filter,
			$.expression_which,
			$.expression_map,
			$.expression_limit,
			$.expression_order,
			$.expression_group,
			$.expression_distinct,
			$.expression_comma
		),
		expression_comma: $ => prec.right(-7, seq(
			field('head', $.expression_comma_head),
			',',
			field('body', $._expression)
		)),
		expression_comma_head: $ => seq(
			field('name', $.identifier),
			'=',
			field('value', $._expression),
		),
		expression_filter: $ => prec.left(-6, seq(
			$._expression,
			'where',
			field('filter', $._expression)
		)),
		expression_which: $ => prec.left(-6, seq(
			$._expression,
			'which',
			field('filter', $._expression)
		)),
		expression_map: $ => prec.left(-6, seq(
			$._expression,
			'map',
			field('mapper', $._expression)
		)),
		expression_limit: $ => prec.left(-6, seq(
			$._expression,
			'limit',
			field('limiter', $._expression)
		)),
		expression_order: $ => prec.left(-6, seq(
			$._expression,
			'order',
			field('orderer', $._expression),
			field('direction', optional(choice('asc', 'desc')))
		)),
		expression_group: $ => prec.left(-6, seq(
			$._expression,
			'group',
			field('grouper', $._expression)
		)),
		expression_distinct: $ => prec.left(-6, seq(
			'distinct',
			$._expression
		)),
		expression_conditional: $ => prec.right(-5, seq(
			field('condition', $._expression),
			'?',
			field('true', $._expression),
			':',
			field('false', $._expression)
		)),
		expression_binary: $ => choice(
			...[
				['|', -4],
				['&', -3],
				['!', -2],
				[choice('<=', '=', '>=', '<', '!=', '>'), -1],
				['in', -1],
				[choice('+', '-'), 0],
				[choice('*', '/'), 1]
			].map(([operator, precedence]) =>
				prec.left(precedence, seq(
					field('left', $._expression),
					field('operator', operator),
					field('right', $._expression)
				))
			)
		),
		expression_unary: $ => choice(
			...[
				['+', 2],
				['-', 2]
			].map(([operator, precedence]) =>
				prec(precedence, seq(
					field('operator', operator),
					field('right', $._expression)
				))
			)
		),
		expression_count: $ => prec(3, seq(
			field('left', $._expression),
			field('operator', '#')
		)),
		expression_property: $ => prec.left(4, seq(
			$._expression,
			'.',
			field('property', $.identifier)
		)),
		expression_element: $ => prec.left(4, seq(
			$._expression,
			'@',
			field('index', $._expression)
		)),
		expression_id: $ => prec(5, seq(
			field('identifier', $.identifier),
			'#',
			field('id', $._expression)
		)),
		expression_parentheses: $ => seq('(', $._expression, ')'),
		expression_object: $ => seq(
			'{',
			commaSep($.expression_object_property),
			'}'
		),
		expression_object_property: $ => seq(
			field('name', $.identifier),
			':',
			field('value', $._expression)
		),
		expression_array: $ => seq(
			'[',
			commaSep($._expression),
			']'
		),
		expression_tuple: $ => seq(
			'{',
			commaSep($._expression),
			'}'
		),
		expression_this: $ => seq("this", $.identifier),
		expression_name: $ => seq(optional('::'), $.identifier),
		identifier: $ => /[_a-zA-Z][_a-zA-Z0-9]*/,
		number: $ => /\d+/,
		string: $ => seq('"', repeat($._char), '"'),
		_char: $ => choice($.char_literal, $.char_escaped),
		char_literal: $ => token.immediate(/[^"]/),
		char_escaped: $ => token.immediate(/\\["\\bfnrtv]/)
	},
	conflicts: $ => [
		[$.expression_object, $.expression_tuple],
		[$.expression_comma_head, $.expression_name]
	]
});

// Copied from tree-sitter-javascript
function commaSep1(rule) {
	return seq(rule, repeat(seq(',', rule)));
}
function commaSep(rule) {
	return optional(commaSep1(rule));
}
