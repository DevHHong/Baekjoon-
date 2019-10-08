#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

typedef struct tagNode
{
	int data;
	struct tagNode *next;
} NODE;

NODE *head, *tail, *working;

// ����Ʈ�ʱ�ȭ

void InitList();

// ����Ÿ�ϳ��߰�

void Insert(int n);

// �־�������Ÿ������

void Delete(int n);

// ����Ÿ����λ���

void RemoveAll();

// ���縮��Ʈ�ǰ�������δ��ؼ������ش�.

void AddAll();

// �־�������Ÿ�Ͱ�����尳����ī��Ʈ

int Count(int n);

// ���縮��Ʈ�Ǹ�系���������ش�.

void DisplayList();

int main()
{
	// ����Ʈ�ʱ�ȭ

	InitList();

	Insert(10);
	Insert(20);
	Insert(30);
	Insert(40);
	Insert(50);
	Insert(10);


	// Display �Լ����̿��Ͽ����Ḯ��Ʈ�ǵ����͵�������Ѵ�.

	DisplayList();

	// ��ü�����

	AddAll();

	// ����Ÿ����10 �γ���ǰ�����ī��Ʈ

	Count(10);

	// ������
	Delete(10);
	DisplayList();
	Delete(50);
	DisplayList();
	Delete(20);
	DisplayList();

	RemoveAll();
	return 0;
}



void InitList()
{
	// ����Ʈ�ʱ�ȭ
	head = NULL;
	tail = NULL;
	working = NULL;
}
void Insert(int n)
{
	// ���γ�带�ϳ�������������
	working = (NODE*)malloc(sizeof(NODE));
	printf("Adding %d\n", n);
	working->data = n;

	// �̰��̲�����
	working->next = NULL;

	// ����Ӹ�����������̰��̸Ӹ���

	if (head == NULL)
	{
		head = working;
		tail = working;
		return;
	}
	else
	{
		// �Ӹ����ƴ϶�鸶��������带�����ϰ�
		tail->next = working;
		// �̰��̲�����
		tail = working;
	}
}



void Delete(int n)
{
	// �ƹ�������Ÿ��������
	if (head == NULL)
		// �����ϵ�����.
		return;
	// �ϴܸӸ��������´�.
	working = head;
	NODE* node;
	// ��������ã�Ƽ�����
	while (working)
	{
		if (working->data == n)
		{
			printf("Deleting %d...\n", working->data);
			if (working == head)
			{
				head = working->next;
				delete working;
			}
			else
			{
				node->next = working->next;
				delete working;
			}
			Delete(n);   // �ٸ����������������
			break;
		}
		node = working;
		working = working->next;
	}
}

void RemoveAll()
{
	// �Ӹ��������ͼ�
	working = head;
	// ����������

	while (working)
	{
		NODE *node = working;
		// ��������غ�
		working = working->next;
		// ������
		printf("Deleting %d\n", node->data);
		free(node);
		node = NULL;
	}
	InitList();
	printf("All elements deleted.\n");
}

void AddAll()
{
	int sum = 0;
	working = head;
	while (working)
	{
		sum += working->data;
		working = working->next;
	}
	printf("Sum of all : %d\n", sum);
}

int Count(int n)
{
	int count = 0;
	working = head;
	while (working)
	{
		if (working->data == n)

			++count;
		working = working->next;
	}
	printf("Count of %d : %d\n", n, count);
	return count;
}

void DisplayList()

{
	printf("Display all element : ");
	printf("head = ");
	working = head;
	while (working)
	{
		printf("%d -> ", working->data);
		working = working->next;
	}
	printf("= tail\n");
}