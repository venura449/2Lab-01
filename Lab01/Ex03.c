#include <iostream>
#include<string>

using namespace std;

int cube(int x);
int square(int x);
int get_user_inputs();

int main() {
	int value = get_user_inputs();
	cout << "Square of the Number : " + to_string(square(value)) << endl;
	cout << "Cube of the Number : " + to_string(cube(value)) << endl;
}

int cube(int x) {
	return x * x * x;
}

int square(int x) {
	return x * x;
}
int get_user_inputs() {
	int x;
	cout << "Enter Number :";
	cin >> x;
	return x;
}