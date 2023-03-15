#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//문제1
//head 가 주어질 때 전체 노드의 개수를 세는 int CountNode(Node* head) 함수를 작성하시오

//문제2
//head 와 원하는 노드가 주어질 때 
//특정 data 를 가지는 노드가 존재하는지 확인하는 bool HasNode(Node* head) 함수를 작성하세요.

//문제 3
//앞서 구현하였던 Node 의 단점으로 '이 노드를 가리키는 노드' 를 쉽게 알 수 없다는 점이다. 
//이를 보완하기 위해
//struct Node {
//	int data;              /* 데이터 */
//	struct Node* nextNode; /* 다음 노드를 가리키는 부분 */
//	struct Node* prevNode; /* 이전 노드를 가리키는 부분 */
//};
//형식으로 노드를 만들어보고 앞서 작성했던 모든 함수들을 다시 작성해보시오

//문제4
//위와 같은 형식의 노드를 개량하여 
//head 가 맨 마지막 노드인 tail 을 prevNode 로 가리키는 원형의 노드를 만들어보시오. 
//다시 말해 노드의 처음과 끝이 없다고 볼 수 있다. 
//이러한 형태의 노드를 이용하여 앞서 구현하였던 모든 함수를 구현해보시오 
/*
typedef struct NODE {
	int data;
	struct NODE* nextNode;
	struct NODE* prevNode;
}Node;
//초기생성
Node* CreateNode(int data)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));

	NewNode->data = data;
	NewNode->nextNode = NULL;
	NewNode->prevNode = NULL;

	return NewNode;
}
//초기다음 노드생성
Node* InsertNode(Node* head, Node* current, int data)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));

	NewNode->data = data;
	NewNode->nextNode = current->nextNode;
	NewNode->prevNode = current;
	
	current->nextNode = NewNode;
	
	if (NewNode->nextNode == 0)
	{
		head->prevNode = NewNode;
	}

	return NewNode;
}
//삭제구현하기
Node* DeleteNode(Node* head, Node* destroy)
{
	Node* next = head;
	if (destroy == head)
	{
		if (next->nextNode != NULL)
		{
			next->nextNode->prevNode = next->prevNode;
			head = next->nextNode;
		}
		free(destroy);
		return head;
	}
	while (next)
	{
		if (next->nextNode == destroy)
		{
			next->nextNode = destroy->nextNode;

			//끝이면 head prevNode 재설정
			if (destroy->nextNode == NULL)
			{
				head->prevNode = next;
			}
			//끝이 아니면 destroy뒤에 Node의 prev를 바꾼다.
			else
			{
				destroy->nextNode->prevNode = next;
			}
		}
		next = next->nextNode;
	}
	free(destroy);
	return head;
}
//노드 출력
void PrintNode(Node* from)
{
	while (from)
	{
		printf("%d ->", from->data);
		from = from->nextNode;
	}
	printf("\n");
}
//노드 개수세기
int CountNode(Node* head)
{
	int count = 0; 
	while (head)
	{
		count++;
		head = head->nextNode;
	}
	return count;
}
//노드안에 찾는 데이터 확인
bool HasNode(Node* head)
{
	int data;
	printf("찾을 데이터를 입력해주세요: ");
	scanf("%d", &data);
	while (head)
	{
		if (head->data == data)
		{
			return 1;
		}
		head = head->nextNode;
	}
	return 0;
}
//메인함수
int main()
{
	Node* Node1 = CreateNode(100);
	Node* head = Node1;
	Node* Node2 = InsertNode(head, Node1, 200);
	Node* Node3 = InsertNode(head, Node2, 300);
	Node* Node4 = InsertNode(head, Node3, 400);
	head = DeleteNode(head, Node2);
	PrintNode(head);
	printf("현재 노드의 총 개수 : %d\n", CountNode(Node1));
	if (HasNode(Node1))
	{
		printf("노드가 존재합니다\n");
	}
	else
	{
		printf("노드가 존재하지 않습니다.\n");
	}

	return 0;
}
*/

