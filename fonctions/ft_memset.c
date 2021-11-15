#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*adresse;

	i = 0;
	adresse = s;
	while (n)
	{
		adresse[i] = (unsigned char) c;
		i++;
		n--;
	}
	return (s);
}
