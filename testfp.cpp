#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

#define LEVELS 50
#define INCREMENT  0.001

using namespace std;

int main(void)
{
   FILE *fp;
   fp = fopen("/dev/pi-blaster", "r+");
   
   if(fp)
{       
       
        fprintf(fp, "%i=%f\n", 25,0.099 );
        fprintf(fp, "%i=%f\n", 24,0.049 );
        sleep(5) ;
        fprintf(fp, "%i=%f\n", 25,0.072 );
        fprintf(fp, "%i=%f\n", 24,0.049 ); 
        sleep(4);
        for (double p = 0.049; p <0.055 ; p+=INCREMENT ){
            fprintf(fp, "%i=%f\n", 24,p );
            sleep(1);
        }
     
}   
   fflush(fp);
   return 0;
}