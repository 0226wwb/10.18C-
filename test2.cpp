#include<stdio.h>



int main()
{
	int num = 0;
	scanf_s("%d", &num);
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) &1))
		{
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}
