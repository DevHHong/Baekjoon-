#include <stdio.h>
#include <math.h>
#include<string>
#include <stdlib.h>             // <- malloc �ʿ�
#include <iostream>

using namespace std;
void main(void)
{
	int* arr = (int*)malloc(4 * sizeof(int));         //16 Byte
	arr[0] = 1;
	arr[1] = 2;
	*(arr + 2) = 3;

	//arr �����Ҵ��ϰ� ��ū �޸� �ʿ��� ��� �ϳ��� ���������
	int* tmp = (int*)malloc(8 * sizeof(int));
	int i;
	//arr[] �� �ִ°͵��� tmp[]�� ��������
	for (i = 0; i < 4; i++)
		tmp[i] = arr[i];
	//arr�� �� ũ�� �Ҵ��� tmp�� �־��ش�.
	arr = tmp;

	//���� arr[4] || arr[5] �� ������� �������� tmp�� �־��༭ ��밡��
	arr[4] = 4;
	arr[5] = 5;
}
