#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr;
	char ch;
	int count = 0;

	fptr = fopen("welcom.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf_s("%c", ch);
			count++;
		}
		fclose(fptr);
		printf_s("\n�`�@��%d�Ӧr��\n", count);
	}
	else
	{
		printf_s("�ɮ׶}�ҥ���!!\n");
	}
	system("pause");
	return 0;
}