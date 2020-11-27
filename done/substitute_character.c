#include <stdio.h>

int main(int argc, char const *argv[])
{
	char str[4];

	str[0] = 'A';
	str[1] = '\0';
	str[2] = 'C';
	str[3] = '\0';

	printf("文字列strは\"%s\"です。\n", str);
	return 0;
}