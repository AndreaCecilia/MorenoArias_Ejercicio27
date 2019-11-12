#include<iostream>
#include <cmath>
// defino la funcion para obtener el valor real

float real(float w, float t){

float rta=exp(-w*t);
  return rta;
}

// funcion para sacar la columna x
void ejeind(int N, float w,float deltatw, float *m){
float aux=0;
for(int i=0; i<N; i++){
m[i]= aux;
std::cout<<m[i]<<std::endl;
aux=aux+(deltatw/w);
}

//return error;
}
// metodo de Euler
void Eulerm(int N, float w,float deltatw, float *m, float y0){
float tf=(deltatw/w)*(N-1);
float r= real(w, tf);
float error=0;
//std::cout<<"Euler"<< std::endl;
for(int i=0; i<N; i++){
if(i==0){
  m[i]=y0;
}
else{
m[i]= m[i-1]-deltatw*m[i-1];}
std::cout<<m[i]<<std::endl;
if(i==N-1){
  float error=(r-m[i])/r;

}

}

//return error;
}
// deino el metodo implicito

void implicito(int N, int w, float deltatw, float *m, float y0){
float tf=(deltatw/w)*(N-1);
float r= real(w, tf);
float error=0;
//std::cout<<"Implicito"<< std::endl;
for(int i=0; i<N; i++){
if(i==0){
  m[i]=y0;
}
else{m[i]=m[i-1]/(deltatw+1);}
std::cout<<m[i]<<std::endl;
if(i==N-1){
  float error=(r-m[i])/r;}
}
//return error;
}


// defino el main
int main(int argc, char **argv){
//Defino las condiciones iniciales
float deltatw=atof(argv[1]); 
float w=0.1;
float t0=0.0;
float tf= 4/w;
float y0=1;

// Inicializo el vector

int N=4/deltatw;
float * m=new float[N];
ejeind(N, w,deltatw, m);
Eulerm(N, w,deltatw, m, y0);
implicito(N,w, deltatw, m, y0);

delete [] m;
return 0;


}