//문제5
//이전 강좌에서 만들었던 도서 관리 프로그램을 동적 할당과 구조체를 이용하여 만들어보세요
/*
typedef struct BOOK {
	char name[50];
	char author[50];
	char publisher[50];
	int borrowed;
}Book;

void Add_Book(Book** book, int* book_count);
int Search(Book* book, int book_count);
void Print_Book(Book* book, int book_num);
void Rent_Book(Book* book, int book_num);
void Return_Book(Book* book, int book_num);
int main()
{
	Book* book;
	int book_count = 1;
	int sel;
	book = (Book*)malloc(sizeof(Book));

	while (1) {
		printf("******************************도서 대출 프로그램******************************\n");
		printf("1. 책추가 2.책제목검색 3.책빌리기 4.책반납하기 5.종료\n");
		printf("하실 작업을 선택해주세요 : ");
		scanf("%d", &sel);
		getchar();
		switch (sel)
		{
		case 1:
			Add_Book(&book, &book_count);
			break;
		case 2:
			Search(book, book_count);
			break;
		case 3:
			Rent_Book(book, book_count);
			break;
		case 4:
			Return_Book(book, book_count);
			break;
		case 5:
			return 0;
		default:
			printf("다시 입력해주세요\n");
		}
	}

	free(book);
	return 0;
}
//책 추가
void Add_Book(Book** book, int* book_count)
{
	*book = (Book*)realloc(*book, sizeof(Book) * *book_count);
	printf("----------새로운 책 등록----------\n");
	printf("책의 이름을 입력해주세요: ");
	gets((*book)[*book_count - 1].name);
	printf("저자의 이름을 입력해주세요: ");
	gets((*book)[*book_count - 1].author);
	printf("출판사의 이름을 입력해주세요: ");
	gets((*book)[*book_count - 1].publisher);

	(*book)[*book_count - 1].borrowed = 0;

	Print_Book(*book, *book_count - 1);

	*book_count += 1;


}
//책 검색
int Search(Book* book, int book_count)
{
	char temp[50];

	printf("찾을 책의 이름을 검색해주세요:");
	scanf("%s", temp);
	for (int i = 0; i < book_count - 1; i++)
	{
		if (!strcmp(temp, book[i].name))
		{
			printf("책을 찾았습니다!\n");
			Print_Book(book, i);
			return 0;
		}
	}
	printf("찾는 책이 없습니다.\n");
	return 1;
}
//책 정보출력
void Print_Book(Book* book, int book_num)
{
	printf("책 이름: %s\n", book[book_num].name);
	printf("저자 이름: %s\n", book[book_num].author);
	printf("출판사 이름: %s\n", book[book_num].publisher);
	printf("대출 여부 : ");
	if (book[book_num].borrowed == 0) printf("대여가능\n"); else printf("대출중\n");
}
//책 빌리기
void Rent_Book(Book* book, int book_num)
{
	char temp;
	bool book_has;
	book_has = Search(book, book_num);
	if (book_has == 1) return;
	for (int i = 0; i < book_num - 1; i++)
	{
		if (book[i].borrowed != 0)
		{
			printf("이미 대출된 책입니다.\n");
		}
		else
		{
			printf("대출하시겠습니까?\ny/n : ");
			getchar();
			scanf("%c", &temp);

			if (temp == 'y')
			{
				book[i].borrowed = 1;
				printf("대출되었습니다.\n");
			}
			else
			{
				printf("취소되었습니다.\n");
			}
		}
	}
}
//책 반납하기
void Return_Book(Book* book, int book_num)
{
	char temp;
	bool book_has;
	book_has = Search(book, book_num);
	if (book_has == 1) return;
	for (int i = 0; i < book_num - 1; i++)
	{
		if (book[i].borrowed == 0)
		{
			printf("대출이 안된책입니다.\n");
		}
		else
		{
			printf("반납하시겠습니까?\ny/n : ");
			getchar();
			scanf("%c", &temp);

			if (temp == 'y')
			{
				book[i].borrowed = 0;
				printf("반납되었습니다.\n");
			}
			else
			{
				printf("취소되었습니다.\n");
			}
		}
	}
}
*/