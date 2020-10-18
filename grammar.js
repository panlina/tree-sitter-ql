module.exports = grammar({
	name: 'ql',
	rules: {
		expression: $ => choice($.number, $.string, $.expression_binary, $.expression_unary),
		expression_binary: $ => choice(
			...[
				['|', -4],
				['&', -3],
				['!', -2],
				['<=', -1],
				['=', -1],
				['>=', -1],
				['<', -1],
				['!=', -1],
				['>', -1],
				['in', -1],
				['+', 0],
				['-', 0],
				['*', 1],
				['/', 1]
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
		number: $ => /\d+/,
		string: $ => seq('"', repeat($._char), '"'),
		_char: $ => choice($.char_literal, $.char_escaped),
		char_literal: $ => token.immediate(/[^"]/),
		char_escaped: $ => token.immediate(/\\["\\bfnrtv]/)
	}
});
