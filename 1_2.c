#include <stdio.h>
#include <stdint.h>

uint32_t invert (uint32_t n)
{
	return n ^ 4278190080; 
	//десятичная запись числа 1111 1111 0000 0000 0000 0000 0000 0000
}

int main(int argc, char **argv)
{
	uint32_t n;
	scanf("%u", &n);
	n = invert(n);
	printf("%u \n", n);
	return 0;
}

