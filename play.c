#include "stdio.h"
float BEAT=0.375;
void play(float secs,float freq,int vol)
{
    int pulse=secs*8000.0; //amount of an 8000th of a second pulse
    int mod=8000.0/freq;
    int i=0;
    while(i!=pulse)
    {
      putchar((char)((i%mod==0)*vol));
      i++;
    }
}
void main()
{
    play(BEAT*3,329.628,255);
}
