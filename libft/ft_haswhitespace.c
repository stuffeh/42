int	ft_haswhitespace(char const str)
{
	if (((str >= 9) && (str <= 13)) || (str == 32))
		return (1);
	else
		return (0);
}