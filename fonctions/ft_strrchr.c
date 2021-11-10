#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char *output;

	i = 0;
	output = NULL;
	while (s[i])
	{
		if (s[i] == c)
			output = (char*)(&s[i]);
		i++;
	}
	if (c == 0)
		return ((char *)(&s[i]));
	return (output);
}
