#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;


float* find_force(float m1,float m2,float pos1[],float pos2[]){
    float G=6.67E-11;
    float r12[]={pos1[0]-pos2[0],pos1[1]-pos2[1],pos1[2]-pos2[2]};
    float mod_r12=sqrt(pow(r12[0],2)+pow(r12[1],2)+pow(r12[2],2));
    float mod_force_into_r=(G*m1*m2)/(pow(mod_r12,3));
    static float force_vector[3];
    force_vector[0]=(mod_force_into_r*r12[0]);
    force_vector[1]=(mod_force_into_r*r12[1]);
    force_vector[2]=(mod_force_into_r*r12[2]);
    return force_vector;
 }



    

  int main(){
    float pos1[]={0,0,0};
    float pos2[]={1,0,0};
    float *ptr=find_force(1,1,pos1,pos2);
    cout<<*ptr<<"\n";
    ptr++;
    cout<<*ptr<<"\n";
    ptr++;
    cout<<*ptr;
    
    
    





    return 0;
  }