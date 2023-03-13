#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct NODE {
	int data;
	struct NODE* nextNode;
	struct NODE* prevNode;
}Node;

Node* CreateNode(int data)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));

	NewNode->data = data;
	NewNode->nextNode = NULL;
	NewNode->prevNode = NULL;

	return NewNode;
}
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
void DeleteNode(Node* destroy, Node* head)
{
	Node* next = head;
	if (destroy == head)
	{
		next->nextNode->prevNode = next->prevNode;
		free(destroy);
		return;
	}
	while (next)
	{
		if (next->nextNode == destroy)
		{
			next->nextNode = destroy->nextNode;
		}
		next = next->nextNode;
	}
	free(destroy);
}
void PrintNode(Node* from)
{
	while (from)
	{
		printf("%d ->", from->data);
		from = from->nextNode;
	}
	printf("\n");
}
//����1
//head �� �־��� �� ��ü ����� ������ ���� int CountNode(Node* head) �Լ��� �ۼ��Ͻÿ�
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
//����2
//head �� ���ϴ� ��尡 �־��� �� 
//Ư�� data �� ������ ��尡 �����ϴ��� Ȯ���ϴ� bool HasNode(Node* head) �Լ��� �ۼ��ϼ���.
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
int main()
{

	Node* Node1 = CreateNode(100);
	Node* Node2 = InsertNode(Node1, Node1, 100);
	Node* Node3 = InsertNode(Node1, Node2, 200);
	Node* Node4 = InsertNode(Node1, Node3, 100);
	//DeleteNode(Node3, Node1);
	PrintNode(Node1);
	printf("���� ����� �� ���� : %d\n", CountNode(Node1));
	/*if (HasNode(Node1))
	{
		printf("��尡 �����մϴ�\n");
	}
	else
	{
		printf("��尡 �������� �ʽ��ϴ�.\n");
	}*/
	printf("NODE1 \n%p \n%p \n %d \n %p\n", Node1, Node1->prevNode, Node1->data, Node1->nextNode);
	printf("NODE2 \n%p \n%p \n %d \n %p\n", Node2, Node2->prevNode, Node2->data, Node2->nextNode);
	printf("NODE3 \n%p \n%p \n %d \n %p\n", Node3, Node3->prevNode, Node3->data, Node3->nextNode);
	printf("NODE4 \n%p \n%p \n %d \n %p\n", Node4, Node4->prevNode, Node4->data, Node4->nextNode);

}

//����
//1. destroy ����
//2. NODE �ּ� prev �� next ����ϴ� �Լ������ 