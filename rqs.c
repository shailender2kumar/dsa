#include<stdio.h>
int partatin(int A[],int low,int high)
{
    int pivot=A[low];
    int i= low+1;
    int j= high;
    int temp;
    while(i<j){
        while(A[i]<=pivot)
        {
            i++;
        }
        while(A[j]>pivot)
        {
            j--;
        }
        if(i<j){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
}
void quicksort(int A[],int low ,int high)
{
int shortedindex ;
if(low<high){
    shortedindex= partatin(A,low,high);
    quicksort(A,low,shortedindex -1);
    quicksort(A,shortedindex+1,high);
}
}
void printarray(int*A,int n){
   for (int i=0;i<n;i++){
    printf("%d",A[i]);
}
}
int main()
{
    int A[]={1,4,7,2,5,8};
    printarray(A,6);
    printf("\n");
      quicksort(A,0,5);
     printarray(A,6);
}
