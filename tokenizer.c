//tokenizer.c

#include <stdio.h>
#include <stdlib.h>
#define getLiteral(a) #a
typedef struct _Tokenizer {
	char delim [3];
	char *st;
	int streamP;
} Tokenizer;

Tokenizer* create_tokenizer();
void delete_tokenizer();
char* get_next_token();

/*
//argc is number of arguments passed to main
//argv is a pointer to the parameters passed into main
//deliminator should be in argv[0]. 
//string should be in argv[1].
*/

int main (int argc , char **argv) {
	Tokenizer *tokenizer;
	char *argMismatch = "Invalid arguments. \n";
	char *generalError = "An error occured while processing your request. \nPlease try again later. \n";
	if (argc != 2) {
		printf("%s",getLiteral(argMismatch));
		return -1;
	}

}

Tokenizer* create_tokenizer(char *delim, char *string){
	size_t delimLength = strlen(delim) +1;
	size_t stringLength = strlen(string) +1;

}

