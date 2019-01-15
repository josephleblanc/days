// Don't forget to add a header!


char	*ft_strncpy(char *dest, char *src)
{
	int i;
	
	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = src[i];
	return (dest);
}
