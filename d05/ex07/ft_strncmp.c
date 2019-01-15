// Don't forget to add a header!
// Also how does the standard application do with
// strings that are longer than the MAX_INT?

#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int s1_len;
	int s2_len;

	s1_len = 0;
	s2_len = 0;

	while (s1[s1_len] != '\0' && s1_len <= n)
			s1_len++;
	while (s2[s2_len] != '\0' && s2_len <= n)
			s2_len++;
	printf("s1_len is %d\t s2_len is %d\n", s1_len, s2_len);
	return (s1_len - s2_len);
}

int		main(void)
{
	char str1[] = "123456789";
	char str2[] = "123456";

	printf("s1 vs s2 Mine: %d\n", ft_strncmp(str1, str2, 8));
	printf("s1 vs s2 Theirs: %d\n", strncmp(str1, str2, 8));
	printf("s2 vs s1 Mine: %d\n", ft_strncmp(str2, str1, 8));
	printf("s2 vs s1 Theirs: %d\n", strncmp(str2, str1, 8));;
	printf("s2 vs s1 Mine: %d\n", ft_strncmp(str1, str2, 10));;
	printf("s2 vs s1 Theirs: %d\n", strncmp(str1, str2, 10));;
	printf("s2 vs s1 Mine: %d\n", ft_strncmp(str2, str1, 4));;
	printf("s2 vs s1 Theirs: %d\n", strncmp(str2, str1, 4));;
}
