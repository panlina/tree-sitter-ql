module.exports = grammar({
	name: 'ql',
	rules: {
		expression: $ => choice($.number, $.string, $.expression_add, $.expression_multiply, $.expression_add_unary),
		expression_add: $ => prec.left(0, seq(
			field('left', $.expression),
			field('operator', choice('+', '-')),
			field('right', $.expression)
		)),
		expression_multiply: $ => prec.left(1, seq(
			field('left', $.expression),
			field('operator', choice('*', '/')),
			field('right', $.expression)
		)),
		expression_add_unary: $ => prec(2, seq(
			field('operator', choice('+', '-')),
			field('right', $.expression)
		)),
		number: $ => /\d+/,
		string: $ => seq('"', repeat($._char), '"'),
		_char: $ => choice($.char_literal, $.char_escaped),
		char_literal: $ => token.immediate(/[^"]/),
		char_escaped: $ => token.immediate(/\\["\\bfnrtv]/)
	}
});
