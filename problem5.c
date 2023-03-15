#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//����1
//head �� �־��� �� ��ü ����� ������ ���� int CountNode(Node* head) �Լ��� �ۼ��Ͻÿ�

//����2
//head �� ���ϴ� ��尡 �־��� �� 
//Ư�� data �� ������ ��尡 �����ϴ��� Ȯ���ϴ� bool HasNode(Node* head) �Լ��� �ۼ��ϼ���.

//���� 3
//�ռ� �����Ͽ��� Node �� �������� '�� ��带 ����Ű�� ���' �� ���� �� �� ���ٴ� ���̴�. 
//�̸� �����ϱ� ����
//struct Node {
//	int data;              /* ������ */
//	struct Node* nextNode; /* ���� ��带 ����Ű�� �κ� */
//	struct Node* prevNode; /* ���� ��带 ����Ű�� �κ� */
//};
//�������� ��带 ������ �ռ� �ۼ��ߴ� ��� �Լ����� �ٽ� �ۼ��غ��ÿ�

//����4
//���� ���� ������ ��带 �����Ͽ� 
//head �� �� ������ ����� tail �� prevNode �� ����Ű�� ������ ��带 �����ÿ�. 
//�ٽ� ���� ����� ó���� ���� ���ٰ� �� �� �ִ�. 
//�̷��� ������ ��带 �̿��Ͽ� �ռ� �����Ͽ��� ��� �Լ��� �����غ��ÿ� 
/*
typedef struct NODE {
	int data;
	struct NODE* nextNode;
	struct NODE* prevNode;
}Node;
//�ʱ����
Node* CreateNode(int data)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));

	NewNode->data = data;
	NewNode->nextNode = NULL;
	NewNode->prevNode = NULL;

	return NewNode;
}
//�ʱ���� ������
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
//���������ϱ�
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

			//���̸� head prevNode �缳��
			if (destroy->nextNode == NULL)
			{
				head->prevNode = next;
			}
			//���� �ƴϸ� destroy�ڿ� Node�� prev�� �ٲ۴�.
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
//��� ���
void PrintNode(Node* from)
{
	while (from)
	{
		printf("%d ->", from->data);
		from = from->nextNode;
	}
	printf("\n");
}
//��� ��������
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
//���ȿ� ã�� ������ Ȯ��
bool HasNode(Node* head)
{
	int data;
	printf("ã�� �����͸� �Է����ּ���: ");
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
//�����Լ�
int main()
{
	Node* Node1 = CreateNode(100);
	Node* head = Node1;
	Node* Node2 = InsertNode(head, Node1, 200);
	Node* Node3 = InsertNode(head, Node2, 300);
	Node* Node4 = InsertNode(head, Node3, 400);
	head = DeleteNode(head, Node2);
	PrintNode(head);
	printf("���� ����� �� ���� : %d\n", CountNode(Node1));
	if (HasNode(Node1))
	{
		printf("��尡 �����մϴ�\n");
	}
	else
	{
		printf("��尡 �������� �ʽ��ϴ�.\n");
	}

	return 0;
}
*/

//����5
//���� ���¿��� ������� ���� ���� ���α׷��� ���� �Ҵ�� ����ü�� �̿��Ͽ� ��������
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
		printf("******************************���� ���� ���α׷�******************************\n");
		printf("1. å�߰� 2.å����˻� 3.å������ 4.å�ݳ��ϱ� 5.����\n");
		printf("�Ͻ� �۾��� �������ּ��� : ");
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
			printf("�ٽ� �Է����ּ���\n");
		}
	}

	free(book);
	return 0;
}
//å �߰�
void Add_Book(Book** book, int* book_count)
{
	*book = (Book*)realloc(*book, sizeof(Book) * *book_count);
	printf("----------���ο� å ���----------\n");
	printf("å�� �̸��� �Է����ּ���: ");
	gets((*book)[*book_count - 1].name);
	printf("������ �̸��� �Է����ּ���: ");
	gets((*book)[*book_count - 1].author);
	printf("���ǻ��� �̸��� �Է����ּ���: ");
	gets((*book)[*book_count - 1].publisher);

	(*book)[*book_count - 1].borrowed = 0;

	Print_Book(*book, *book_count - 1);

	*book_count += 1;


}
//å �˻�
int Search(Book* book, int book_count)
{
	char temp[50];

	printf("ã�� å�� �̸��� �˻����ּ���:");
	scanf("%s", temp);
	for (int i = 0; i < book_count - 1; i++)
	{
		if (!strcmp(temp, book[i].name))
		{
			printf("å�� ã�ҽ��ϴ�!\n");
			Print_Book(book, i);
			return 0;
		}
	}
	printf("ã�� å�� �����ϴ�.\n");
	return 1;
}
//å �������
void Print_Book(Book* book, int book_num)
{
	printf("å �̸�: %s\n", book[book_num].name);
	printf("���� �̸�: %s\n", book[book_num].author);
	printf("���ǻ� �̸�: %s\n", book[book_num].publisher);
	printf("���� ���� : ");
	if (book[book_num].borrowed == 0) printf("�뿩����\n"); else printf("������\n");
}
//å ������
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
			printf("�̹� ����� å�Դϴ�.\n");
		}
		else
		{
			printf("�����Ͻðڽ��ϱ�?\ny/n : ");
			getchar();
			scanf("%c", &temp);

			if (temp == 'y')
			{
				book[i].borrowed = 1;
				printf("����Ǿ����ϴ�.\n");
			}
			else
			{
				printf("��ҵǾ����ϴ�.\n");
			}
		}
	}
}
//å �ݳ��ϱ�
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
			printf("������ �ȵ�å�Դϴ�.\n");
		}
		else
		{
			printf("�ݳ��Ͻðڽ��ϱ�?\ny/n : ");
			getchar();
			scanf("%c", &temp);

			if (temp == 'y')
			{
				book[i].borrowed = 0;
				printf("�ݳ��Ǿ����ϴ�.\n");
			}
			else
			{
				printf("��ҵǾ����ϴ�.\n");
			}
		}
	}
}
*/