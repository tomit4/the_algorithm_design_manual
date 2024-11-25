#include <stdio.h>
#include <string.h>

void insertion_sort(char *s[], int n);
void swap(char **a, char **b);

void swap(char **a, char **b)
{
	char *temp = *a;
	*a = *b;
	*b = temp;
}

void insertion_sort(char *s[], int n)
{
	int i, j; /* counters */

	for (i = 1; i < n; i++) {
		j = i;
		while ((j > 0) && (strcmp(s[j], s[j - 1]) < 0)) {
			swap(&s[j], &s[j - 1]);
			j--;
		}
	}
}

int main(void)
{
	int n = 5;
	char *arr[] = {"John", "Anna", "Mike", "Emma", "Tom"};

	insertion_sort(arr, n);

	for (int i = 0; i < n; ++i) {
		printf("%s\n", arr[i]);
	}

	return 0;
}
