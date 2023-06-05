#include <time.h>
#include <stdlib.h>
#include "generate.h"
using namespace std;
#include <iostream>
#include <ctime>
#include <cstdlib>

int Generate::getRandomValue(int a, int b) {
	int num = a + rand() % b;
	return num;
}
string Generate::get_password() {
	cout << password;
	return password;
}
string Generate::get_symbols1() {
	return symbols1;
}
string Generate::get_symbols2() {
	return symbols2;
}
string Generate::get_symbols3() {
	return symbols3;
}
string Generate::get_symbols4() {
	return symbols4;
}
int Generate::get_count() {
	return count;
}
void Generate::createPassword() {
	int c = getRandomValue(1, 2); // задаю буквенное значение первому символу пароля
	if (c == 1) {
		password += symbols1[getRandomValue(0, (symbols1.length() - 1))];
	}
	if (c == 2) {
		password += symbols2[getRandomValue(0, (symbols2.length() - 1))];
	}

	for (int i = 0; i < count-1; i++) { // генерация самого пароля
		int k = getRandomValue(1, 4);
		switch (k) {
		case 1:
			password += symbols1[getRandomValue(0, (symbols1.length() - 1))];
			continue;
		case 2:
			password += symbols2[getRandomValue(0, (symbols2.length() - 1))];
			continue;
		case 3:
			password += symbols3[getRandomValue(0, (symbols3.length() - 1))];
			continue;
		case 4:
			password += symbols4[getRandomValue(0, (symbols4.length() - 1))];
			continue;
		}


	}
}
void Generate::checkPassword() { //проверка пароля на одинаковые символы идущие подряд
	for (int i = 1; i < password.size(); i++) {
		if (password[i] == password[i + 1]) {
			int c = getRandomValue(1, 4);
			switch (c) { // если последующий символ пароля равен текущему то для него генерируется новое знач
			case 1:
				password[i + 1] = symbols1[getRandomValue(0, (symbols1.length() - 1))];
				continue;
			case 2: 
				password[i + 1] = symbols2[getRandomValue(0, (symbols2.length() - 1))];
				continue;
			case 3:
				password[i + 1] = symbols3[getRandomValue(0, (symbols3.length() - 1))];
				continue;
			case 4:
				password[i + 1] = symbols4[getRandomValue(0, (symbols4.length() - 1))];
			}
			for (int i = 1; i < password.size(); i++) {
				if (password[i] == password[i + 1]) {
					checkPassword();
				}
			}
			

		}
	}

}
int Generate::getRandomValue(int a, int b, int key) {
	srand(key);
	int num = a + rand() % (b - a + 1);
	cout << num;
	return num;
}