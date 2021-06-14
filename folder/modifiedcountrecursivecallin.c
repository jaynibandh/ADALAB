#include<stdlib.h>
#include <stdio.h>
int Hanoi(int n, char x,
                    char y, char z)
{
    int count=1;
    if (n == 1)
    {
         printf ("\nMove disk %d from rod %c to rod %c",n,x,y);
       
      
        
    }
   else{
    
     count+=Hanoi(n - 1, x, z, y);
     Hanoi(1, x, y, z);
     count+=Hanoi(n - 1, z, y, x);
     printf("The count of recursive function %d",count);
   }
   return count;
    
}
 
int main()
{
    int n,h;
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    h= Hanoi(n, 1, 3, 2); 
        printf("The count of recursive calls are %d",h);
    return 0;
}
