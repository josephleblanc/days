#include "do_op.h"

int		disqualify(int argc, char **argv)
{
	int i;

	if (argc < 4 || 4 < argc)
		return (0);
	while (1 < argc)
	{
		i = 0;
		while (argv[argc][i])
		{
			if ((argc % 2 == 0) 
					&& (argv[argc][i] < '0' || '9' < argv[argc][i]))
				return (0);
			if ((argc == 3) && ((argv[argc][0] != '+')
					|| (argv[argc][0] != '-') || (argv[argc][0] != '*')
					|| (argv[argc][0] != '/') || (argv[argc][0] != '%'))
				return (0);
			i++;
		}
		argc--;
	}
	return (1);
}

int (*ops[5])(int x, int y);

int		main(int argc, char **argv)
{
	long x;
	long y;
	x = ft_atoi(argv[1])
	y = ft_atoi(argv[3])
	ops[0] = add;
	ops[1] = subtract;
	ops[2] = multiply;
	ops[3] = divide;
	ops[4] = modulus;

	if (disqualify(argc, argv) == 0)
		return (0);
	if (argv[2][0] == '+')
		return ((*ops[0])(x, y));	
	if (argv[2][0] == '-')
		return ((*ops[1])(x, y));
	if (argv[2][0] == '*')
		return ((*ops[2])(x, y));
	if (argv[2][0] == '/')
		return ((*ops[3])(x, y));
	if (argv[2][0] == '%')
		return ((*ops[4])(x, y));
	return (0);
}
