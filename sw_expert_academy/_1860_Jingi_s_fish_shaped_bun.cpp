#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, M, K;
int n_time[101];
vector<int> v_time;

bool CanSellBun()
{
	//이 시간일때의 붕어빵의 개수는?
	int Bun = 0;
	int sellBun = 0;
	sort(v_time.begin(), v_time.end(), less<int>());
	for (int i = 0; i < N; i++)
	{
		Bun =(v_time[i] / M) * K;
		if (Bun - sellBun > 0)
		{
			sellBun++;
		}
		else {
			return false;
		}
	}
	return true;
}

int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		cin >> N >> M >> K;
		
		v_time.clear();
		for (int n_count = 0; n_count < N; n_count++)
		{
			int time;
			cin >> time;
			//n_time[n_count] = time;
			v_time.push_back(time);
		}
		cout << "#" << test_case << " ";
		//bool sell = CanSellBun();
		if (CanSellBun())
		{
			cout << "Possible"<<'\n';
		}
		else {
			cout << "Impossible"<<'\n';
		}
	}
	return 0;
}