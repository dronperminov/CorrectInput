#include <stdio.h>
#include "functions/correctInput.h"

int main() {
	printf("Enter integer 1: ");
	int i1 = get_integer();
	int i2 = get_integer_msg("Enter integer 2: ");
	printf("i1: %d, i2: %d\n", i1, i2);

	int a = -5;
	int b = 10;
	printf("\nEnter integer 1 (interval): ");
	int ii1 = get_integer_interval(a, b);
	int ii2 = get_integer_interval_msg(a, b, "Enter integer 2 (interval): ");
	printf("ii1: %d, ii2: %d\n", ii1, ii2);

	printf("\nEnter natural 1: ");
	int n1 = get_natural();
	int n2 = get_natural_msg("Enter natural 2: ");
	printf("n1: %d, n2: %d\n", n1, n2);

	printf("\nEnter double 1: ");
	double d1 = get_real();
	double d2 = get_real_msg("Enter double 2: ");
	printf("d1: %lf, d2: %lf\n", d1, d2);

	return 0;
}