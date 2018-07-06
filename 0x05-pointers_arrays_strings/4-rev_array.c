/**
 * reverse_array - revese contents of an array
 * @a: array to reverse
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	n--;
	for (i = 0; i < n; i++, n--)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
	}
}
