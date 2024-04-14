#pragma warning (disable:4996)
using namespace std;

#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

typedef struct {
	char name[100];
	int korean;
	int english;
	int math;
}student_info;

vector<student_info> students;

bool compareStudents(const student_info& a, const student_info& b) {
	// 국어 점수 감소 순서
	if (a.korean != b.korean) {
		return a.korean > b.korean;
	}
	// 국어 점수가 같을 때 -> 영어 점수 증가 순서
	else if (a.english != b.english) {
		return a.english < b.english;
	}
	// 국어 점수와 영어 점수가 같을 때 -> 수학 점수 감소 순서
	else if (a.math != b.math) {
		return a.math > b.math;
	}
	// 모든 점수가 같을 때 -> 이름 사전순 증가 순서
	return strcmp(a.name, b.name) < 0;
}

int main() {
	int testCase;
	scanf("%d", &testCase);
	for (int i = 0; i < testCase; i++) {
		student_info new_student;
		scanf("%s %d %d %d", new_student.name, &new_student.korean, &new_student.english, &new_student.math);
		students.push_back(new_student);
		// printf("name: %s\n", students[i].name);
		// printf("korean: %d\n", students[i].korean);
		// printf("english: %d\n", students[i].english);
		// printf("math: %d\n", students[i].math);
	}

	std::sort(students.begin(), students.end(), compareStudents);

	for (const student_info& student : students) {
		printf("%s\n", student.name);
	}

	return 0;
}