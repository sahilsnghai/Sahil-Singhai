#include<stdio.h>
 
 int linearsech(int arr[], int size, int element)
 {
     for(int i = 0; i<=size;  i++)
     {
         if(arr[i]==element){
             return i;
         }
         
     }return -1;
 }
  
  int main(){
      int arr[] = {1,12,2,1234, 245, 135,135,31453,4534};
      int size = sizeof(arr)/sizeof(int);
      int element= 135;
      int sechindex = linearsech(arr, size ,element );
      printf("the element %d was found at index %d\n",element, sechindex);
      return 0;
  }   