#include <iostream>

using namespace std;

int findgcd(int a, int b) {
	return (b == 0) ?  a : findgcd(b, (b > 0) * (a % b));
}

int main() {
	
	int a, b;
	
	cout << "Enter 2 integers";
	cin >> a;
	cin >> b;
	cout << findgcd(a,b);

}

