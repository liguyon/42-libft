#include "libft.h"

int	ft_print_error(int error_code, const char *message)
{
    const char	*color_start = ANSI_COLOR_RED;
    const char	*color_reset = ANSI_COLOR_RESET;
	int			fd = STDERR_FILENO;

	write(fd, color_start, ft_strlen(color_start));
	write(fd, message, ft_strlen(message));
	write(fd, color_start, ft_strlen(color_reset));
	return (error_code);
}