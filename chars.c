//chars.c

#include <stdio.h>

int main() {
	char *charPointer = "This is a char pointer";
	char charArray[] = "This is a char pointer";
	size_t pointerSize = sizeof(charPointer);
	size_t arraySize = sizeof (charArray);
	printf("Pointer size: %zu\n",pointerSize);
	printf("Array size: %zu\n",arraySize);

}