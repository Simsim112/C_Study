#include <stdio.h>

//����1
//����ü�� å������ ���ܱ���(�ξ� ����������) - compare������ �� ���Ⱑ ������
/*
struct Library {
	char book[50];
	char author[50];
	char publisher[50];
	int borrow;
};
int main()
{
	struct Library lib[100];
	int book_count = 0;
	Register_book(lib, &book_count);
	Search_book(lib, &book_count);
}
int Register_book(struct Library *plib, int* pbook_count)
{
	printf("å�� �̸��� �Է����ּ���: ");
	gets(plib[*pbook_count].book);

	printf("å�� ���ڸ� �Է����ּ���: ");
	gets(plib[*pbook_count].author);

	printf("å�� �̸��� �Է����ּ���: ");
	gets(plib[*pbook_count].publisher);

	plib[*pbook_count].borrow = 0;

	printf("å�̸� : %s\n", plib[*pbook_count].book);
	printf("���� : %s\n", plib[*pbook_count].author);
	printf("���ǻ� : %s\n", plib[*pbook_count].publisher);
	printf("å �Ⱓ�Ϸ�\n");
	++(*pbook_count);

	return 0;
}
int Search_book(struct Library *plib, int *pbook_count)
{
	char find_book[100];
	int compare_num;
	printf("ã�� å�� �̸��� �Է����ּ���: ");
	gets(find_book);
	for (int i = 0; i < *pbook_count; i++)
	{
		compare_num = compare(find_book, plib[i].book);
		if (compare_num)
		{
			printf("ã�� å�� : %s\n", plib[i].book);
			return 0;
		}
	}
	printf("å�� ��ã�ҽ��ϴ�.");
	return 0;
}
//���ؼ� ������ 1 �ٸ��� 0 ���
int compare(char* str1, char* str2) 
{
	while (*str1)
	{
		if (*str1 != *str2)
		{
			return 0;
		}
		str1++;
		str2++;
	}

	if (*str2 != 0) return 0;

	return 1;
}
*/

//���� 2
//ū ���� �ٷ�� ����ü�� �����غ��ô�. 
//�� ����ü�� �̸��� BigNum �Դϴ�. BigNum ����ü���� ������ ���� ������� ���� �� �ֽ��ϴ�.