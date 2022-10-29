#include <iostream>
using namespace std;

int main() {
	//Welcome to NicOS 1.0!
	//You'll need to input your name, the current date, and the date you were born in MM DD YYYY with a new line for each number. Please be aware that bugs are not nonexistent.
	string name;
	cin >> name;
	int crntmnth;
	cin >> crntmnth;
	int crntdy;
	cin >> crntdy;
	int crntyr;
	cin >> crntyr;
	int mm;
	cin >> mm;
	int dd;
	cin >> dd;
	int yyyy;
	cin >> yyyy;
	int age = (crntyr - yyyy);
	if (crntmnth < mm) {
		--crntyr;
		crntmnth += 12;
	}
	int age2 = mm - crntmnth;
	if (age2 >> 12) {
		age2 -= 12;
	}
	if (crntdy < dd) {
		if (crntmnth == 1) {
			dd += 31;
		} else if (crntmnth == 2) {
			dd += 28;
		} else if (crntmnth == 3) {
			dd += 31;
		} else if (crntmnth == 4) {
			dd += 30;
		} else if (crntmnth == 5) {
			dd += 31;
		} else if (crntmnth == 6) {
			dd += 30;
		} else if (crntmnth == 7) {
			dd += 31;
		} else if (crntmnth == 8) {
			dd += 31;
		} else if (crntmnth == 9) {
			dd += 30;
		} else if (crntmnth == 10) {
			dd += 31;
		} else if (crntmnth == 11) {
			dd += 30;
		} else if (crntmnth == 12) {
			dd += 31;
		}
	}
	int age ==
	cout << "Hello ";
	cout << name;
	cout << "!\nYou are ";
	cout << age;
	cout << " years, ";
	cout << age2;
	cout << " months, and ";
	cout << age3;
	cout << " days old.";
	return 0;
}
