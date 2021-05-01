#include <stdio.h>
#include <string.h>

void function(char* str) {
	char buffer[256];
	strcpy(buffer, str);
}

int main(int argc, char** argv) {
	int no =1;
	int* ptr = &no;
	function(argv[1]);
}
