#include<iostream>

using namespace std;

int n, m;

int main()
{
	//�� �Ѱ� ������ 2�� Ʈ��ȥ
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		cin >> n >> m;
		int uni = 0;
		int twin = 0;
		int diff = n - m;
		twin = n - m;
		uni = m - twin;
		
		cout << "#" << test_case << " " << uni << " " << twin << endl;
	}
	return 0;
}