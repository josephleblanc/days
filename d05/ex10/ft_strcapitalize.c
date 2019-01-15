// Don't forget to add a header!

int		is_an(char c)
{
	if (('A' <= c && c <= 'Z')
			|| ('a' <= c && c <= 'z')
			|| ('0' <= c && c <= '9'))
		return (1);
	return (0);
}

int		is_cap(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		is_num(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int in_word;

	i = 0;
	in_word = 0;
	while (str[i])
	{
		if (in_word)
		{
			if (is_an(str[i]) && is_cap(str[i]))
				str[i] += 32;
			if (!is_an(str[i]))
				in_word = 0;
		}
		if (!(in_word) && is_an(str[i]))
		{
			if (!(is_cap(str[i]) || (is_num(str[i]))))
				str[i] -= 32;
			in_word = 1;
		}
		i++;
	}
	return (str);
}
