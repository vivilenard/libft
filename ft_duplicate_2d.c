#include "libft.h"

char	**dupclicate_2d(char **str)
{
	int		i;
	int		size;
	char	**copy;

	size = 0;
	i = 0;
	if (!str || !*str)
		return (NULL);
	while (str[size])
		size++;
	copy = (char **) malloc(sizeof(char *) * (size + 1));
	if (!copy)
		return (NULL);
	while (str[i])
	{
		copy[i] = ft_strdup(str[i]);
		if (!copy[i])
			return (NULL);
		i++;
	}
	copy[i] = NULL;
	return (copy);
}
