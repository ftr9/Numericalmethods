#include<iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
Questions:::
(x*x) -3 == x^2 -3;
2*(x*x*x)- 5 == 2*x^3 - 5;
sin(x) + 5 * x - 3 ==sin(x) + 5x - 3
cos(x) + 5*(x*x) - 3*x - 5 == cos(x) + 5x^2 - 3x - 5
exp(-x) - 5 == e^-x - 5
*/

float F(float x){
  return 2*(x*x*x)- 5;
 
  
}

void printAnswer(float A,float fa,float B,float fb,float M,float fm,float er){

  cout<<endl<<endl<<A<<setw(12)<<fa<<setw(12)<<B<<setw(12)<<fb<<setw(12)<<M<<setw(12)<<fm<<setw(12)<<er<<endl;

}

int main(){
 float x,y;
 cout<<"x = ";
 cin>>x;
 cout<<"y = ";
 cin>>y;



 if(F(x) > 0 && F(y)<0){

   float a,fA,b,fB,m,fM,err = 1,previous = 0;

  cout<<"a"<<setw(12) <<"f(a)"<<setw(12)<<"b"<<setw(12)<<"f(b)"<<setw(12)<<"m"<<setw(12)<<"f(m)"<<setw(12)<<"err"<<endl<<endl;

  while(!(err < 0.05)){

    a = x;
    b = y;

    fA = F(a);
    fB = F(b);

    m = (a + b)/2.0;

    fM = F(m);

    err = (m - previous)/m;

    err = err<0 ? -err : err; 

    printAnswer(a,fA,b,fB,m,fM,err);

    if(fM < 0){
      y = m;
    }else{
      x = m;
    }

    previous = m;

  }
    
   cout<<endl<<endl<<"the required root is "<<m;

  


 }else{
   cout<<"F(y) must be negative and F(x) must be positive";
 }

}

