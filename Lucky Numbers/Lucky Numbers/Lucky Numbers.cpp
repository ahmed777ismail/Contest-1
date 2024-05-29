#include<iostream>
using namespace std;
int main() {
	int num, x, y;
	cin >> num;
	x = num % 10;
	y = num / 10;
	if ((x % y == 0) || (y % x == 0))
	{

		cout << "YES";

	}
	else {
		cout << "NO";
	}

}