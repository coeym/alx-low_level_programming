#include "main.h"

int actual_prime(int n, int p);

/**
 * is_prime_number - declares if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime
 * @n: number to evaluate
 * @p: iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int actual_prime(int n, int p)
{
if (p == 1)
return (1);
if (n % p == 0 && p > 0)
return (0);
return (actual_prime(n, p - 1));
}
