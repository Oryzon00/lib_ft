#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	const char	*ptr_s;

	i = 0;
	(unsigned char) c;
	ptr_s = s;
	while (i < n)
	{
		if (ptr_s[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
