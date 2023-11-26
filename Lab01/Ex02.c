#include <iostream>

using namespace std;

void drawtable(int x);
int user_input();

int main() {
	drawtable(user_input());
}

void drawtable(int x) {
	int i;
	for (i = 1; i <= 12; i++) {
		cout << x << " * " << i << " = " << i * x << endl;
	}
}

int user_input() {
	int x;

	cout << "Enter Number :";
	cin >> x;

	return x;
}