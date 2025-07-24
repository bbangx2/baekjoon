#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string now_time;
	string start_time;

	cin >> now_time;
	cin >> start_time;

	int now_h = stoi(now_time.substr(0, 2));
	int now_m = stoi(now_time.substr(3, 2));
	int now_s = stoi(now_time.substr(6, 2));

	int start_h = stoi(start_time.substr(0, 2));
	int start_m = stoi(start_time.substr(3, 2));
	int start_s = stoi(start_time.substr(6, 2));

	int now_total = now_h * 3600 + now_m * 60 + now_s;
	int start_total = start_h * 3600 + start_m * 60 + start_s;

	if (start_total < now_total)
		start_total += 3600 * 24;

	int diff_time = start_total - now_total;

	int res_h = diff_time / 3600;
	int res_m = (diff_time % 3600) / 60;
	int res_s = (diff_time % 60);

	cout << setfill('0') << setw(2) << res_h << ':'
		<< setfill('0') << setw(2) << res_m << ':'
		<< setfill('0') << setw(2) << res_s << endl;

	return 0;
}