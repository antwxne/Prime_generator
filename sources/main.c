/*
** EPITECH PROJECT, 2024
** primes_generator
** File description:
** main
*/

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

static bool is_prime(int n)
{
	if (n == 1) {
		return false;
	}
	for (int i = 2; i < n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

static void generate_ascending_order(int begin, int end)
{
	for (;begin <= end; ++begin) {
		printf(is_prime(begin) ? "%d\n": "", begin);

	}
}

static void generate_descending_order(int begin, int end)
{
	for (;begin >= end; --begin) {
		printf(is_prime(begin) ? "%d\n": "", begin);
	}
}

int main(int ac, char **av)
{
	int n1;
	int n2;

	if (ac != 3) {
		return 84;
	}
	n1 = atoi(av[1]);
	n2 = atoi(av[2]);
	n1 < n2 ? generate_ascending_order(n1, n2) : generate_descending_order(n1, n2);
	return 0;
}
