#include<stdio.h>

int main(){
  int rows, columns, num1, count=0;

  
  printf("Enter the number of Row and Column: \n");
  scanf("%d %d", &rows, &columns);

  
  int array[rows][columns];

  
  printf("Enter %d elements: \n", (rows*columns));
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      scanf("%d", &array[i][j]);
    }
  }

    printf("Enter the element to get the position: \n");
  scanf("%d", &num1);

  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      if(array[i][j] == num1){
        
        printf("(%d, %d) \n", i, j);
        count++;
      }
    }
  }

  
  if(count==0)
    printf("Not found \n");

  return 0;
}