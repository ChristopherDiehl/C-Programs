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
//deliminator should be in argv[1]. 
//string should be in argv[2].
*/

int main (int argc , char **argv) {
	Tokenizer *tokenizer;
	char *argMismatch = "Invalid arguments. \n";
	char *generalError = "An error occured while processing your request. \nPlease try again later. \n";
	if (argc != 3) {
		printf("%s",getLiteral(argMismatch));
		return -1;
	}

}

Tokenizer* create_tokenizer(char *delim, char *string) {
	size_t delimLength = strlen(delim);
	size_t stringLength = strlen(string) +1;
	Tokenizer *tokenizer = (Tokenizer *)malloc(sizeof(Tokenizer));
	tokenizer->delim =delim;
	tokenizer->st = string;
	tokenizer->tokens = 0;

	char *cp_string = malloc(sizeof(char)*stringLength);
	strcpy(cp_string,string);

	int k;
	for(k = 0; k < stringLength; k++){
		if(cp_string[k] = delim[0]) {
			cp_string[k] = '\0';
			//handles if delim is longer than one i.e. "%d". If k < length of string - length of delim +1. Prevent array index out of bounds exception
			//(+1 compensates for lack of null character)
			if(delimLength > 1 && k < (stringLength - delimLength+1)){
				int l;
				//loops through and puts \0 where delim is found;
				//if it encounters case like %%d then it loops back and returns %
				for(l=1; l < delimLength; l++){
					if(cp_string[k+l] = delim[l]) 
						cp_string[k+l] = '\0';
					else {
						cp_string[k]= delim[l];
						while(l > 1){
							cp_string[k+l]= delim[k+l];
							l--;
						}
						break;
					}
					tokens++;
				}	
			}
		}
	}
}

