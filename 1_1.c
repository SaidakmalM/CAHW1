#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	int n, current, max = -294967296, count=1;
	scanf("%d", &n);
	scanf("%d", &max);
	n--;
	for (;n;n--)
	{
		scanf("%d", &current);
		if (current > max)
		{
			max = current;
			count = 1;
		}
		else if (current == max)
		{
			count++;
		}
	}
	printf("%d \n", count);
	return 0;
}

