#include <stdio.h>

int main () {
	char command[100];

	int i;
	for (i=5; i<=16; i++) {
		sprintf (command, "./aaaMath 1.0e-%i >> testMath.txt\n", i);
		system (command);
	}


	for (i=5; i<=16; i++) {
		sprintf (command, "./aaaSage 1.0e-%i >> testSage.txt\n", i);
		system (command);
	}


	return 0;
}
