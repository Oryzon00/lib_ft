#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	(unsigned char)	c;
	int	i;
	char*	adresse;

	i = 0;
	adresse = s;
	while (n)
	{
		adresse[i] = c;
		i++;
		n--;
	}
	return (s);
}
