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

int omg_yasuo_test(int n)
{
	int				i;
	int				count_hit;
	int				count_miss;
	struct timeval	value;

	i = 0;
	count_hit = 0;
	count_miss = 0;
	while (i < n)
	{
		gettimeofday(&value, NULL);
		srand((unsigned int)(value.tv_sec * 1000000 + value.tv_usec));
		if (randomize())
		{
			i++;
			count_hit++;
			continue; ;
		}
		else
		{
			count_miss++;
		}
		i++;
	}
	return (count_hit);
}

int	main(int args, char **argv)
{
	int		hit;
	int		total_hit;
	int		i;
	int		c;

	(void)args;
	i = 0;
	total_hit = 0;
	c = 1000;
	while (i < atoi(argv[1]))
	{
		hit = omg_yasuo_test(c);
		total_hit += hit;
		i++;
		printf("<run %d> case: %d hit: %d  late: %d.%d\n", i, c, hit, hit / 1000, hit % 1000);
	}
	printf("[total_run %d]  total_late: %d.%d", i, total_hit / (i * 1000), total_hit % (i * 1000));
}
