//cat.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char** argv) {
	if(argc <= 1) {
		// read from stdin, and print it back to stdout
		char c;
		while(c = fgetc(stdin)) {
			fputc(c, stdout);
		}
		return 0;
	} else {
		// print the file at argv[1]
		char* filename = argv[1];
		int64_t size;
		char c;

		FILE* rfp = fopen(filename, "rb");
		fseek(rfp, 0, SEEK_END);
		size = ftell(rfp);
		fseek(rfp, 0, SEEK_SET);

		for(int64_t n = 0; n < size; n++) {
			c = fgetc(rfp);
			fputc(c, stdout);
		}

		fclose(rfp);
		return 0;
	}
}
