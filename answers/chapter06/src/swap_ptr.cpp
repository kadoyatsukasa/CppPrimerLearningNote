#include<iostream>

using std::cout;
using std::cin;
using std::endl;

//  [3/12/2020 Erik]
//��������ָ��
//
//	@param first ��һ��ָ��
//	@param second �ڶ���ָ��
void swap_ptr(int *&first, int *&second) {
	int* temp;
	temp = first;
	first = second;
	second = temp;
}

int main() {
	int first;
	int second;
	int* first_ptr = &first;
	int* second_prt = &second;

	cout << "����������" << endl;
	cin >> first >> second;
	cout << endl;

	//��ʼֵ
	cout << "first = " << first << " , second = " << second << endl;
	cout << "*first_ptr = " << *first_ptr << " , *second_ptr = " << *second_prt << endl;
	cout << "first_ptr =" << first_ptr << " , second_ptr = " << second_prt << endl;
	cout << "&first = " << &first << " , &second = " << &second << endl;
	cout << endl;

	cout << "����λ��" << endl;
	swap_ptr(first_ptr, second_prt);
	
	//��֤
	cout <<"first = " <<first<<" , second = " << second<<endl;
	cout <<"*first_ptr = "<<*first_ptr <<" , *second_ptr = " <<*second_prt << endl;
	cout << "first_ptr =" << first_ptr << " , second_ptr = " << second_prt << endl;
	cout << "&first = " << &first << " , &second = " << &second << endl;
} 