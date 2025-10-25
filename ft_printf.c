#include "yasuo.h"

static int	read_mod(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar_fd((unsigned char)va_arg(args, int), 1));
	if (format == 's')
		return (ft_putstr_fd(va_arg(args, const char *), 1));
	if (format == 'p')
		return (ft_putptr_fd(va_arg(args, void *), 1));
	if (format == 'd' || format == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	if (format == 'u')
		return (ft_putnbr_fd(va_arg(args, unsigned int), 1));
	if (format == 'x')
		return (ft_put0x_fd(va_arg(args, unsigned int), 1));
	if (format == 'X')
		return (ft_put0xx_fd(va_arg(args, unsigned int), 1));
	if (format == '%')
		return (ft_putchar_fd('%', 1));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		result;

	i = 0;
	result = 0;
	va_start(args, format);
	while (format[i])
	{
		count = 0;
		if (format[i] == '%')
		{
			count = read_mod(args, format[i + 1]);
			if (count == -1)
				return (-1);
			result += count;
			i += 2;
			continue ;
		}
		if (ft_putchar_fd(format[i++], 1) == -1)
			return (-1);
		result++;
	}
	return (result);
}
