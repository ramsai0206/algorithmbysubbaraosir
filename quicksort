//
//  main.c
//  quicksort
//
//  Created by Ramsai Kamavaram on 12/01/22.
//

#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int start,int last)
{
    int x=arr[start];
    int i=start;
    for(int j=start+1;j<=last;j++)
    {
        if(arr[j]<=x)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[start],&arr[i]);
    return i;
}
void QuickSort(int arr[],int i,int j)
{
    int m;
    if(i<j)
    {
        m=partition(arr,i, j);
        QuickSort(arr,i, m-1);
        QuickSort(arr, m+1, j);
        
    }
}
void printarray(int arr[],int start,int end)
{
    for(int i=start;i<end;i++)
        printf("%d",arr[i]);
}
int main() {
    int n;
    printf("enter number of elements in array\n");
    scanf("%d",&n);
    int *a=(int*)malloc(sizeof(int)*n);
    printf("enter elements of array \n");
    for(int i=0;i<n;i++)
    {
        printf("enter %d element of array",i+1);
        scanf("%d",&a[i]);
    }
    QuickSort(a, 0, n-1);
    printarray(a,0,n);
}
