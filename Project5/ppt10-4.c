

int test_four(char test[], char ch) {
	int i = 0;
	while (test[i] != NULL) {
		printf("%c", test[i]);
		if (test[i] == ch) {
			return &test[i];
		}
		i++;
	};
	return 0;
};