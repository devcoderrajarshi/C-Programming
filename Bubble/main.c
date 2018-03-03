#include <stdio.h>
#define pf printf
#define sf scanf

int main()
{
  int array[100], n, c, d, swap;

  printf("Enter number of elements\n");
  sf("%d", &n);

  pf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    sf("%d", &array[c]);

  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  pf("Sorted list in ascending order:\n");

  for ( c = 0 ; c < n ; c++ )
     pf("%d\n", array[c]);

  return 0;
}
