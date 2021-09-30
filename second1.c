//using iterative
#include<stdio.h>
int binarysearch(int arr[],int low, int high,int data){
    while (low<=high)
    {
    int mid=(low+high)/2;
    if (data==arr[mid])
    {
        return mid ;

        if (data< arr[mid])
        {
            high =mid -1;

        }
        else if (data> arr[mid])
        {
             low =mid+1;
        }
        return -1;
        
        
    }
    
    }
    
}
int main()
{
   int arr []={1,2,3,4,5,6,7},n=7;
   int search= binarysearch(arr,0,n-1,4);
   if(search== -1)
   {
printf("element not find");}
else{
printf("element at %d",search);
 }
    return 0;
}
