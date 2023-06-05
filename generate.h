#pragma once
#pragma once
using namespace std;
#include <string>

class Generate {
private:
	string password = "";
	string symbols1 = "qwertyuiopasdfghjklzxcvbnm";
	string symbols2 = "QWERTYUIOPASDFGHJKLZXCVBNM";
	string symbols3 = "1234567890";
	string symbols4 = "!$%&'()*+,-.:;<=>?@[]^_`{}~";
	int count = 12;
public:
	void set_password(string s);
	string get_password();
	string get_symbols1();
	string get_symbols2();
	string get_symbols3();
	string get_symbols4();
	void set_count(int a);
	int get_count();
	void createPassword();
	void checkPassword();
	int getRandomValue(int a, int b);
	int getRandomValue(int a, int b, int key);
};