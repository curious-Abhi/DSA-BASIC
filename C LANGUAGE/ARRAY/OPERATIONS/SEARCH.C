#include <stdio.h>  
  
int main() {  
   int arr[5] = {18, 30, 15, 70, 12};  
   int item = 70, i, j=0 ;  
     
   printf("Given array elements are :\n");  
      
   for(i = 0; i<5; i++) {  
      printf("arr[%d] = %d,  ", i, arr[i]);  
   }  
    printf("\nElement to be searched = %d", item);  
   while( j < 5){  
      if( arr[j] == item ) {  
         break;  
      }  
          
      j = j + 1;  
   }  
      
   printf("\nElement %d is found at %d position", item, j+1);  
   
   return 0;
}  