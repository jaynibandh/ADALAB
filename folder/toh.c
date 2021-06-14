#include<stdio.h>
void hanoi(int n,char x,char y,char z);

void main() {
    int n,a,b;
 
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');

}



void hanoi(int n,char x,char y,char z) {
    
    if (n == 1)
    {
         printf("\n Move disk %d from rod %c to rod %c", n, x, y);
        return;
    }
    

      hanoi(n-1,x,z,y);
 printf("\n Move disk %d from rod %c to rod %c", n, x, y);
      hanoi(n-1,z,y,x);
}
