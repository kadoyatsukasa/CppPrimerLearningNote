#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void life(int param) {
	static int localStaticVal=2;
	int val=3;
	cout << "�β�" << param << endl;
	cout << "�ֲ�����" << val<<endl;
	cout << "��̬�ֲ�����" << localStaticVal << endl;
}

int main() {

	cout << "life()������ʼ" << endl;
	life(1);
	cout << "life()��������" << endl;
	//cout << localStaticVal << endl;
	
	return 0;
}