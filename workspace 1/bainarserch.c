#include<stdio.h>

int binaryserach (int arr[], int size, int element){
    int low ,high, mid;
    low = 0;
    high = size -1; 
    while(low<=high){
    mid =(high + low)/2;
    if(arr[mid] == element){
        return mid;
    }
    if(arr[mid]<element){
        low = mid + 1;
    }
    else{
        high = mid - 1;

    }\
    }
    return -1;

}
int main (){
    int arr[]={1,3,4,6,8,9,10,13,15,16,18,22,23,};
    int size = sizeof(arr)/sizeof(int);
    int element = 22;
    int searchindex = binaryserach(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchindex);
    return 0; 

}