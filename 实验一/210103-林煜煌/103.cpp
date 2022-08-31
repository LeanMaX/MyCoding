#include <iostream>
using namespace std;
int main()
{
	int a;
	char b;
	short c;
	long d;
	float e;
	double f;
	wchar_t g;
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "short length:" << sizeof(short) << endl;
	cout << "long length:" << sizeof(long) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "double length:" << sizeof(double) << endl;
	cout << "wchar_t length:" << sizeof(wchar_t) << endl;
	return 0; 
}