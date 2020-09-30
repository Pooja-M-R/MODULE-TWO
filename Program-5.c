Enter number of elements in array
3
Enter 3 elements
45
78
98
Enter the location where you wish to insert an element
2
Enter the value to insert
60
Resultant array is
45
60
78
98
*/



#include <stdio.h>
 
int main()
{
   int array[100], position, c, n, value;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &position);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[ ];
 
   array[position-1] =  ;
 
   printf("Resultant array is\n");
 
   for (c = 0; c <= n; c++)
      printf("%d\n",   [c]);
 
   return 0;
}
