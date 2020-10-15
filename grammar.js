module.exports = grammar({
	name: 'ql',
	rules: {
		expression: $ => choice($.number, $.string),
		number: $ => /\d+/,
		string: $ => seq('"', repeat($.char), '"'),
		char: $ => token.immediate(/[^"]/)
	}
});
