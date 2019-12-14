#include<stdio.h>
#include <emscripten.h>
//#include "emscripten.h"

int main (int argc, char ** argv) {

//printf("hello mohit \n");

return 0;

}


int EMSCRIPTEN_KEEPALIVE myFunction(float *buffer, int bufSize) {
  // printf("MyFunction Called\n");
       // printf("%d vaule, %d 2nd int value \n , 3rd char value %s \n", arg, re, we);
        //float total = 0;

    for (int i=0; i<bufSize; i++) {
      //  for (int j=0; j<10; j++) {
       // printf("%f \n", buffer[i]);
     //   }
    }

         return 0;
}

