#include <unistd.h>
/*
void	print_bits(unsigned char octet)
{
	unsigned int	n;

	n = 128;
	while (n > 0)
	{
		if (octet >= n)
		{
			write(1, "1", 1);
			octet = octet - n;
		}
		else
			write(1, "0", 1);
		n = n / 2;
	}
}
*/
void print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char 	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

/*
#include <stdio.h>
int	main(void)
{
	unsigned char c;

	c = 0;
	print_bits(c);
	printf("\n");

	c = 255;
	print_bits(c);
	printf("\n");

	c = 5;
	print_bits(c);
	printf("\n");
	return (0);
}*/

