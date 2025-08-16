#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){

     int x = 3;
     int y = 8;
     int max = (x > y) ? x : y;


     bool isOnline = false;

  
     printf(" %s ", (isOnline)? "is online" : "isn't online");

    //x = round(x); 
  //x = sqrt(x);
    //x = pow(x,64); 
   // x = abs(x);
   //x = log(x);


    printf("\n%d", max);

    printf("\n %d eh %s", max, (max % 2 == 0)? "par" : "impar"); 
    return 0;
}