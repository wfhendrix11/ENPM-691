/*
  * cerberus.c, Impossible statement 
  */
 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char **argv) {
	int a = 13, b = 17;

	if (a != b) {
		printf("Sorry!\n");
		return 0;
	}
	printf("Hide me by not printing this line\n");

	printf("Looking forward to the winter break!\n");

	exit(1);
 }
