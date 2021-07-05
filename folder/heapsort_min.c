#include<stdio.h>
#include<time.h>
 #include <stdlib.h>
void heapify(int arr[], int n, int i)
{
    int temp;
	int s = i; 
	int l = 2 * i + 1; 
	int r = 2 * i + 2;
	if (l < n && arr[l] < arr[s])
		s = l;
	if (r < n && arr[r] < arr[s])
		s = r;
	if (s != i) 
	{

		temp=arr[i];
		arr[i]=arr[s];
		arr[s]=temp;
		heapify(arr, n, s);
	}
}
void heapSort(int arr[], int n)
{   int temp;
	for (int i = n / 2 - 1; i >= 0; i--)
	{
	    heapify(arr, n, i);
	}
	for (int i = n - 1; i >= 0; i--) 
	{
	    temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		heapify(arr, i, 0);
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
	{
	    printf("%d",arr[i]);
	}
    
}

int main()
{
    int n,arr[60000];
    clock_t start,end;
    double t;
    printf("\nenter number of elements\n");
    scanf("%d",&n);
    printf("\nenter number of elements\n");
for (int i = 0; i < n; ++i)
{
scanf("%d",&arr[i]);
    
}
start=clock();
	heapSort(arr, n);
end=clock();

t=((double) (end - start)) / CLOCKS_PER_SEC;
printf("time taken:%f",t);
printf("the sorted array");
	printArray(arr, n);
}
