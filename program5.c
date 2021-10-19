#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
 
int length(char str[]);
void reverse(char str[]);
void copy(char str1[], char str2[]);
void concat(char str1[], char str2[]);
void main() {
   char a[100], b[100];
   int result, option;
   do {
      printf("\n\nEnter Your Choice:");
      scanf("%d", &option);
      switch (option) {
      case 1:
         printf("\nEnter a String:");
         scanf("%s",&a);
      result = length(a);
         printf("\nLength of %s=%d", a, result);
         getch();
         break;
 
      case 1:
         printf("\nEnter a String:");
         scanf("%s",&a);
         reverse(a);
         printf("\nResult=%s", a);
         getch();
         break;
      case 2:
         printf("\nEnter a String:");
         scanf("%s",&a);
         copy(b, a);
         printf("\nResult=%s", b);
         getch();
         break;
    case 3:
         printf("\nEnter 1st string:");
         scanf("%s",&a);
         printf("\nEnter 2nd string:");
         scanf("%s",&b);
         concat(a, b);
         printf("\nresult=%s", a);
         getch();
         break;
      case 4:
         printf("\nEnter a string:");
         gets(a);
         count(a);
         printf("\nPress a Character");
         getch();
         break;*/
 
      default:
         printf("\nInvalid Choice:");
         break;
      }
 
   } while (option != 4);
}
 
int length(char str[]) {
   int i = 0;
   while (str[i] != '\0')
      i++;
   return (i);
}
 
void reverse(char str[]) {
   int i, j;
   char temp;
   i = j = 0;
   while (str[j] != '\0')
      j++;
   j--;
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
}
void copy(char str2[], char str1[]) {
   int i = 0;
   while (str1[i] != '\0') {
      str2[i] = str1[i];
      i++;
   }
   str2[i] = '\0';
} 
void concat(char str1[], char str2[]) {
   int i, j;
   i = 0;
   while (str1[i] != '\0')
      i++;
   for (j = 0; str2[j] != '\0'; i++, j++)
      str1[i] = str2[j];
   str1[i] = '\0';
}
 
