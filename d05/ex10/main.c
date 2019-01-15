#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char string[] = "Slowly sLowly SLoWlY3 slowlY 1337master 1337Master";
	printf("%s\n", string);
	printf("%s\n", ft_strcapitalize(string));
	char string2[] = "S123lowly s123Lowly S123LoWlY3 s123lowlY123 1337master123 1337Master";
	printf("%s\n", string2);
	printf("%s\n", ft_strcapitalize(string2));
}
