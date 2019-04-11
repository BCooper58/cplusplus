#include <iostream>
#include <cmath>
using namespace std;
double r4(double var)
{
	double value;
	if (var < 0){
		value = (int)(var * 10000 - 0.00005);
	}
	else{
		value = (int)(var * 10000 + 0.00005);
	}
	return(double)value / 10000;
}

int main (){
double PI=3.14159265;
double a,p,t, rad,sr,aspr; 
  cout<<"\nInput an amplitude : ";
  cin>>a;
  cout<<"\nInput a period : ";
  cin>>p
  cout <<"\ntheta\tsin(t)\ta*sin(pt) \n";
  for (t=0 ; t<=360 ; t = t + 15 )
  {
	rad = t * (PI / 180);
    sr = sin(rad);
    if (sr < 0.00000001)sr = 0;
    cr = cos(rad);
    if (sr < 0.00000001)sr = 0;
    c = sr*sr + cr*cr;
	  cout <<t<<"\t"<<cr<<"\t"<<sr<<"\t"<<c<<endl;
   }
   return 0;
}
