//variation of Geeks for Geeks
#include <stdio.h>
#include <string.h>


void swap(char *x, char *y) {

	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
//abc == abc, acb, cab, cba, bac, bca
void permutate(char *string, int leftIndex, int rightIndex) {

	if(leftIndex == rightIndex)
		printf("String: %s\n",string);
	else {
		int i;
		for(i = leftIndex; i <= rightIndex; i ++){
			swap((string+leftIndex),(string+rightIndex));
			permutate(string, leftIndex +1, rightIndex);
			swap((string+leftIndex),(string+i));
		}
	}
}

int main() {
	char str[] = "AB";
	int n = strlen(str);
	permutate(str,0,n-1);
}