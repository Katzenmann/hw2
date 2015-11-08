#include <iostream>
#include <fstream>
using namespace std;

int main(void){
	double x0 = 0.5;
	double x;
	int Nskip = 100; //Number of iterations to skip
	int Nend  = 200; //Number of total iterations
	double p[Nend-Nskip];
ofstream out("datenhw2.dat");
//cout<<"specify x0 between 0 and 4 x0= "; cin>>x0;
	for(double r=0; r <= 4; r += 0.5){
	   x=x0;
	   for(int i=1; i <= Nskip; i++)
		   {x = r*x*(1-x);}
	   for(int i=Nskip+1; i <= Nend; i++){
	   		   x = r*x*(1-x);
	   		   p[i-Nskip-1]=x;}
	   for(int i=Nskip+1; i <= Nend; i++){
           out << "r= " << r << "\t p[" << i-Nskip-1 << "]= " << p[i-Nskip-1] << endl;}
	}
	
out.close();


	return 0;
}
