#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*adresse;
	int		i;

	adresse = s;
	i = 0;
	while (n)
	{
		adresse[i] = 0;
		i++;
		n--;
	}
}
