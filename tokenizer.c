//tokenizer.c

#include <stdio.h>
#include <stdlib.h>
typedef struct _Tokenizer {
	char delim [2];
	char *st;
	int streamP;
} Tokenizer;

void create_tokenizer();
void delete_tokenizer();
char* get_next_token();

int main (char *arg0 , char **arg1) {
	Tokenizer *tokenizer;
	char *argMismatch = "Invalid arguments. \n";
	char *generalError = "An error occured while processing your request. \nPlease try again later. \n";

	printf(generalError);

}



