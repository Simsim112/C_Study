#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>

//���� 1
//�� ���� ���ڿ��� ���ϴ� �Լ��� ���� ������ 1, �ٸ��� 0 �� �����ϰ� �غ�����. 
/*
int compare(char  pstr_a[], char pstr_b[]);
int main() {
	char str_a[] = "abc";
	char str_b[] = "abcdasd";

	printf("������ 1, �ٸ��� 0 : %d", compare(str_a, str_b));
	return 0;
}
int compare(char  pstr_a[], char pstr_b[])
{
	int count = 0;
	for (int i = 0;; i++)
	{
		if (pstr_a[i] == 0 && pstr_b[i] == 0) break;
		//�ٸ��� ī��Ʈ��
		if (pstr_a[i] != pstr_b[i]) count = 1;
	}

	if (count == 0)
		return 1;
	else
		return 0;
}
*/

//���� 2
//���̰� �ִ� 100 �� ���ڿ��� �ϳ� �Է� �޾Ƽ� ���ڿ��� �������� ����ϴ� �Լ��� ��������. 
/*
int reverse(char *str);
int main()
{
	char str[100];
	scanf("%s", str);
	reverse(str);
}
int reverse(char *str)
{
	int str_len = 0;
	while (*str) //�ξձ��� ����
	{
		str++; 
		str_len++;
	}
	while (str_len)
	{
		str--;
		str_len--;
		printf("%c", *str);
	}
}
*/

//���� 3
//���̰� �ִ� 100 �� ���ڿ��� �Է� �޾Ƽ� �ҹ��ڴ� �빮�ڷ�, 
//�빮�ڴ� �ҹ��ڷ� ����ϴ� �Լ��� ��������.
/*
int updown(char* str);
int main()
{
	char str[100];
	scanf("%s", str);
	printf("���ϱ��� = %s\n", str);
	updown(str);
	printf("���ϰ��� = %s", str);
}
int updown(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		else if (*str >= 'A' && *str <= "Z")
		{
			*str = *str + ('a' - 'A');
		}
		str++;
	}
	*str = 0;

	return 0;
}
*/

//����4
//�� ���� ���ڿ��� �Է� �޾Ƽ� ���ٸ� "����", �ٸ��� "�ٸ���" ��� ����ϴ� �Լ��� ��������.
/*
int compare(char pstr1[], char pstr2[]);
int main()
{
	char str1[100];
	char str2[100];

	printf("���� ���ڿ��� ���ּ��� : ");
	scanf("%s %s", str1, str2);
	printf("%s %s\n", str1, str2);
	compare(str1, str2);
	return 0;
}
int compare(char pstr1[], char pstr2[])
{
	while (*pstr1)
	{
		if (*pstr1 != *pstr2)
		{
			printf("�ٸ���\n");
			return 1;
		}
		pstr1++;
		pstr2++;
	}

	if (*pstr2 != 0) 
	{
		printf("�ٸ���\n");
		return 1;
	}
	printf("����\n");
	return 0;
}
*/

//����5
//���ڿ��� �� �� �Է� �޾Ƽ� 
//���� �Է¹��� ���ڿ����� ���߿� �Է¹��� ���ڿ��� ��ġ�� �˻��ϴ� �Լ��� ��������. 
//���� ���ٸ� -1 �� �����ϰ� �ִٸ� �� ��ġ�� �����մϴ�.
// 
//���� ������ ó�� �Է��� ���� I_am_a_boy �̰�, 
//���߿� �Է��� ���� am �̿��ٸ� ��ǻ�ʹ� I_am_a_boy ���� am �� ��ġ�� ã�´�. 
//�� ��쿡�� am �� ��ġ�� 2 (ó������ ����°) �̹Ƿ� 2 �� �����Ѵ�. 
//���� am �̶�� ���ڿ��� ���ٸ� -1 �� �����Ѵ�.
/*
int find_str(char* pstr1, char* pstr2);
int main()
{
	char str1[100];
	char str2[100];
	int loc;

	scanf("%s %s", str1, str2);
	loc = find_str(str1, str2);
	printf("���ڿ��� ��ġ�� : %d", loc);
}
int find_str(char *pstr1, char *pstr2)
{

	for (int i = 0; pstr1[i] != 0;i++) 
	{
		int diff = 0;
		if (pstr1[i] == pstr2[0])
		{
			for (int j = 1; pstr2[j] != 0; j++)
			{
				if (pstr1[i + j] != pstr2[j])
					diff++;
			}
			if (diff == 0)
			{
				printf("%d", i);
				return i;
			}
		}
	}
	return -1;
}
*/

