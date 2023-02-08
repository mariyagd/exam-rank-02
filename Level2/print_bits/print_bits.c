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
	int	i = 7;
	unsigned char 	bit;

	while (i >= 0)
	{
		bit = (octet >> i & 1 ) + '0';
		write(1, &bit, 1);
		i--;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	unsigned char c;
	unsigned char c2;
	int	a = 4555;

	c = 0;
	print_bits(c);
	printf("\n");

	c = 255;
	print_bits(c);
	printf("\n");

	printf("\nTEST DEPLACEMENT DE BITS\n");
	c = *((char *)&a);
	c2 = c;
	print_bits(c);
	printf("\n");
	printf("%d\n", c & 1);

	c2 = c >> 7;
	print_bits(c2);
	printf("\n");
	printf("%d\n", c2 & 1);

	c2 = c >> 6;
	print_bits(c2);
	printf("\n");
	printf("%d\n", c2 & 1);

	c2 = c >> 5;
	print_bits(c2);
	printf("\n");
	printf("%d\n", c2 & 1);
	
	c2 = c >> 4;
	print_bits(c2);
	printf("\n");
	printf("%d\n", c2 & 1);
	
	c2 = c >> 3;
	print_bits(c2);
	printf("\n");
	printf("%d\n", c2 & 1);

	c2 = c >> 2;
	print_bits(c2);
	printf("\n");
	printf("%d\n", c2 & 1);
	
	c2 = c >> 1;
	print_bits(c2);
	printf("\n");
	printf("%d\n", c2 & 1);
	
	c2 = c >> 0;
	print_bits(c2);
	printf("\n");
	printf("%d\n", c2 & 1);

	return (0);
}
*/
