// Don't forget to add a header!

char	*ft_strstr(char *str, char *to_find)
{
	long si;
	long fi;
	char *found;

	si = 0;
	fi = 0;

	while (str[si] != '\0')
	{
		while (str[si] == to_find[fi])
			{
				if (to_find[fi] == '\0')
				{
					found = &to_find[fi];
					return found
				}
				si++;
				fi++;
			}
		si = fi + 1;
		fi = 0
	}
	return (NULL)
}
