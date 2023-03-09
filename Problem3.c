#include <stdio.h>

//문제1
//구조체로 책빌리기 간단구현(훨씬 간단해졌다) - compare때문에 더 보기가 좋아짐
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
	printf("책의 이름을 입력해주세요: ");
	gets(plib[*pbook_count].book);

	printf("책의 저자를 입력해주세요: ");
	gets(plib[*pbook_count].author);

	printf("책의 이름을 입력해주세요: ");
	gets(plib[*pbook_count].publisher);

	plib[*pbook_count].borrow = 0;

	printf("책이름 : %s\n", plib[*pbook_count].book);
	printf("저자 : %s\n", plib[*pbook_count].author);
	printf("출판사 : %s\n", plib[*pbook_count].publisher);
	printf("책 출간완료\n");
	++(*pbook_count);

	return 0;
}
int Search_book(struct Library *plib, int *pbook_count)
{
	char find_book[100];
	int compare_num;
	printf("찾을 책의 이름을 입력해주세요: ");
	gets(find_book);
	for (int i = 0; i < *pbook_count; i++)
	{
		compare_num = compare(find_book, plib[i].book);
		if (compare_num)
		{
			printf("찾는 책은 : %s\n", plib[i].book);
			return 0;
		}
	}
	printf("책을 못찾았습니다.");
	return 0;
}
//비교해서 같으면 1 다르면 0 출력
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

//문제 2
//큰 수를 다루는 구조체를 생각해봅시다. 
//그 구조체의 이름은 BigNum 입니다. BigNum 구조체에는 다음과 같은 멤버들이 있을 수 있습니다.