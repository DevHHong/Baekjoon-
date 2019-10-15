#include <iostream> 
#include <deque> 
using namespace std;
int n, r = {};
deque<int> deq; 
deque<int>::iterator iter; 
int main() 
{
	cin >> n >> r;
	for (int i = 1; i <= n; i++)
		deq.push_back(i);
	int cnt = 0;
	for (int i = 0; i < r; i++) 
	{ 
		int now; cin >> now; 
		int size = deq.size();
		int index = 1; 
		for (iter = deq.begin(); iter < deq.end(); iter++) //내가 찾고자 하는 수의 인덱스를 찾는다.
		{ 
			if (*iter == now)break; index++; 
		} 
		int left = index - 1;
		int right = size - index + 1; 

		if (left < right) 
		{
			for (int i = 1; i <= left; i++) 
			{
				deq.push_back(deq.at(0)); 
				deq.pop_front(); cnt++; 
			} 
			deq.pop_front();
		} 

		else 
		{ 
			for (int i = 1; i <= right; i++) 
			{
				deq.push_front(deq.at(size-1));
				deq.pop_back(); cnt++; 
			} 
			deq.pop_front(); 
		} 
	}
	cout << cnt << endl;
	return 0; 
}

