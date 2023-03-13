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
//삭제구현하기
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
//문제1
//head 가 주어질 때 전체 노드의 개수를 세는 int CountNode(Node* head) 함수를 작성하시오
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
//문제2
//head 와 원하는 노드가 주어질 때 
//특정 data 를 가지는 노드가 존재하는지 확인하는 bool HasNode(Node* head) 함수를 작성하세요.
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
int main()
{

	Node* Node1 = CreateNode(100);
	Node* Node2 = InsertNode(Node1, Node1, 100);
	Node* Node3 = InsertNode(Node1, Node2, 200);
	Node* Node4 = InsertNode(Node1, Node3, 100);
	//DeleteNode(Node3, Node1);
	PrintNode(Node1);
	printf("현재 노드의 총 개수 : %d\n", CountNode(Node1));
	/*if (HasNode(Node1))
	{
		printf("노드가 존재합니다\n");
	}
	else
	{
		printf("노드가 존재하지 않습니다.\n");
	}*/
	printf("NODE1 \n%p \n%p \n %d \n %p\n", Node1, Node1->prevNode, Node1->data, Node1->nextNode);
	printf("NODE2 \n%p \n%p \n %d \n %p\n", Node2, Node2->prevNode, Node2->data, Node2->nextNode);
	printf("NODE3 \n%p \n%p \n %d \n %p\n", Node3, Node3->prevNode, Node3->data, Node3->nextNode);
	printf("NODE4 \n%p \n%p \n %d \n %p\n", Node4, Node4->prevNode, Node4->data, Node4->nextNode);

}

//할일
//1. destroy 구현
//2. NODE 주소 prev 값 next 출력하는 함수만들기 