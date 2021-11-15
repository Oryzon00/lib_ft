#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*new_str;

	i = 0;
	while (ft_strchr(set, s1[i]) != 0 && s1[i])
		i++;
	start = i;
	if (s1[i] == 0)
		return (ft_calloc(1, sizeof(char)));
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != 0 && s1[i])
			i--;
	end = i;
	i = -1;
	new_str = (char *)malloc(sizeof(char) * (end - start + 1 + 1));
	if (new_str == NULL)
		return (NULL);
	while (++i < end - start + 1)
		new_str[i] = s1[i + start];
	new_str[i] = '\0';
	return (new_str);
}
