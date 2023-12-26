#include <stdio.h>

int main()
{
	int a,b=6; 
	a = 5 + 3;
	b = !(a || 8); 
	do
	{
		a = 5;
		do
		{
			int k = 123 + 456 * 123;
			a = a + b;
		}
		while(a < b);
	}
	while (a<1); 
	
}
