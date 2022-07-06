#include <stdio.h>

/**	Computes the average from an array of ints
*/

double	ft_avg(int *values, size_t arraylen)
{
	double	sum;

	for (size_t i = 0; i < arraylen; i++)
		sum += values[i];
	return (sum / (double)arraylen);
}
/**	Computes the average from an array of floats
*/

float	ft_favg(float *values, size_t arraylen)
{
	float	sum;

	for (size_t i = 0; i < arraylen; i++)
		sum += values[i];
	return (sum / (float)arraylen);
}

/**	Computes the average from an array of doubles
*/

double	ft_davg(double *values, size_t arraylen)
{
	double	sum;

	for (size_t i = 0; i < arraylen; i++)
		sum += values[i];
	return (sum / (double)arraylen);
}
