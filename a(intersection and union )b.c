//
//  main.c
//  aInterb
//
//  Created by Ramsai Kamavaram on 12/01/22.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int n1,n2,p=0,q=0;
    printf("enter the size of first array\n");
    scanf("%d",&n1);
    printf("enter the size of second array\n");
    scanf("%d",&n2);
    int *a=(int*)malloc(sizeof(int)*n1);
    int *b=(int*)malloc(sizeof(int)*n2);
    printf("enter elemets of first array");
    for(int i=0;i<n1;i++)
    {
        printf("enter %d element",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter elemets of second array");
    for(int i=0;i<n2;i++)
    {
        printf("enter %d element",i+1);
        scanf("%d",&b[i]);
    }
    printf("A intersection B = \n");
    while((p<n1)&&(q<n2))
    {
        if(a[p]<b[q])
        {
            p++;
        }
        else if(a[p]>b[q])
        {
            q++;
        }
        else
        {
            printf("%d ",a[p]);
            p++;
            q++;
        }
    }
    printf("\n union of A U B = \n");
    p=0;q=0;
    while((p<n1)&&(q<n2))
    {
        if(a[p]<b[q])
        {
            printf("%d ",a[p]);
            p++;
        }
        else if(a[p]>b[q])
        {
            printf("%d ",b[q]);
            q++;
        }
        else
        {
            printf("%d ",a[p]);
            p++;
            q++;
        }
    }
    while(p<n1)
    {
        printf("%d ",a[p++]);
    }
    while(q<n2)
    {
        printf("%d ",b[q++]);
    }
    
    
    return 0;
}
