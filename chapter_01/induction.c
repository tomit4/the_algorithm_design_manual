#include <stdio.h>

// Function to compute the sum of the first n integers using a loop
int sum_of_integers(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

// Function to compute the formula for the sum of the first n integers
int formula_sum(int n) { return (n * (n + 1)) / 2; }

int main(void)
{
	int n = 10; // You can change this to any value

	// Compute sum using the loop
	int sum = sum_of_integers(n);

	// Compute sum using the formula
	int formula = formula_sum(n);

	// Output the results
	printf("Sum of integers from 1 to %d (using loop): %d\n", n, sum);
	printf("Sum of integers from 1 to %d (using formula): %d\n", n,
	       formula);

	// Check if both methods give the same result
	if (sum == formula) {
		printf("The loop and the formula give the same result!\n");
	} else {
		printf("The results do not match!\n");
	}

	return 0;
}
