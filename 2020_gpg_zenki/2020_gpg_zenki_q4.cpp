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
	cout << "���O�F" << student.name << endl
		<< " ����F" << student.japanese << "�_"
		",�Љ�F" << student.society << "�_"
		",���w�F" << student.math << "�_"
		",���v�_�F" << student.japanese + student.society + student.math << "�_" << endl;
}

int main() {
	Student student[3]{
		{"��Y",50,30,70},
		{"���Y",20,40,60},
		{"�O�Y",70,40,90},
	};

	for (int i = 0; i < 3; ++i) {
		Show(student[i]);
	}
}
*/