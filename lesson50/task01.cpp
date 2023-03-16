#include <iostream>

using namespace std;

int sub(int a, int b);
int sum(int a, int b);
int sum(int a, int b, int c );

int main() {
	int a, b, c;


	cout << "input a and b: ";
	cin >> a >> b >> c;

	cout << sum(a, b, c) + sub(a, b) << endl;

	return 0;
}