#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::abs;

double myABS(double);

int main() {
	double num;

	cout << "����һ������" << endl;
	cin >> num;

	cout << "�⺯��abs()�����ֵ " << abs(num) << endl;
	cout << "�Զ���myABS()�����ֵ " << myABS(num) << endl;

	return 0;
}

double myABS(double num) {
	if (num < 0) return -num;
	else return num;
}