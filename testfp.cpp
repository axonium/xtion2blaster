#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
    FILE *fp;
   fp = fopen("/home/pi/pi-blastert", "w");
   fprintf(fp, "%i=%f\n", 25,0.099 );
   fprintf(fp, "%i=%f\n", 24,0.049 );
   fflush(fp);
    
   return 0;
}