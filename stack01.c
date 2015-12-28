#include <stdio.h>
#include <string.h>

void function(int a, int b) {
	int array[5];
	int i ;
	printf("Size of array: %ld",sizeof(array));
	for(i=0; i<sizeof(array); i ++){
		array[i] = i;
		printf("%d\n" , array[i]);

	}
	//printf("%d\n" , array[6]);

}

main() {
	function(1,2);
	printf("This is where the return address points \n");
}
/*to get assembly language code: gcc -S -c foo.c
//to compile to executable (only for single source) use :
//gcc stack01.c -o stack*/



