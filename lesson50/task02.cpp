#include <iostream>

using namespace std;

int sub(int a, int b);
int sum(int a, int b);

int main() {
	int a, b;


	cout << "input a and b: ";
	cin >> a >> b;


	
	cout << sum(a, b) + sub(a, b) << endl;

	return 0;
}