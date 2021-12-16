#include <stdio.h>
#include "vec.hpp"
#include <iostream>
#include <math.h>

#define LEN 10 //Длинна подвеса маятника, м.
#define MASS 1 //Масса груза, кг.


float G(float w, float h){//рассчет ускорения свободного падения для широты и высоты места
return 9.780318*(1+0.005302*pow(sin(w),2)-0.000006*pow(sin(2*w),2))-0.000003086*h;}

//
vec R(vec coord, vec po){
if ()

return coord;
}


int main (){
vec a,v;
vec g; //ускорение сводного падения
g={0,0,-G(47.0951,63 ) };//Значение для Мариуполя, с минусом потому что вниз
double m=MASS;
double len = LEN;
vec F=g*m;
vec c;
c={5,5,5};
double time=0;
double dt=1e-4;
while ((time<100)&&(c.z>0)){
      
      a=F/m;
      v+=a*dt;
      c+=v*dt;
      
std::cout<<"coord-"<<c<<" velosity-"<<v<<" time="<<time<<std::endl;
time+=dt;
}



return 0;
}
