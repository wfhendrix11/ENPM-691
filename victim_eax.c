#include <string.h>

void  function(char* str) {
   char buffer[80];
   strcpy(buffer, str);
}


int main(int argc, char** argv) {
    function(argv[1]);
}


