using namespace std;
#include <iostream>


int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	if (a == b || a - b == 1 || b - a == 1) {
		if (a == 0 && b == 0) {
			cout << "NO";
		}
		else {
			cout << "YES";
		}
	}
	else {
		cout << "NO";
	}

	return 0;
}

