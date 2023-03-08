#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>

//문제 1
//두 개의 문자열을 비교하는 함수를 만들어서 같으면 1, 다르면 0 을 리턴하게 해보세요. 
/*
int compare(char  pstr_a[], char pstr_b[]);
int main() {
	char str_a[] = "abc";
	char str_b[] = "abcdasd";

	printf("같으면 1, 다르면 0 : %d", compare(str_a, str_b));
	return 0;
}
int compare(char  pstr_a[], char pstr_b[])
{
	int count = 0;
	for (int i = 0;; i++)
	{
		if (pstr_a[i] == 0 && pstr_b[i] == 0) break;
		//다르면 카운트함
		if (pstr_a[i] != pstr_b[i]) count = 1;
	}

	if (count == 0)
		return 1;
	else
		return 0;
}
*/

//문제 2
//길이가 최대 100 인 문자열을 하나 입력 받아서 문자열을 역순으로 출력하는 함수를 만들어보세요. 
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
	while (*str) //널앞까지 가기
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

//문제 3
//길이가 최대 100 인 문자열을 입력 받아서 소문자는 대문자로, 
//대문자는 소문자로 출력하는 함수를 만들어보세요.
/*
int updown(char* str);
int main()
{
	char str[100];
	scanf("%s", str);
	printf("변하기전 = %s\n", str);
	updown(str);
	printf("변하고난뒤 = %s", str);
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

//문제4
//두 개의 문자열을 입력 받아서 같다면 "같다", 다르면 "다르다" 라고 출력하는 함수를 만들어보세요.
/*
int compare(char pstr1[], char pstr2[]);
int main()
{
	char str1[100];
	char str2[100];

	printf("비교할 문자열을 써주세요 : ");
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
			printf("다르다\n");
			return 1;
		}
		pstr1++;
		pstr2++;
	}

	if (*pstr2 != 0) 
	{
		printf("다르다\n");
		return 1;
	}
	printf("같다\n");
	return 0;
}
*/

