//usingrecrusive


#include <stdio.h>
int recursiveBinarySearch(int array[], int low, int high, int element){
   if (high >= low){
      int middle = low + (high - low )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] > element)
         return recursiveBinarySearch(array, low, middle-1, element);
      return recursiveBinarySearch(array, middle+1, high, element);
   }
   return -1;
}
int main(void){
   int array[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int element = 16;
   int found_index = recursiveBinarySearch(array, 0, n-1, element);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
} 