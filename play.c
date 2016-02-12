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
    float d=BEAT*3/2;
    float q=BEAT;
    float e=BEAT/2;
    float h=BEAT*2;
    int i;
    while(1)
    {
    play(d,329.628);
    play(e,415.305);
    play(q,493.883);
    play(e,415.305);
    play(e,329.628);
    play(d,440.000);
    play(e,523.251);
    play(q,659.255);
    play(e,587.330);
    play(e,523.251);
    play(d,493.883);
    play(e,523.251);
    play(q,587.330);
    play(q,659.255);
    play(q,523.251);
    play(q,440.000);
    play(h,440.000);
    i = 2;
    while(i!=0)
    {
      play(d,698.456);
      play(e,783.991);
      play(q,880.000);
      play(e,783.991);
      play(e,698.456);
      play(d,659.255);
      play(e,698.456);
      play(q,659.255);
      play(e,587.330);
      play(e,523.251);
      play(d,493.883);
      play(e,523.251);
      play(q,587.330);
      play(q,659.255);
      play(q,523.251);
      play(q,440.000);
      play(h,440.000);
      i--;
    }
    }
}
