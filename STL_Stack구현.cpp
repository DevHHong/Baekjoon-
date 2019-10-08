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
//peek는 pop에서 리턴할때 -- 안하면 끝 (그냥 마지막에들어간게뭔가 참조만하는것임)
//del은 스택 top 을 --해주면끝 pop와 다른것은 리턴이없어서 그냥(안보여주고) 지워주고 팝은 지워주는거반환하고(보여주고) 삭제
void main()
{
	int number = 1;
	cout << "값을 입력하시오." << endl;
	while (number != 0)
	{
		cout << "내가 입력한 값 : ";
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
	return stack[Stack_top--];		//가장 마지막에 들어온 데이터를 반환
}
int isEmpty(void)
{
	if (Stack_top == -1)     //스택이 비어있음
	{
		return 1; // True
	}
	else
		return 0;    //스택이 비어있지 않음
}
int getSize(void)
{
	return Stack_top + 1;
}