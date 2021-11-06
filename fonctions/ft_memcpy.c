#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	char	*dest_ptr;
	const char	*src_ptr;

	i = 0;
	dest_ptr = dest;
	src_ptr = src;

	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
