
#include<iostream>
using namespace std;

void allCalc(int* a, int* b) {
	
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

	cout << "�v�Z�������l����͂��Ă�������" << endl;
	cout << "��ڂ̐���" << endl;
	cin >> firstnum;

	cout << "��ڂ̐���" << endl;
	cin >> secondnum;

	allCalc(p, q);
}