//����6(�� ����ؼ� �ٿ��ֱ������ ���������)
//���� ���� ���α׷��� �����ô�. ���α׷����� ������ ���� ��ɵ��� �����Ǿ� �־�� �մϴ�.
//å�� ���� �߰��ϴ� ���(å�� �� ������ 100 ���̶� ����.�� ��, �� å�� ������ ����, ������ �̸�, ���ǻ�� �Ѵ�)
//å�� ������ �˻��ϸ� �� å�� ������ ���;� �Ѵ�.
//���� ���������� ����, ���ǻ� �˻� ����� �־�� �Ѵ�.
//å�� ������ ���.
//å�� �ݳ��ϴ� ���
/*
int book_Add(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count);
int search_book(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count);
int search_author(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count);
int search_publish(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count);
int borrow_book(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count);
int return_book(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count);

int main()
{
	char book[100][50];
	char author[100][50];
	char publisher[100][50];
	bool borrow[100];
	int book_count = 0;
	int sel;

	while (1) {
		printf("******************************���� ���� ���α׷�******************************\n");
		printf("1. å�߰� 2.å����˻� 3.���ڰ˻� 4.���ǻ� �˻� 5.å������ 6.å�ݳ��ϱ� 7.����\n");
		printf("�Ͻ� �۾��� �������ּ��� : ");
		scanf("%d", &sel);
		getchar();
		switch (sel)
		{
		case 1:
			book_Add(book, author, publisher, borrow, &book_count);
			break;
		case 2:
			search_book(book, author, publisher, borrow, &book_count);
			break;
		case 3:
			search_author(book, author, publisher, borrow, &book_count);
			break;
		case 4:
			search_publish(book, author, publisher, borrow, &book_count);
			break;
		case 5:
			borrow_book(book, author, publisher, borrow, &book_count);
			break;
		case 6:
			return_book(book, author, publisher, borrow, &book_count);
			break;
		case 7:
			return 0;
		default:
			printf("�ٽ� �Է����ּ���\n");
		}
	}

	return 0;
}
//å �߰�
int book_Add(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int *pbook_count)
{
	printf("å�� ������ �Է����ּ���:");
	gets(pbook[*pbook_count]);

	printf("������ �̸��� �Է����ּ���:");
	gets(pauthor[*pbook_count]);

	printf("���ǻ��� �̸��� �Է����ּ���:");
	gets(ppublisher[*pbook_count]);

	borrow[*pbook_count] = 0;

	printf("å�̸� : %s\n", pbook[*pbook_count]);
	printf("���� : %s\n", pauthor[*pbook_count]);
	printf("���ǻ� : %s\n", ppublisher[*pbook_count]);
	printf("å �Ⱓ�Ϸ�\n");
	*pbook_count = *pbook_count + 1;

	return 0;
}
//å�� ���� �˻�
int search_book(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count)
{
	char search_book[50];
	int find = 0, i, j ;
	printf("ã�� å�� �̸��� �����ּ���:");
	gets(search_book);

	for(i = 0 ; i < *pbook_count; i++)
	{
		for (j = 0 ; search_book[j] != '\0'; j++)
		{
			if (pbook[i][j] == search_book[j])//������ ����
			{
				find++;
			}
		}
		if (find == j)
		{
			printf("�ش��ϴ� å�� ã�ҽ��ϴ�\n");
			printf("å�� �̸� : %s\n", pbook[i]);
			printf("���� : %s\n", pauthor[i]);
			printf("���ǻ� : %s\n", ppublisher[i]);
			printf("���Ⱑ�� ���� : ");
			if (borrow[i] == 0) printf("���Ⱑ��");
			else printf("���� ������");
			return 0;
		}
	}
	printf("ã�� å�� �����ϴ�");
	return 0;
}
//���� �˻� 
int search_author(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count)
{
	char search_author[50];
	int find = 0, i, j;
	printf("ã�� ������ �̸��� �����ּ���:");
	gets(search_author);

	for (i = 0; i < *pbook_count; i++)
	{
		for (j = 0; search_author[j] != '\0'; j++)
		{
			if (pauthor[i][j] == search_author[j])//������ ����
			{
				find++;
			}
		}
		if (find == j)
		{
			printf("�ش��ϴ� å�� ã�ҽ��ϴ�\n");
			printf("å�� �̸� : %s\n", pbook[i]);
			printf("���� : %s\n", pauthor[i]);
			printf("���ǻ� : %s\n", ppublisher[i]);
			printf("���Ⱑ�� ���� : ");
			if (borrow[i] == 0) printf("���Ⱑ��");
			else printf("���� ������");
			return 0;
		}
	}
	printf("ã�� ���ڰ� �����ϴ�");
	return 0;
}
//���ǻ� �˻�
int search_publish(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count)
{
	char search_publish[50];
	int find = 0, i, j;
	printf("ã�� ���ǻ��� �̸��� �����ּ���:");
	gets(search_publish);

	for (i = 0; i < *pbook_count; i++)
	{
		for (j = 0; search_publish[j] != '\0'; j++)
		{
			if (ppublisher[i][j] == search_publish[j])//������ ����
			{
				find++;
			}
		}
		if (find == j)
		{
			printf("�ش��ϴ� å�� ã�ҽ��ϴ�\n");
			printf("å�� �̸� : %s\n", pbook[i]);
			printf("���� : %s\n", pauthor[i]);
			printf("���ǻ� : %s\n", ppublisher[i]);
			printf("���Ⱑ�� ���� : ");
			if (borrow[i] == 0) printf("���Ⱑ��");
			else printf("���� ������");
			return 0;
		}
	}
	printf("ã�� ���ǻ簡 �����ϴ�.");
	return 0;
}
//å������
int borrow_book(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count)
{
	char borrow_book[50];
	char check_out;
	int find = 0, i, j;
	printf("���� å�� �̸��� �����ּ���:");
	gets(borrow_book);

	for (i = 0; i < *pbook_count; i++)
	{
		for (j = 0; borrow_book[j] != '\0'; j++)
		{
			if (pbook[i][j] == borrow_book[j])//������ ����
			{
				find++;
			}
		}
		if (find == j)
		{
			printf("�ش��ϴ� å�� ã�ҽ��ϴ�\n");
			printf("å�� �̸� : %s\n", pbook[i]);
			printf("���� : %s\n", pauthor[i]);
			printf("���ǻ� : %s\n", ppublisher[i]);
			printf("���Ⱑ�� ���� : ");
			if (borrow[i] != 0) printf("���� ������\n");
			else
			{
				printf("���� ��å�� ���Ⱑ���մϴ� �����ðڽ��ϱ�? y/n\n");
				scanf("%c", &check_out);
				if (check_out == 'y')
				{
					borrow[i] = 1;
					printf("å�� ����Ǿ����ϴ�.");
				}
				else
				{
					printf("�������");
				}
			}
			return 0;
		}
	}
	printf("ã�� å�� �����ϴ�.");
	return 0;
}
//å�ݳ�
int return_book(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count)
{
	char borrow_book[50];
	char check_out;
	int find = 0, i, j;
	printf("���� å�� �̸��� �����ּ���:");
	gets(borrow_book);

	for (i = 0; i < *pbook_count; i++)
	{
		for (j = 0; borrow_book[j] != '\0'; j++)
		{
			if (pbook[i][j] == borrow_book[j])//������ ����
			{
				find++;
			}
		}
		if (find == j)
		{
			printf("�ش��ϴ� å�� ã�ҽ��ϴ�\n");
			printf("å�� �̸� : %s\n", pbook[i]);
			printf("���� : %s\n", pauthor[i]);
			printf("���ǻ� : %s\n", ppublisher[i]);
			printf("���Ⱑ�� ���� : ");
			if (borrow[i] == 0) printf("���� �������� �ƴմϴ�.\n");
			else
			{
				printf("���� ��å�� �ݳ������մϴ� �ݳ��Ͻðڽ��ϱ�? y/n\n");
				scanf("%c", &check_out);
				if (check_out == 'y')
				{
					borrow[i] = 0;
					printf("å�� �ݳ��Ǿ����ϴ�.");
				}
				else
				{
					printf("�ݳ����");
				}
			}
			return 0;
		}
	}
	printf("ã�� å�� �����ϴ�.");
	return 0;
}
*/