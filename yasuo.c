#include "yasuo.h"

static int	randomize()
{
	int	value;

	value = rand() % 1000;
	if (value < 995)
		return (0);
	else
		return (1);
}

void omg_yasuo(int n)
{
	int				i;
	struct timeval	value;
	char			*yasuo;
	char			*yasuo_t;

	i = 0;
	yasuo_t = "︎⭐︎創世の混沌の闇ヤスオ⭐︎（天井）";
	yasuo = "︎⭐︎創世の混沌の闇ヤスオ⭐︎";
	if(!(1 <= n && n <= 40))
		return (put_error("unuse count"));
	while (i < n)
	{
		gettimeofday(&value, NULL);
		srand((unsigned int)(value.tv_sec * 1000000 + value.tv_usec));
		if (randomize())
		{
			sleep(1);
			ft_printf(yasuo);
			return ;
		}
		else
		{
			sleep(1);
			ft_printf("はずれ\n");
		}
		i++;
	}
	if (i == 40)
		ft_printf(yasuo_t);
}
