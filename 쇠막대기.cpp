#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
using namespace std;

string str;
int solution(string arrangement)
{
	int answer = 0;

	stack<char> st;

	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == '(')
			st.push(str[i]);
		else
		{
			st.pop();
			if (str[i - 1] == '(')
				answer += st.size();
			else
				answer++;
		}
	}
	return answer;
}


int main()
{
	cin >> str;

	cout << solution(str);

	system("pause");
}