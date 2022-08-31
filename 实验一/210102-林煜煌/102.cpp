#include<iostream>
using namespace std;
int main()
#define PI 3.14;
{
	double r, h, V;
	cout << "r=";
	cin >> r;
	cout << "h=";
	cin >> h;
	V = r * r * h*1.0/3*PI;
	cout << "V=" << V;
	return 0;
}
