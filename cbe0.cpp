// g++ cbe0.cpp -o nameofobjectcode.o
// coefficient base exponent
#include <iostream>
 using namespace std;

 long double cbe(double c, double b, int e){
	 int exponent = e;
	 long double value = 1;
	 while(exponent > 0 && e! = 0){
		value = (b * value);
		exponent--;
		}
		return c*value;
	 }
 double main(){
	 cout<<"x\ty";
	 int x;
	 long double y;
	 for(x = 0; x < 31; x++){
		y = cbe(1,2,x);
		cout<<x<<"\t"<<y<<endl;
	 }
	 return 0;
 }
