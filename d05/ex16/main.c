#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char str1[1000] = "123456789";
	char str2[] = "abcdef";
	char str3[1000] = "123456789";
	char str4[] = "abcdef";
	printf("src is %s\n", str1);
	printf("Expecting: %s\nReceiving: %s\n\n", strcat(str1, str2), ft_strcat(str3, str4));
}
