#include <iostream>
#include<iomanip> 
using namespace std;
int main()
{
	float x, b;
	cin >> x >> b;
	float  y = (b * 100) / (100 - x);
	cout << fixed << setprecision(2) << y << endl;
}