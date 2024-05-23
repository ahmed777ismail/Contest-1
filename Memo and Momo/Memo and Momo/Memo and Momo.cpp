#include <iostream>
using namespace std;


int main()
{
	long long n1, n2, ngame;
	cin >> n1 >> n2 >> ngame;

	if (n1 % ngame == 0 && n2 % ngame == 0)
	{
		cout << "Both";
	}
	else if (n1 % ngame == 0 && n2 % ngame != 0)
	{
		cout << "Memo";
	}
	else if (n1 % ngame != 0 && n2 % ngame == 0)
	{
		cout << "Momo";
	}
	else
	{
		cout << "No One";
	}
}

