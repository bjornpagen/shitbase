// echo.c -- implementation of echo

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	if(argc<=1) {
		return 0;
	} else {
		char* filename = argv[1];
		puts(filename);
		return 0;
	}
}
