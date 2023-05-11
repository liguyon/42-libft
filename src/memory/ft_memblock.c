#include "libft.h"

t_memblock	*ft_memblock_init(size_t size)
{
	t_memblock	*block;

	block = (t_memblock *)malloc(sizeof(t_memblock));
	if (!block)
		return (NULL);
	block->address = malloc(size);
	if (!block->address)
	{
		free(block);
		return (NULL);
	}
	block->size = size;
	block->used_space = 0;
	return (block);
}

void	*ft_memblock_add(t_memblock *block, size_t size)
{
	void	*res;

	if (block->used_space + size > block->size)
	{
		block->size *= 2;
		block->address = ft_realloc(block->address, block->size);
		if (!block->address)
			return (NULL);
	}
	res = (char *)block->address + block->used_space;
	block->used_space += size;
	return (res);
}

void	ft_memblock_free(t_memblock *block)
{
	free(block->address);
	free(block);
}
