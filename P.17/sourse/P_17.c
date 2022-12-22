#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX  80

int main(void)
{
	FILE *fptr;
	char str[MAX];
	int bytes;
	fptr = fopen("output.txt", "r");

	while (!feof(fptr))
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf_s("%s\n", str);
	}
	fclose(fptr);
	system("pause");
	return 0;
}
