double	ft_pow(double nb, int pow)
{
	double	res;

	res = nb;
	while (pow > 1)
	{
		res = res * nb;
		pow--;
	}
	return res;
}

float	ft_fpow(float nb, int pow)
{
	float	res;

	res = nb;
	while (pow > 1)
	{
		res = res * nb;
		pow--;
	}
	return res;
}
