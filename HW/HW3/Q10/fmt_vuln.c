#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	char b[128];
	strcpy(b, argv[1]); // Ignore buff overflow here.
	printf(b);
	printf("\n");
}
