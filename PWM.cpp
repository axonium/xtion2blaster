#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define DELAY 50000
#define LEVELS 50
#define INCREMENT  0.001
    FILE *fp;
 
/*void  INThandler(int sig)
{
    int pin=0;
        signal(sig, SIG_IGN);
    //turn all pins off
        for (pin = 0; pin < 8; pin++){
        fprintf(fp, "%i=%f\n", pin,0.0);
        fflush(fp);
        }
    fclose(fp);
        exit(0);
}
 
 */

int main(void)
{
    //signal(SIGINT, INThandler);
 
    // arrays used to control brightness of a row of LEDs. YAW then THR animation.
    //float THR[] = {0,0,0.049,0.049,0.049,0.053,0.06,0.049};
    //float YAW[] = {0,0,0.099,0.099,0.074,0.074,0.074,0.074};
    int thr = 24;
    int yaw = 25;
  //int pit = 23;
  //int rol = 18;
    int t = 0;
    float p = 0.00;
    //float pwm = 0.0;
 
    // open the pi-blaster device file. If it fails, confirm that pi-blaster has been started
    fp = fopen("/dev/pi-blaster", "w");
    if (fp == NULL) {
        printf("Error opening file \n");
        exit(0);
     }
    

        fprintf(fp, "%i=%f\n", yaw,0.099 );
        fprintf(fp, "%i=%f\n", thr,0.049 );
        fflush(fp);
        sleep(5);
    
    
    for (p= 0.00 ; p < 0.02 ; p+=INCREMENT){
        fprintf(fp, "%i=%f\n", yaw,0.072 );
        fprintf(fp, "%i=%f\n", thr,0.049 + p );
        fflush(fp);
        sleep(2);
    
    }
    
    
    // create the PWM values which are used for the animation going in one direction
    //float pwdPower[LEVELS];
    //float i;
    //int j;
    /*int count = 7;
 
    for (j = 0; j < LEVELS ;  j++){
        pwdPower[j] = 0.0;
    }
 
    for (i = 0.0; i < 1 ; i +=INCREMENT){        if (i>1.0)i=1.0;
        pwdPower[count] = i;
            count++;
    }
 
    for (i = 1; i >0.00001 ; i -=INCREMENT){
        if (i<0.0)i=0.0;
        pwdPower[count] = i;
            count++;
    }
 
        for (j = 0; j < (LEVELS) ;  j++){
                pwdPower[count] = 0.0;
        count++;
        } */
 
/*//////////////////////////////////////////////////////////////////
 
    //This section illustrates different bTHRness levels
    // using PWM with a 2 second puase between levels.
 
    // Enable all pins using the value 0.002 for PWM
    
    
    
    
    
    for (pin = 0; pin < 8; pin++){
                fprintf(fp, "%i=%f\n", yaw ,0.002);
                       fflush(fp);
    }
    sleep(2);
 
    // Enable all pins using the value 0.03 for PWM
    for (pin = 0; pin < 8; pin++){
                    fprintf(fp, "%i=%f\n", pin,0.03);
                        fflush(fp);
    }
    sleep(2);
 
    // Enable all pins using the value 0.05 for PWM
    for (pin = 0; pin < 8; pin++){
                    fprintf(fp, "%i=%f\n", pin,0.5);
                        fflush(fp);
    }
    sleep(2);
///////////////////////////////////////////////////////////////////
 
    // This section will cycle through the power levels 5 times.
    for (j = 0; j < 5 ; j++){
        for (i = 0.0; i < 1 ; i +=INCREMENT){
            for (pin = 0; pin < 8; pin++){
                    fprintf(fp, "%i=%f\n", pin,i );
                    fflush(fp);
            }
                        usleep(DELAY);
        }
        for (i = 1; i >0.00001 ; i -=INCREMENT){
            for (pin = 0; pin < 8; pin++){
                        fprintf(fp, "%i=%f\n", pin,i );
                            fflush(fp);
            }
        usleep(DELAY);
        }
    }
///////////////////////////////////////////////////////////////////
 
    // The below section performs the animations
    int c = 0;
    int g;
    for(g = 0; g < 2; g++){
        for(c = 16; c>= 0; c--){
            for (pin = 0; pin < 8  ; pin++){
                            fprintf(fp, "%i=%f\n", pin, THR[pin+c]);
                            fflush(fp);
            }
        usleep(DELAY);
        }
        for(c = 0; c < 16; c++){
            for (pin = 0; pin < 8; pin++){
                        fprintf(fp, "%i=%f\n", pin, YAW[pin+c]);
                            fflush(fp);
            }
        usleep(DELAY);
        }
    }
 
    for(g = 0; g < 4; g++){
        for(c = 0; c < (LEVELS*3); c++){
            for (pin = 0; pin < 8; pin++){
                            fprintf(fp, "%i=%f\n", pin, pwdPower[pin+c]);
                        fflush(fp);
            }
            usleep(DELAY);
        }
    }
 
    //turn all pins off
        for (pin = 0; pin < 8; pin++){
        fprintf(fp, "%i=%f\n", pin,0.0);
        fflush(fp);
    }*/

 fclose(fp);
    return 0;
}