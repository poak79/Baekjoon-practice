#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n = 20;
	double avr = 0;
	double sum = 0;

	while (n--) {
		string str;
		double grade;
		string res;
		cin >> str >> grade >> res;

		if (res == "A+") {
			avr += grade * 4.5;
			sum += grade;
		} else if (res == "A0") {
			avr += grade * 4.0;
			sum += grade;
		} else if (res == "B+") {
			avr += grade * 3.5;
			sum += grade;
		} else if (res == "B0") {
			avr += grade * 3.0;
			sum += grade;
		} else if (res == "C+") {
			avr += grade * 2.5;
			sum += grade;
		} else if (res == "C0") {
			avr += grade * 2.0;
			sum += grade;
		} else if (res == "D+") {
			avr += grade * 1.5;
			sum += grade;
		} else if (res == "D0") {
			avr += grade * 1.0;
			sum += grade;
		} else if (res == "p" || res == "P") {
			continue;
		} else if (res == "f" || res == "F") {
			avr += grade * 0.0;
			sum += grade;
		}
	}
	double result = avr / sum;
	cout << result;
}