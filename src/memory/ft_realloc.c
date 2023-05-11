#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*res;

	if (!size)
	{
		free(ptr);
		return (NULL);
	}
	res = malloc(size);
	if (!res)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr)
	{
		ft_memcpy(res, ptr, size);
		free(ptr);
	}
	return (res);
}
