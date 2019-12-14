#include<stdio.h>
#include <emscripten.h>
//#include "emscripten.h"

int main (int argc, char ** argv) {

//printf("hello mohit \n");

return 0;

}


int EMSCRIPTEN_KEEPALIVE binarySearch(float *arr, int l, int r, int x) {
  // printf("MyFunction Called\n");
       // printf("%d vaule, %d 2nd int value \n , 3rd char value %s \n", arg, re, we);
        //float total = 0;

   // for (int i=0; i<bufSize; i++) {
      //  for (int j=0; j<10; j++) {
       // printf("%f \n", buffer[i]);
     //   }
   // }

    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 

}