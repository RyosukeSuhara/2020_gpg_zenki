
#include<iostream>
using namespace std;

float allCalc(int* a, int* b) {
	
	int calc[4] = { *a + *b,*a - *b,*a * *b,*a / *b };

	for (int i = 0; i < 4; ++i) {
		cout << calc[i] << endl;
	}
}

int main() {
	int firstnum = 0;
	int secondnum = 0;
	int* p = &firstnum;
	int* q = &secondnum;

	cout << "計算したい値を入力してください" << endl;
	cout << "一つ目の数字" << endl;
	cin >> firstnum;

	cout << "二つ目の数字" << endl;
	cin >> secondnum;

	cout << allCalc(p, q) << endl;
}
