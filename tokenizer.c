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

int main () {
	int n;
	scanf("%d",&n);
	printf("N: %d",n);
}



