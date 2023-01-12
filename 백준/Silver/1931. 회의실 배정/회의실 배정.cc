#pragma warning (disable:4996)

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int N, end, begin;
	vector<pair<int, int>> schedule;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> begin >> end;
		schedule.push_back(make_pair(end, begin));
	}

	sort(schedule.begin(), schedule.end());

	int time = schedule[0].first;
	int cnt = 1;
	for (int i = 1; i < N; i++)
	{
		if (time <= schedule[i].second)
		{
			cnt++;
			time = schedule[i].first;
		}
	}
	cout << cnt << endl;

	return 0;
}