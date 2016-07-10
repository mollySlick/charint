/* 
Integers into char array into integer array into integers
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b;
	a = 69;
	b = 420;
	printf("In: %i, %i\r\n", a, b);
	
	// Declaration, allocation
	char* buf;
	buf = (char*)malloc(sizeof(int) * 2);
	
	// Assignment
	((int*)buf)[0] = a;
	((int*)buf)[1] = b;
	
	printf("Char buffer: %i, %i\r\n",((int*)buf)[0], ((int*)buf)[1]);
	
	// Translation
	int* intbuf = (int*)malloc(sizeof(int) * 2);
	intbuf[0] = ((int*)buf)[0];
	intbuf[1] = ((int*)buf)[1];
	
	printf("Int buffer: %i, %i", intbuf[0], intbuf[1]);
	
	free(buf);
	free(intbuf);
}
