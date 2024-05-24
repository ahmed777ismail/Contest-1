#include <iostream>
using namespace std;



int main()
{
	char c;
	cin >> c;


	char nextChar = (c == 'z') ? 'a' : c + 1;


	cout << nextChar << endl;

	return 0;
}

