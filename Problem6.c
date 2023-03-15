#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//문제1
//사용자로 부터 경로를 입력 받아서 그 곳에 파일을 생성하고 a 를 입력해놓는 프로그램을 만들어보세요
/*
int main()
{
	FILE* fp = fopen("C:\\Users\\dkfmt\\source\\repos\\First_Project\\a.txt", "w");

	if (fp == NULL)
	{
		printf("FILE Error\n");
		return 0;
	}

	fputc('c', fp);
	fclose(fp);

	return 0;
}
*/

//문제2
//a.txt 에 어떠한 긴 글이 들어 있는데, 
//이 글을 입력 받아서 특정한 문자열을 검색하는 프로그램을 만들어보세요 
/*
int main()
{
	FILE* fp = fopen("a.txt", "r");
	int line_len = 0;
	char num;

	char* writing[100];
	char temp1[100];
	char* temp;

	if (fp == NULL)
	{
		printf("FILE ERROR\n");
		return 0;
	}
	//몇줄인지 읽어오기
	do
	{
		num = getc(fp);
		if (num == '\n') line_len++;

	} while (num != EOF);
	
	//초기화
	fseek(fp, 0, SEEK_SET);

	//한줄씩 읽어와서 temp[i]에 저장
	for (int i = 0; i <= line_len; i++)
	{
		fgets(temp1, 100, fp);
		writing[i] = (char*)malloc(strlen(temp1));
		strcpy(writing[i], temp1);
	}

	//잘라서 비교해서 출력
	for (int i = 0; i < line_len; i++)
	{
		temp = strtok(writing[i], ",.' ");
		while (temp != NULL)
		{
			
			if (!strcmp(temp, "어머님"))
			{
				printf(" %s ", temp);
				printf("찾았습니다.");
				return;
			}
			temp = strtok(NULL, ",.' ");
		}
	}
	fclose(fp);

	return 0;
}
*/

//문제3
//a.txt 에 문자열을 입력 받아서 b.txt 에 
//그 문자열을 역으로 출력하는 프로그램을 만들어보세요
/*
int main()
{
	FILE* fpR = fopen("a1.txt", "r");
	FILE* fpW = fopen("b.txt", "w");
	char temp[20];
	if (fpR == NULL || fpW == NULL)
	{
		printf("Error!!\n");
		return 0;
	}
	fgets(temp, 20, fpR);

	fputs(temp, fpW);

	fclose(fpR);
	fclose(fpW);

	return 0;
}
*/