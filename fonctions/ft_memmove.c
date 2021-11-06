#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	char	*dest_ptr;
	const char	*src_ptr;

	dest_ptr = dest;
	src_ptr = src;
	i = 0;
	if (dest_ptr >= src_ptr)
		while (n-- > 0)
			dest_ptr[n] = src_ptr[n];
	else
		while (i++ < n)
			dest_ptr[i] = src_ptr[i];
	return (dest);
}