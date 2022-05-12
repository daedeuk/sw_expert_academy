#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= 10; test_case++)
	{
		string number_plate;
		int change_count;
		cin >> number_plate >> change_count;
		vector<int> v_number;
		for (int v_index = 0; v_index < number_plate.length(); v_index++)
		{
			int n_index = number_plate[v_index] - 48;
			v_number.push_back(n_index);
		}
		//1. �����ʿ� ���ʺ��� ū�� ������ ����ū���� �ǿ�������.
		while (change_count > 0)
		{
			for (int v_index = 0; v_index < v_number.size() - 1; v_index++)
			{
				int max_value = v_number[v_index];
				int max_index = v_index;
				//�ڿ��� ���� ã�ƾߴ�
				for (int c_index = v_number.size() - 1; c_index > v_index; c_index--)
				{
					if (v_number[c_index] > max_value)
					{
						max_value = v_number[c_index];
						max_index = c_index;
					}
				}
				//for (int c_index = v_index + 1; c_index < v_number.size(); c_index++)
				if (max_value > v_number[v_index])
				{
					int temp_value = v_number[v_index];
					v_number[v_index] = v_number[max_index];
					v_number[max_index] = temp_value;
					change_count--;
				}
				if (change_count == 0)
				{
					break;
				}
			}
			//2. ������ �� ������ 2���� �ٲٴ°� ���� ���� ����.
			if (change_count > 0)
			{
				int end_index = v_number.size() - 1;
				int temp_number = v_number[end_index];
				v_number[end_index] = v_number[end_index - 1];
				v_number[end_index - 1] = temp_number;
				change_count--;
			}
		}
		cout << "#" << test_case << " ";
		for (int output_index = 0; output_index < v_number.size(); output_index++)
		{
			cout << v_number[output_index];
		}
		cout << endl;
		
	}
	return 0;
}