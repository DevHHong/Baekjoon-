#include <stdio.h>
#include <math.h>
#include<string>
#include <stdlib.h>             // <- malloc 필요
#include <iostream>

using namespace std;
void main(void)
{
	int* arr = (int*)malloc(4 * sizeof(int));         //16 Byte
	arr[0] = 1;
	arr[1] = 2;
	*(arr + 2) = 3;

	//arr 동적할당하고 더큰 메모리 필요할 경우 하나더 만들어준후
	int* tmp = (int*)malloc(8 * sizeof(int));
	int i;
	//arr[] 에 있는것들을 tmp[]도 갖고있음
	for (i = 0; i < 4; i++)
		tmp[i] = arr[i];
	//arr을 더 크게 할당한 tmp로 넣어준다.
	arr = tmp;

	//원래 arr[4] || arr[5] 는 사용하지 못하지만 tmp로 넣어줘서 사용가능
	arr[4] = 4;
	arr[5] = 5;
}
