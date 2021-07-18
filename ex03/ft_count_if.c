int	ft_count_if(char	**tab, int	length, int	(*f)(char*))
{
	int i;
	int stack;

	stack = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			stack += 1;
		i++;
	}
	return (stack);
}
