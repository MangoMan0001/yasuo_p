#include "yasuo.h"

int	randomize()
{
	int	value;

	value = rand() % 1000;
	if (value < 995)
		return (0);
	else
		return (1);
}

// void omg_yasuo(int n)
// {
// 	char	*yasuo;
// 	char	*yasuo_t;
// 	int		i;

// 	i = 0;
// 	yasuo = "︎⭐︎創世の混沌の闇ヤスオ⭐︎";
// 	yasuo_t = "︎⭐︎創世の混沌の闇ヤスオ⭐︎（天井）";
// 	srand((unsigned int)time(NULL));
// 	if(!(1 <= n && n <= 40))
// 		return (put_error("unuse count"));
// 	while (i < n)
// 	{
// 		if (randomize())
// 		{
// 			ft_printf(yasuo);
// 			i++;
// 			return ;
// 		}
// 		else
// 			ft_printf("はずれ\n");
// 		i++;
// 	}
// 	if (i == 40)
// 		ft_printf(yasuo_t);
// 	printf("i = %d", i);
// }

void omg_yasuo_test(int n)
{
	char	*yasuo;
	char	*yasuo_t;
	int		i;
	int		count_hit;
	int		count_miss;

	i = 0;
	count_hit = 0;
	count_miss = 0;
	yasuo = "︎⭐︎創世の混沌の闇ヤスオ⭐︎";
	yasuo_t = "︎⭐︎創世の混沌の闇ヤスオ⭐︎（天井）";
	srand((unsigned int)time(NULL));
	while (i < n)
	{
		if (randomize())
		{
			ft_printf(yasuo);
			i++;
			count_hit++;
			continue; ;
		}
		else
		{
			ft_printf("はずれ\n");
			count_miss++;
		}
		i++;
	}
	printf("i = %d\n", i);
	printf("hit = %d\n", count_hit);
	printf("miss = %d\n", count_miss);
}

int	main(int args, char **argv)
{
	(void)args;
	omg_yasuo_test(atoi(argv[1]));
	printf ("n = %d", atoi(argv[1]));
}
