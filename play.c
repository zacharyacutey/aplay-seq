#include "stdio.h"
int VOL=25;
float BEAT=0.375;
void play(float secs,float freq)
{
    int vol=VOL;
    int pulse=secs*8000.0; //amount of an 8000th of a second pulse
    int mod=8000.0/freq*2;
    int i=0;
    while(i!=pulse)
    {
      putchar((char)((i%mod==0)*vol));
      i++;
    }
}
int main()
{
    
}
