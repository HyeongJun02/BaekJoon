#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

#define endl "\n"

using namespace std;

vector<pair<string, int>> words;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
	if (a.second != b.second) return a.second > b.second; // 1. 빈도수 많은 순
	if (a.first.length() != b.first.length()) return a.first.length() > b.first.length(); // 2. 길이 긴 순
	return a.first < b.first; // 3. 사전 순
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M;
	cin >> N >> M;

	// 정렬되지 않은 map
	unordered_map<string, int> map_words;

	for (int i = 0; i < N; i++) {
		string word;
		cin >> word;

		if (word.length() >= M)
			// 입력받은 word가 key 값인 value를 1 증가
			map_words[word]++;
	}

	// map -> vector 복사
	for (const auto& p : map_words) {
		// emplace_back : vector가 새로운 요소를 추가할 때, 객체를 직접 생성해서 바로 넣는 함수
		words.emplace_back(p.first, p.second);
	}

	sort(words.begin(), words.end(), cmp);

	for (const auto& p : words) {
		cout << p.first << endl;
	}

	return 0;
}
