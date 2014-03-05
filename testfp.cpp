#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <System.IOUtils.hpp>

using namespace std;

int main(void)
{
   FILE *fp;
   fp = fopen("/home/pi/piblastout/pi-blastert", "r+");
   
   if(fp)
{       
        string ligne;
        fprintf(fp, "%i=%f\n", 25,0.099 );
        fprintf(fp, "%i=%f\n", 24,0.049 );
        TFile::Copy("/home/pi/piblastout/pi-blastert", "/home/pi/piblastout/out1") 
        sleep(4) ;
        fprintf(fp, "%i=%f\n", 25,0.072 );
        fprintf(fp, "%i=%f\n", 24,0.049 );
        TFile::Copy("/home/pi/piblastout/pi-blastert", "/home/pi/piblastout/out2")  
       
       
}   
   fflush(fp);
   return 0;
}