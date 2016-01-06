//class to play around with concept of pointers && structs

#include <stdio.h>

struct testSquare {
	char x;
	char y;
};
int find_area(struct testSquare);
int main(void) {
	struct testSquare square;
	square.x = 5;
	square.y = 6;
	find_area(square);
	int *p;int c,d;
	c = 10;
	p = &c;
	d = *p;
	d++;
	p = &d;
	int a = *p;
	printf("D: %d",d);
	printf("a: %d",a);
	printf("c: %d",c);




	return 0;
}

int find_area(struct testSquare pStruct) {
	int area = pStruct.x * pStruct.y;
	printf("Area = %d \n",area);
	return area;
}
