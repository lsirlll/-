#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>//system��ͷ�ļ�
#include <string.h>//strcmp��ͷ�ļ�

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 600");

	while (1)
	{
		printf("����ʮ���Ӻ��ػ�������aȡ���ػ�\n");
		scanf("%s", input);

		if (strcmp(input, "a") == 0)
		{
			printf("ȡ���ػ�\n");
			system("shutdown -a");
			break;
		}
	}

	return 0;
}