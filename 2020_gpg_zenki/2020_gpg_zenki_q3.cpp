
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

	cout << "ŒvŽZ‚µ‚½‚¢’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;
	cout << "ˆê‚Â–Ú‚Ì”Žš" << endl;
	cin >> firstnum;

	cout << "“ñ‚Â–Ú‚Ì”Žš" << endl;
	cin >> secondnum;

	allCalc(p, q);
}
