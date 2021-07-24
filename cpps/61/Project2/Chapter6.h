int fact(int ival) {
	int jval = 1;
	while (ival != 1) {
		jval *= ival--;
	}
	return jval;
}