#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
   FILE *fp;
   fp = fopen("/home/pi/pi-blastert", "r+");
   
   if(fp)
{       
        string ligne;
        fprintf(fp, "%i=%f\n", 25,0.099 );
        fprintf(fp, "%i=%f\n", 24,0.049 );
        printf(fp); 
        sleep(4) ;
        fprintf(fp, "%i=%f\n", 25,0.072 );
        fprintf(fp, "%i=%f\n", 24,0.049 );
        printf(fp);
        sleep(5);
}   
   fflush(fp);
   return 0;
}