/*
#include<iostream>
using namespace std;

const int MAX_NAME = 16;

struct Student
{
	char name[MAX_NAME + 1];
	int japanese;
	int society;
	int math;
};

void Show(const Student& student) {
	cout << "名前：" << student.name << endl
		<< " 国語：" << student.japanese << "点"
		",社会：" << student.society << "点"
		",数学：" << student.math << "点"
		",合計点：" << student.japanese + student.society + student.math << "点" << endl;
}

int main() {
	Student student[3]{
		{"一郎",50,30,70},
		{"次郎",20,40,60},
		{"三郎",70,40,90},
	};

	for (int i = 0; i < 3; ++i) {
		Show(student[i]);
	}
}
*/