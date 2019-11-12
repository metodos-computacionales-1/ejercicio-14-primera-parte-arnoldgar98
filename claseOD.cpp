#include <iostream>
#include <cmath>
using namespace std;
double f0(double t, double v0, double x0); //Returns derivative of y0
double f1(double t, double v0, double x0); //Returns derivative of y1

const double K = 100;
const double M = 2;
const double LAMBDA = 1;
const double DeltaT = 0.01;

double f0(double t, double v0, double x0)
{
  return v0;
}

double f1(double t, double v0, double x0)
{
  return (-K*x0/M);
}

double euler()
{
    //1000 iteraciones computacionales 
    int puntos = (1000/0.01);
    float x[puntos];
    float v[puntos];
    float t[puntos];
    x[0]=1;
    v[0]=0;
    for(int i=1; i<puntos;i++)
    { 
        v[i]=v[i-1]+DeltaT*f0(t[i-1],v[i-1],x[i-1]);
        x[i]=x[i-1]+DeltaT*f1(t[i-1],v[i-1],x[i-1]);
        
    }
    for(int i=0;i<puntos;i++)
    {
        cout<<x[i]<<";"<<v[i]<<endl;
    }  
    
}
int main(void)
{
    euler();
    cout<<"se esperan soluciones del tipo seno y coseno"<<endl;
    cout<<"al iteral 1000 veces se obtiene un error bastante grande respecto a los senos y cosenos"<<endl;
    return 0;
}