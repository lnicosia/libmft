#include "libft.h"

double	ft_var(int *values, size_t arraylen)
{
	double	sum;
	double	diff;
	double	avg;

	avg = ft_avg(values, arraylen);
	for (size_t i = 0; i < arraylen; i++)
	{
		diff = (double)values[i] - avg;
		sum += diff * diff;
	}
	return (sum / (double)arraylen);
}

float	ft_fvar(float *values, size_t arraylen)
{
	float	sum;
	float	diff;
	float	avg;

	avg = ft_favg(values, arraylen);
	for (size_t i = 0; i < arraylen; i++)
	{
		diff = values[i] - avg;
		sum += diff * diff;
	}
	return (sum / (float)arraylen);
}

double	ft_dvar(double *values, size_t arraylen)
{
	double	sum;
	double	diff;
	double	avg;

	avg = ft_davg(values, arraylen);
	for (size_t i = 0; i < arraylen; i++)
	{
		diff = values[i] - avg;
		sum += diff * diff;
	}
	return (sum / (double)arraylen);
}

double	ft_var_with_avg(int *values, size_t arraylen, double avg)
{
	double	sum;
	double	diff;

	for (size_t i = 0; i < arraylen; i++)
	{
		diff = (double)values[i] - avg;
		sum += diff * diff;
	}
	return (sum / (double)arraylen);
}

float	ft_fvar_with_avg(float *values, size_t arraylen, float avg)
{
	float	sum;
	float	diff;

	for (size_t i = 0; i < arraylen; i++)
	{
		diff = values[i] - avg;
		sum += diff * diff;
	}
	return (sum / (float)arraylen);
}

double	ft_dvar_with_avg(double *values, size_t arraylen, double avg)
{
	double	sum;
	double	diff;

	for (size_t i = 0; i < arraylen; i++)
	{
		diff = values[i] - avg;
		sum += diff * diff;
	}
	return (sum / (double)arraylen);
}
