#include <iostream>
using namespace std;


int main()
{
	double n, k, a, operation;
	cin >> n >> k >> a;
	operation = (n * k) / a;
	// cout << operation ;
	long long myNum = operation;


	if (operation == int(operation))
		cout << "int";
	else if (operation == myNum) {
		cout << "long long";

	}
	else {
		cout << "double";

	}
	return 0;
}

