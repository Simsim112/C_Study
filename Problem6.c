#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//����1
//����ڷ� ���� ��θ� �Է� �޾Ƽ� �� ���� ������ �����ϰ� a �� �Է��س��� ���α׷��� ��������
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

//����2
//a.txt �� ��� �� ���� ��� �ִµ�, 
//�� ���� �Է� �޾Ƽ� Ư���� ���ڿ��� �˻��ϴ� ���α׷��� �������� 
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
	//�������� �о����
	do
	{
		num = getc(fp);
		if (num == '\n') line_len++;

	} while (num != EOF);
	
	//�ʱ�ȭ
	fseek(fp, 0, SEEK_SET);

	//���پ� �о�ͼ� temp[i]�� ����
	for (int i = 0; i <= line_len; i++)
	{
		fgets(temp1, 100, fp);
		writing[i] = (char*)malloc(strlen(temp1));
		strcpy(writing[i], temp1);
	}

	//�߶� ���ؼ� ���
	for (int i = 0; i < line_len; i++)
	{
		temp = strtok(writing[i], ",.' ");
		while (temp != NULL)
		{
			
			if (!strcmp(temp, "��Ӵ�"))
			{
				printf(" %s ", temp);
				printf("ã�ҽ��ϴ�.");
				return;
			}
			temp = strtok(NULL, ",.' ");
		}
	}
	fclose(fp);

	return 0;
}
*/

//����3
//a.txt �� ���ڿ��� �Է� �޾Ƽ� b.txt �� 
//�� ���ڿ��� ������ ����ϴ� ���α׷��� ��������
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