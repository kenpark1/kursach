using namespace std;
#include "generate.h"
#include <time.h>

int main() {
	srand(time(NULL));
	Generate generate;

	generate.createPassword();
	generate.checkPassword(); 
	generate.get_password();
	


	return 0;
}