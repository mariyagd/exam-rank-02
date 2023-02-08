#include <unistd.h>

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


unsigned char	reverse_bits(unsigned char octet)
{
/*	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}*/
	int	i = 0;
	unsigned char res = 0;

	while (i < 8)
	{
		res = res | ((octet >> i) & 1 ) << (7 - i);
		i++;
	}
	return (res);
}

#include <stdio.h>
int	main(void)
{
	unsigned char c;

	c = 156;
	print_bits(c);
	printf("\n");
	c = reverse_bits(c);
	print_bits(c);

	return (0);
}

