#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
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
        while(getline(fp, ligne))  // tant que l'on peut mettre la ligne dans "contenu"
        {
                cout << ligne << endl;  // on l'affiche
                sleep(4);
        }
        fprintf(fp, "%i=%f\n", 25,0.072 );
        fprintf(fp, "%i=%f\n", 24,0.049 );
        while(getline(fp, ligne))  // tant que l'on peut mettre la ligne dans "contenu"
        {
                cout << ligne << endl;  // on l'affiche
                sleep(4);
        }
}
   
   
  
   fflush(fp);
   
   return 0;
}