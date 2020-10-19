module.exports = grammar({
	name: 'ql',
	word: $ => $.identifier,
	rules: {
		expression: $ => choice($.number, $.string, $.identifier, $.expression_binary, $.expression_unary, $.expression_count),
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
					field('left', $.expression),
					field('operator', operator),
					field('right', $.expression)
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
					field('right', $.expression)
				))
			)
		),
		expression_count: $ => prec(3, seq(
			field('left', $.expression),
			field('operator', '#')
		)),
		identifier: $ => /[_a-zA-Z][_a-zA-Z0-9]*/,
		number: $ => /\d+/,
		string: $ => seq('"', repeat($._char), '"'),
		_char: $ => choice($.char_literal, $.char_escaped),
		char_literal: $ => token.immediate(/[^"]/),
		char_escaped: $ => token.immediate(/\\["\\bfnrtv]/)
	}
});
