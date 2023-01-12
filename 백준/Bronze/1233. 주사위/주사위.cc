#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) //false면 swap
{
	if (a.second == b.second) return a.first < b.first;
	else return a.second > b.second;
	
}

int main()
{
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	map<int,int> m;
	vector<pair<int, int>> v;

	for (int i = 1;i <= s1;i++)
	{
		for (int j = 1;j <= s2;j++)
		{
			for (int k = 1;k <= s3;k++)
			{
				m[i+j+k] += 1;
			}
		}
	}

	for (auto u : m)
	{
		pair<int, int> p;
		p.first = u.first;
		p.second = u.second;
		v.push_back(p);
	}

	sort(v.begin(), v.end(), compare);


	cout << v[0].first;


	return 0;
}