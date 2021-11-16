#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size <= i)
		return (size + j);
	else
		j = j + i;
	k = 0;
	while (src[k] != '\0' && i + 1 < size)
		dest[i++] = src[k++];
	dest[i] = '\0';
	return (j);
}

int	main(void)
{
	char	*dest;
	
	if(!(dest = malloc(15)))
			return (0);
	ft_memset(dest, 'r', 15);
	printf("%zu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
	write(1, dest, 15);
}
