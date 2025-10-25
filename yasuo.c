#include "yasuo.h"

void mfc_yasuo(int n)
{
	char	*yasuo;
	char	*yasuo_t;
	int		i;

	if(!(1 <= n && n <= 40))
		return (put_error("unuse count"));
	i = 0;
	yasuo = "︎⭐創世の混沌の闇ヤスオ⭐";
	yasuo_t = "︎⭐︎創世の混沌の闇ヤスオ⭐︎（天井）";
	while (i < n)
	{
		if (randomize(n))
		{
			put_str(yasuo);
			retunrn ()
	}

}
