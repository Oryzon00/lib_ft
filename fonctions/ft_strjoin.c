#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*output;

	i = 0;
	j = 0;
	output = (char *)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2)+ 1));
	if (output == NULL)
		return (NULL);
	while (s1[i])
		output[j++] = s1[i++];
	i = 0;
	while (s2[i])
		output[j++] = s2[i++];
	output[j] = '\0';
	return (output);
}
