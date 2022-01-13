//
//  main.c
//  MIN-MAX
//
//  Created by Ramsai Kamavaram on 29/12/21.
//

#include <stdio.h>
#include <stdlib.h>
struct pair
{
    int max;
    int min;
};
struct pair getminmax(int a[],int i,int j)
{
    struct pair minmax,mm1,mm2;
    if(i==j)
    {
        minmax.max=a[i];
        minmax.min=a[i];
        return minmax;
    }
    if(i==j-1)
    {
        if(a[i]>a[j])
        {
            minmax.max=a[i];
            minmax.min=a[j];
        }
        else
        {
            minmax.max=a[j];
            minmax.min=a[i];
        }
        return minmax;
    }
    int mid=((i+j)/2);
    mm1=getminmax(a,i,mid);
    mm2=getminmax(a,mid+1,j);
    if(mm1.max>mm2.max)
        minmax.max=mm1.max;
    else
        minmax.max=mm2.max;
    if(mm1.min<mm2.min)
        minmax.min=mm1.min;
    else
        minmax.min=mm2.min;
    return minmax;
}
int main()
{
    int n;
    printf("enter the size or array");
    scanf("\n%d",&n);
    int *a=(int*)malloc(sizeof(int)*n);
    printf("\nenter the values in array");
    for(int i=0;i<n;i++)
    {
        printf("enter value of %d element\n",i+1);
        scanf("%d",&a[i]);
    }
    struct pair minmax=getminmax(a, 0, n-1);
    printf("max element %d",minmax.max);
    printf("min element %d",minmax.min);
    return 0;
}