//문제5
//문자열을 두 개 입력 받아서 
//먼저 입력받은 문자열에서 나중에 입력받은 문자열의 위치를 검색하는 함수를 만들어보세요. 
//만일 없다면 -1 을 리턴하고 있다면 그 위치를 리턴합니다.
// 
//예를 들어먼저 처음 입력한 것이 I_am_a_boy 이고, 
//나중에 입력한 것이 am 이였다면 컴퓨터는 I_am_a_boy 에서 am 의 위치를 찾는다. 
//이 경우에는 am 의 위치는 2 (처음에서 세번째) 이므로 2 를 리턴한다. 
//만일 am 이라는 문자열이 없다면 -1 을 리턴한다.
/*
int find_str(char* pstr1, char* pstr2);
int main()
{
	char str1[100];
	char str2[100];
	int loc;

	scanf("%s %s", str1, str2);
	loc = find_str(str1, str2);
	printf("문자열의 위치는 : %d", loc);
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

//문제6(다 비슷해서 붙여넣기식으로 만들어졌다)
//도서 관리 프로그램을 만들어봅시다. 프로그램에는 다음과 같은 기능들이 구현되어 있어야 합니다.
//책을 새로 추가하는 기능(책의 총 개수는 100 권이라 하자.이 때, 각 책의 정보는 제목, 저자의 이름, 출판사로 한다)
//책의 제목을 검색하면 그 책의 정보가 나와야 한다.
//위와 마찬가지로 저자, 출판사 검색 기능이 있어야 한다.
//책을 빌리는 기능.
//책을 반납하는 기능
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
		printf("******************************도서 대출 프로그램******************************\n");
		printf("1. 책추가 2.책제목검색 3.저자검색 4.출판사 검색 5.책빌리기 6.책반납하기 7.종료\n");
		printf("하실 작업을 선택해주세요 : ");
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
			printf("다시 입력해주세요\n");
		}
	}

	return 0;
}
//책 추가
int book_Add(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int *pbook_count)
{
	printf("책의 제목을 입력해주세요:");
	gets(pbook[*pbook_count]);

	printf("저자의 이름을 입력해주세요:");
	gets(pauthor[*pbook_count]);

	printf("출판사의 이름을 입력해주세요:");
	gets(ppublisher[*pbook_count]);

	borrow[*pbook_count] = 0;

	printf("책이름 : %s\n", pbook[*pbook_count]);
	printf("저자 : %s\n", pauthor[*pbook_count]);
	printf("출판사 : %s\n", ppublisher[*pbook_count]);
	printf("책 출간완료\n");
	*pbook_count = *pbook_count + 1;

	return 0;
}
//책의 제목 검색
int search_book(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count)
{
	char search_book[50];
	int find = 0, i, j ;
	printf("찾을 책의 이름을 적어주세요:");
	gets(search_book);

	for(i = 0 ; i < *pbook_count; i++)
	{
		for (j = 0 ; search_book[j] != '\0'; j++)
		{
			if (pbook[i][j] == search_book[j])//같으면 같음
			{
				find++;
			}
		}
		if (find == j)
		{
			printf("해당하는 책을 찾았습니다\n");
			printf("책의 이름 : %s\n", pbook[i]);
			printf("저자 : %s\n", pauthor[i]);
			printf("출판사 : %s\n", ppublisher[i]);
			printf("대출가능 여부 : ");
			if (borrow[i] == 0) printf("대출가능");
			else printf("현재 대출중");
			return 0;
		}
	}
	printf("찾는 책이 없습니다");
	return 0;
}
//저자 검색 
int search_author(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count)
{
	char search_author[50];
	int find = 0, i, j;
	printf("찾을 저자의 이름을 적어주세요:");
	gets(search_author);

	for (i = 0; i < *pbook_count; i++)
	{
		for (j = 0; search_author[j] != '\0'; j++)
		{
			if (pauthor[i][j] == search_author[j])//같으면 같음
			{
				find++;
			}
		}
		if (find == j)
		{
			printf("해당하는 책을 찾았습니다\n");
			printf("책의 이름 : %s\n", pbook[i]);
			printf("저자 : %s\n", pauthor[i]);
			printf("출판사 : %s\n", ppublisher[i]);
			printf("대출가능 여부 : ");
			if (borrow[i] == 0) printf("대출가능");
			else printf("현재 대출중");
			return 0;
		}
	}
	printf("찾는 저자가 없습니다");
	return 0;
}
//출판사 검색
int search_publish(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count)
{
	char search_publish[50];
	int find = 0, i, j;
	printf("찾을 출판사의 이름을 적어주세요:");
	gets(search_publish);

	for (i = 0; i < *pbook_count; i++)
	{
		for (j = 0; search_publish[j] != '\0'; j++)
		{
			if (ppublisher[i][j] == search_publish[j])//같으면 같음
			{
				find++;
			}
		}
		if (find == j)
		{
			printf("해당하는 책을 찾았습니다\n");
			printf("책의 이름 : %s\n", pbook[i]);
			printf("저자 : %s\n", pauthor[i]);
			printf("출판사 : %s\n", ppublisher[i]);
			printf("대출가능 여부 : ");
			if (borrow[i] == 0) printf("대출가능");
			else printf("현재 대출중");
			return 0;
		}
	}
	printf("찾는 출판사가 없습니다.");
	return 0;
}
//책빌리기
int borrow_book(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count)
{
	char borrow_book[50];
	char check_out;
	int find = 0, i, j;
	printf("빌릴 책의 이름을 적어주세요:");
	gets(borrow_book);

	for (i = 0; i < *pbook_count; i++)
	{
		for (j = 0; borrow_book[j] != '\0'; j++)
		{
			if (pbook[i][j] == borrow_book[j])//같으면 같음
			{
				find++;
			}
		}
		if (find == j)
		{
			printf("해당하는 책을 찾았습니다\n");
			printf("책의 이름 : %s\n", pbook[i]);
			printf("저자 : %s\n", pauthor[i]);
			printf("출판사 : %s\n", ppublisher[i]);
			printf("대출가능 여부 : ");
			if (borrow[i] != 0) printf("현재 대출중\n");
			else
			{
				printf("현재 이책은 대출가능합니다 빌리시겠습니까? y/n\n");
				scanf("%c", &check_out);
				if (check_out == 'y')
				{
					borrow[i] = 1;
					printf("책이 대출되었습니다.");
				}
				else
				{
					printf("대출취소");
				}
			}
			return 0;
		}
	}
	printf("찾는 책이 없습니다.");
	return 0;
}
//책반납
int return_book(char pbook[][50], char pauthor[][50], char ppublisher[][50], int borrow[], int* pbook_count)
{
	char borrow_book[50];
	char check_out;
	int find = 0, i, j;
	printf("빌릴 책의 이름을 적어주세요:");
	gets(borrow_book);

	for (i = 0; i < *pbook_count; i++)
	{
		for (j = 0; borrow_book[j] != '\0'; j++)
		{
			if (pbook[i][j] == borrow_book[j])//같으면 같음
			{
				find++;
			}
		}
		if (find == j)
		{
			printf("해당하는 책을 찾았습니다\n");
			printf("책의 이름 : %s\n", pbook[i]);
			printf("저자 : %s\n", pauthor[i]);
			printf("출판사 : %s\n", ppublisher[i]);
			printf("대출가능 여부 : ");
			if (borrow[i] == 0) printf("현재 대출중이 아닙니다.\n");
			else
			{
				printf("현재 이책은 반납가능합니다 반납하시겠습니까? y/n\n");
				scanf("%c", &check_out);
				if (check_out == 'y')
				{
					borrow[i] = 0;
					printf("책이 반납되었습니다.");
				}
				else
				{
					printf("반납취소");
				}
			}
			return 0;
		}
	}
	printf("찾는 책이 없습니다.");
	return 0;
}
*/