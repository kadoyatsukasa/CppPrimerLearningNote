#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//������
void reset(int& num) {
	
	num = 0;
}

int main() {
	int num;
	cout<<"��������"<<endl;
	cin >> num;
	cout << "����" << endl;
	reset(num);
	cout << num << endl;
	return 0;
}