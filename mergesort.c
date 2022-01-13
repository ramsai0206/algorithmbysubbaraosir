
#include<stdio.h>

void merge(int arr[],int start,int mid,int end)//p indicates the starting index and q indicates till where we divided and r indicates the last index
{
    
    int n1 = mid - start + 1;//number of elements till the first half
  int n2 = end - mid;//number of elements in the second half

  int fM[n1], sM[n2];//we store the first half in L array and second half in M array

  for (int i = 0; i < n1; i++)
    fM[i] = arr[start + i];
  for (int j = 0; j < n2; j++)
    sM[j] = arr[mid + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = start;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (fM[i] <= sM[j]) {
      arr[k] = fM[i];
      i++;
    } else {
      arr[k] = sM[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = fM[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = sM[j];
    j++;
    k++;
  }
}
void mergeSort(int arr[],int start,int end)//start indicates the starting index of the array and end indicates ending address of array
{
   // in this we divided if atleast more than 2 elements
    if(start < end)
    {
        int mid=(start + end) / 2;
       mergeSort(arr,start,mid);//this will recursively call it self by taking first half of the array
       mergeSort(arr,mid+1,end);//this will recursively call it self by taking second half of the array
       merge(arr,start,mid,end);// this will be called when we need to combine 2 subarrays
    }
}
void printsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
}
int main()
{
 int n;
 printf("enter the size of array\n");
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 mergeSort(a,0,n-1);
 printf("sorted array");
 printsort(a,n);
}
