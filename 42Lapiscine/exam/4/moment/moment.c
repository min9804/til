#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	int		len;
	unsigned int	tmp;
	char 		*ret;
	
	len = n > 0 ? 0 : 1;
	tmp = n > 0 ? n : -n;
	while (tmp)
	{
		tmp /= 10;
		++len;
	}
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	tmp = n > 0 ? n : -n;
	ret[len--] = '\0';
	while (tmp)
	{
		ret[len--] = tmp % 10 + '0';
		tmp /= 10;
	}
	if (n < 0)
		ret[0] = '-';
	return (ret);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char 	*ret;
	int	i;
	int	j;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	j = 0;
	while (s1[i])
	{
		ret[i] = s1[i];
		++i;
	}
	while (s2[j])
		ret[i++] = s2[j++];
	ret[i] = '\0';
	return (ret);
}

int		ft_cal(int n)
{
	if(n >= 2592000)
		n = n / 2592000;
	else if(n >= 86400)
		n = n /86400;
	else if(n >= 3600)
		n = n / 3600;
	else if(n >= 60)
		n = n / 60;
	return (n);
}

char	*moment(unsigned int duration)
{
	char *str;
	char *str_dur;
	char *new_str;
	int 	n;

	n = ft_cal(duration);
	if (duration >= 25920000)
		str = " month ago.";
	else if (duration >= 86400)
		str = " day ago.";
	else if (duration >= 3600)
		str = " hour ago.";
	else if (duration >= 60)
		str = " minute ago.";
	else
		str = " second ago.";
	if (n)
		str_dur = ft_itoa(n);
	else
		str_dur = "0";
	new_str = ft_strjoin(str_dur, str);
	return (new_str);
}

int		main(void)
{
	printf("%s\n", moment(25920000));
	printf("%s\n", moment(95678918));
	printf("%s\n", moment(2768));
	printf("%s\n", moment(30));
	printf("%s\n", moment(0));
	return (0);
}
