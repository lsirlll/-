#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>//system的头文件
#include <string.h>//strcmp的头文件

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 600");

	while (1)
	{
		printf("电脑十分钟后会关机，输入a取消关机\n");
		scanf("%s", input);

		if (strcmp(input, "a") == 0)
		{
			printf("取消关机\n");
			system("shutdown -a");
			break;
		}
	}

	return 0;
}