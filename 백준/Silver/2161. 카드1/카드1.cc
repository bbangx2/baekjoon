#include <iostream>
#include <deque>

using namespace std;

int main() {
	int N;
	cin >> N;

	deque<int> dq;

	for (int i = N; i > 0; i--)
	{
		dq.push_back(i);
	}

	int a = 0;
	while (1)
	{
		cout << dq.back() << ' ';
		dq.pop_back();
		if (dq.empty()) break;
		a = dq.back();
		dq.push_front(a);
		dq.pop_back();
	}
	

}