module.exports = grammar({
	name: 'ql',
	rules: {
		expression: $ => choice($.number, $.string, $.expression_add),
		expression_add: $ => prec.left(0, seq(
			field('left', $.expression),
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
