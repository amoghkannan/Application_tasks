#include <iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

float pos_given_pos0(float pos0,float t_given,float interval){
  float t=0.0;
  float pos=pos0;
  while(1==1){
    if(t>t_given){
      break;
    }
    pos=pos+(sin(pos*t)*interval);
    t+=interval;
}
  return pos;
}



int main() {
  cout<<pos_given_pos0(1,76.5,0.01)<<"\n";
  cout<<pos_given_pos0(1,76.5,0.001)<<"\n";
  cout<<pos_given_pos0(1,76.5,0.0001)<<"\n";
  cout<<"\n"<<"\n";
  cout<<pos_given_pos0(-3,76.5,0.01)<<"\n";
  cout<<pos_given_pos0(-3,76.5,0.001)<<"\n";
  cout<<pos_given_pos0(-3,76.5,0.0001)<<"\n";
  cout<<"\n"<<"\n";
  cout<<pos_given_pos0(0,76.5,0.01)<<"\n";
  cout<<pos_given_pos0(0,76.5,0.001)<<"\n";
  cout<<pos_given_pos0(0,76.5,0.0001)<<"\n";
}