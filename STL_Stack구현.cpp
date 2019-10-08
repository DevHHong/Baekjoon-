#include <iostream>

using namespace std;
#define STACK_SIZE 100
int Stack_top = -1;
int stack[STACK_SIZE];
//==========================================================================
void push(int input);
int pop();
void print();
int isEmpty(void);
int getSize(void);
//==========================================================================
//peek�� pop���� �����Ҷ� -- ���ϸ� �� (�׳� �����������Թ��� �������ϴ°���)
//del�� ���� top �� --���ָ鳡 pop�� �ٸ����� �����̾�� �׳�(�Ⱥ����ְ�) �����ְ� ���� �����ִ°Ź�ȯ�ϰ�(�����ְ�) ����
void main()
{
	int number = 1;
	cout << "���� �Է��Ͻÿ�." << endl;
	while (number != 0)
	{
		cout << "���� �Է��� �� : ";
		cin >> number;
		push(number);
		print();
	}
}
void print()
{
	cout << "<Stack>" << endl;
	for (int i = 0; i <= Stack_top; i++)
	{
		cout << stack[i] << endl;
	}
	cout << endl << endl;
}
void push(int input)
{
	stack[++Stack_top] = input;
	if (Stack_top <= (STACK_SIZE - 1))	  return;
}
int pop()
{
	return stack[Stack_top--];		//���� �������� ���� �����͸� ��ȯ
}
int isEmpty(void)
{
	if (Stack_top == -1)     //������ �������
	{
		return 1; // True
	}
	else
		return 0;    //������ ������� ����
}
int getSize(void)
{
	return Stack_top + 1;
}