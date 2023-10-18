#include<stdio.h>



int main()
{
	int num = 0;
	scanf_s("%d", &num);
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
		{
			count++;

		}
		num /= 2;
		

	}
	printf("%d\n", count);

	return 0;
}













//int main()
//{
//	int a = 4;//0100
//	int b = 6;//0110
//	a = a ^ b;//0010;
//	b = a ^ b;//0100;
//	a = b ^ a;
//	printf("%d\n", a);
//}