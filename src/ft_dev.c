#include "libmft.h"

double	ft_dev(int *values, size_t arraylen)
{
	return ft_sqrt(ft_var(values, arraylen));
}

float	ft_fdev(float *values, size_t arraylen)
{
	return ft_fsqrt(ft_fvar(values, arraylen));
}

double	ft_ddev(double *values, size_t arraylen)
{
	return ft_sqrt(ft_dvar(values, arraylen));
}
