
#include<iostream>

using namespace std;

float user_input();
float convert(float x);

int main() {
	float conval = convert(user_input());
	cout << conval << " Cm";
}

float user_input() {
	float x;
	cout << "Enter length :";
	cin >> x;

	return x;
}

float convert(float x) {
	return x * 2.54;
}