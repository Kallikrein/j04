#include <stdio.h>

int	ft_recursive_power (int nb, int n);

int main ()
{
		int i;
		int j;
		int sum;
		int pow;
		
		i = -2;
		j = -1;
		sum = 0;
		while (i < 5)
		{
			pow = ft_recursive_power(i++, j++);
			sum = sum + pow;
			printf("%d ", pow);
			sum =(sum + ft_recursive_power(0, 1)) * ft_recursive_power(0, 0);
		}
		printf("\n%d\n", sum);
		return (sum - 1115);			
}
