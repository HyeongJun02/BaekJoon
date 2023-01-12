#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

#define endl '\n'

#pragma warning (disable:4996)
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); // cin, cout 속도 증가
	string inp;
	getline(cin, inp); // inp 입력
	int firstLength = inp.length(); // inp 길이 저장
	string inp_rev;
	inp_rev = inp; // inp 값 복사
	reverse(inp_rev.begin(), inp_rev.end()); // inp 값 거꾸로 저장
	//cout << inp_rev << inp.length() << endl; // 출력 확인
	int i = 0;
	while (inp_rev != inp) {
		inp.insert(firstLength, 1, inp[i]); // inp 뒤에 문자 추가
		inp_rev = inp; // inp 값 복사
		reverse(inp_rev.begin(), inp_rev.end()); // inp 값 거꾸로 저장
		i++;
		//cout << inp << endl; // 출력 확인
	}
	cout << inp.length() << endl;
}