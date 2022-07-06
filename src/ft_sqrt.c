double	get_square(double nb, double div)
{
	if ((nb / div) > div)
		div = get_square(nb, div + 1);
	return div;
}

float	get_fsquare(float nb, float div)
{
	if ((nb / div) > div)
		div = get_fsquare(nb, div + 1);
	return div;
}

double	ft_sqrt(double value)
{
	return get_square(value, 2);
}

float	ft_fsqrt(float value)
{
	return get_fsquare(value, 2);
}
