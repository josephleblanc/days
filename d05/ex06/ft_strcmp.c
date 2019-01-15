// Don't forget to add a header!

int		ft_strcmp(char *s1, char*s2)
{
	long s1_len;
	long s2_len;

	s1_len = -1;
	s2_len = -1;

	while (s1[s1_len++] != '\n');
	while (s2[s2_len++] != '\n');
	return (s1_len - s2_len);
}
