#include <stdio.h>
/*
 * main - Entry
 * return:always 0
 */
int main(void){
	printf("size of char: %f byte(s)\n", sizeof(char));
	printf("size of int: %f byte(s)\n", sizeof(int));
	printf("size of long int: %f byte(s)\n", sizeof(long int));
	printf("size of long long int: %f byte(s)\n", sizeof(long long int));
	printf("size of float: %f byte(s)\n", sizeof(float));
	return (0);
}
