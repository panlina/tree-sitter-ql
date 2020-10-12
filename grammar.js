module.exports = grammar({
	name: 'ql',
	rules: {
		expression: $ => $.number,
		number: $ => /\d+/
	}
});
