#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		int time1, minute1, time2, minute2;
		cin >> time1>> minute1>> time2 >> minute2;
		int r_time=0, r_minute = 0;
		r_minute = minute1 + minute2;
		if (r_minute >= 60)
		{
			r_time++;
			r_minute -= 60;
		}
		r_time += time1 + time2;
		if (r_time > 12)
		{
			r_time -= 12;
		}
		cout << "#" << test_case << " " << r_time << " " << r_minute << endl;
		
	}
	return 0;
}