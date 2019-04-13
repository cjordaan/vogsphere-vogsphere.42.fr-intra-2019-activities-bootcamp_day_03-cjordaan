#include <stdio.h>
#include <unistd.h>
int	factorial(int num)
{
	if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}

int	ft_recursive_factorial(int nb)
{
	if (nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	if (nb <= 0)
	{
		return (0);
	}
	else
	{
		return (factorial(nb));
	}
	return (factorial(nb));
}

int main()
{
  printf("%d",ft_recursive_factorial(0));
  return(0);
}
