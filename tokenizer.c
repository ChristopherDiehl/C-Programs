//tokenizer.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define getLiteral(a) #a

typedef struct _Tokenizer {
	char *delim;
	char *st;
	int tokens;
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

Tokenizer* create_tokenizer(char *delim, char *string) {
	size_t delimLength = strlen(delim) +1;
	size_t stringLength = strlen(string) +1;
	Tokenizer *tokenizer = (Tokenizer *)malloc(sizeof(Tokenizer));
	tokenizer->delim =delim;
	tokenizer->st = string;
	tokenizer->tokens = 0;

	char *cp_delim = malloc(sizeof(char)*delimLength);
	char *cp_string = malloc(sizeof(char)*stringLength);
	strcpy(cp_delim,delim);
	strcpy(cp_string,string);

	int l;
	for(l=0; l < delimLength; l++){
	}
	int k;
	for(k = 0; k < stringLength; k++){
		if(cp_string[k] = cp_delim[0]) {
			if(delimLength-1 > 1){
				if(cp_string[k-1] == '\n') {cp_string[k] == cp_delim[l];} 
				else {
					int i;
					for(i = 1; i <= l;i++) {cp_string [k-i] == cp_delim[l-i];}
				}	
			} else {cp_string[k] == '\n';}
		}
	}
}

