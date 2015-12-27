#include <stdio.h>
#include <string.h>

void function(int a, int b) {
	int array[5];
	printf ("%d\n",array[6]);

}

int main(void) {
	function(1,2);
	printf("This is where the return address points \n");
}
//to get assembly language code: gcc -S -c foo.c
