#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ptr_s1;
	const char	*ptr_s2;
	size_t	i;

	i = 0;
	ptr_s1 = s1;
	ptr_s2 = s2;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}