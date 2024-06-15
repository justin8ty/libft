#include "libft.h"

// strstr() locates substr in str
// finds needle *find in a haystack *s
// strstr() with size

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (find[0] == '\0')
	{
		return ((char *)s);
	}
	while (s[i] && i < len)
	{
		while (s[i + j] == find[j] && i + j < len)
		{
			j++;
			// full match found
			if (find[i] == '\0')
				// points to the substr of haystack
				return ((char *)s + i);
		}
		i++;
		// ensures each i compared with beginning j
		j = 0;
	}
	return (NULL);
}