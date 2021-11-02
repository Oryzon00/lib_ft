#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	ft_bezero(ptr, nmemb * size);
	return (ptr);
}
