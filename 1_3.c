#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	unsigned int n,current,one=0;
	scanf("%u", &n);
	for (;n;n--)
	{
		scanf("%u", &current);
		one ^= current;
	}
	printf("%u \n", one);
	return 0;
}

