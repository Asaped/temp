int	a_is_sorted(t_stack	a)
{
	int	i;

	i = 0;
	while (i < a.num_count - 1)
	{
		if (a.num[i] < a.num[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}
