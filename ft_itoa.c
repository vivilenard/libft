#include "libft.h"
int *ft_vz(char *s, size_t vz)
{
	if (vz == 1)
		s[0] = '-';
	if (vz == 2)
	{
		s[0] = '-';
		s[1] = '2';
	}
	return (0);
}
int *ft_allocation(char *s, size_t count, size_t vz, size_t n)
{
	s[count + vz] = '\0';
	count--;
	while (n >= 10 && count + vz > vz)
	{
		s[count + vz] = n % 10 + '0';
		n = n / 10;
		count--;
	}
	s[count + vz] = n % 10 + '0';
	return (0);
}
char *ft_itoa(int n)
{
	size_t      i;
	size_t      count;
	size_t      vz;
	char        *s;

	i = 1;
	vz = 0;
	count = 0;
	if (n == -2147483648)
	{
		vz = 2;
		n = 147483648;
	}
	if (n < 0)
	{
		vz = 1;
		n = n * -1;
	}
	if (n == 0)
		count = 1;
	while (n / i > 0)
	{
		i = i * 10;
		count++;
	}
	s = malloc((count + vz + 1) * sizeof(char));
	printf("%zu\n", count);
	ft_vz(s, vz);
	ft_allocation(s, count, vz, n);
	return (s);
}
