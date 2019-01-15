// Don't forget to add a header!

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
			return (0);
	}
	return (1);
}
