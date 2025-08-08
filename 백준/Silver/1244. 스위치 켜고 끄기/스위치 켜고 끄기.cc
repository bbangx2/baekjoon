#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
	int sex;
	int number;
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int switch_qty;
	cin >> switch_qty;

	vector<bool> switch_status(switch_qty);

	for (int i = 0; i < switch_qty; i++)
	{
		bool a;
		cin >> a;
		switch_status[i] = a;
	}

	int student_num;
	cin >> student_num;

	vector<Student> student;

	for (int i = 0; i < student_num; i++)
	{
		int a, b;
		cin >> a >> b;
		student.push_back({ a, b });
	}

	for (int i = 0; i < student_num; i++)
	{
		if (student[i].sex == 1)
		{
			for (int j = 0; j < switch_qty; j++)
			{
				if (!((j + 1) % student[i].number))
				{
					switch_status[j] = !switch_status[j];
				}
			}
		}
		
		if (student[i].sex == 2)
		{
			for (int j = 0; j < switch_qty; j++)
			{
				int s_left = student[i].number - j - 1;
				int s_right = student[i].number + j - 1;
				if ((s_left < 0) || (s_right >= switch_qty))
					break;
				else
				{
					if (s_left == s_right)
					{
						switch_status[s_left] = !switch_status[s_left];
						continue;
					}
					else if (switch_status[s_left] == switch_status[s_right])
					{
						switch_status[s_left] = !switch_status[s_left];
						switch_status[s_right] = !switch_status[s_right];
					}
					else if (switch_status[s_left] != switch_status[s_right])
						break;
				}
			}
		}
	}

	for (int i = 0; i < switch_qty; i++)
	{
		cout << switch_status[i] << ' ';
		if (!((i + 1) % 20))
			cout << '\n';
	}

	return 0;
}