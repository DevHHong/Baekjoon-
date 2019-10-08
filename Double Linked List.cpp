#include<iostream>

using namespace std;



typedef struct _Node
{
	int data;
	_Node *next;
	_Node *before;
} Node;

typedef struct _List
{
	int NumOfData;
	Node *head, *current, *tail;
}List;
void Initialize(List* list)
{
	list->head = NULL;
	list->current = NULL;
	list->tail = NULL;
	list->NumOfData = 0;
}
void InsertTail(List* list, int data)
{
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data = data;
	newnode->next = NULL;
	newnode->before = NULL;
	if (list->NumOfData != 0)
	{
		list->tail->next = newnode;
		newnode->before = list->tail;
	}
	else
	{
		list->head = newnode;
	}
	list->tail = newnode;
	(list->NumOfData)++;
}
void DeleteTail(List* list)
{
	if (list->NumOfData == 0)
	{
		cout << "삭제할 노드가 없습니다.";
		return;
	}
	else if (list->NumOfData == 1)
	{
		cout << "모두 삭제 완료!";
		free(list->tail);
		(list->NumOfData)--;
		return;
	}
	Node* Temp = (Node*)malloc(sizeof(Node));
	Temp = list->tail;
	list->tail = list->tail->before;
	list->tail->next = NULL;
	free(Temp);
	(list->NumOfData)--;
}
void PrintHead(List* list)
{
	cout << endl << endl;
	list->current = list->head;
	int num = list->NumOfData;
	cout << "------(Print from Head)-----" << endl;

	while (num > 0)
	{
		cout << list->current->data << " ";
		list->current = list->current->next;
		num--;
	}
	cout << endl << endl;
}
void PrintTail(List* list)
{
	list->current = list->tail;
	int num = list->NumOfData;
	cout << "------(Print From Tail)-----" << endl << endl;

	while (num > 0)
	{
		cout << list->current->data << " ";
		list->current = list->current->before;
		num--;
	}
	cout << endl << endl;
}
void main()
{
	List* LList = (List*)malloc(sizeof(List));

	Initialize(LList);
	InsertTail(LList, 1);
	InsertTail(LList, 2);
	InsertTail(LList, 3);
	InsertTail(LList, 4);
	InsertTail(LList, 5);

	PrintHead(LList);
	PrintTail(LList);

	DeleteTail(LList);
	DeleteTail(LList);
	DeleteTail(LList);
	DeleteTail(LList);
	DeleteTail(LList);

	PrintHead(LList);
	PrintTail(LList);
}