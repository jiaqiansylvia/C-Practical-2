#include<iostream>
#include<cmath>
using namespace std;

// declaring the power function 1&2 
int pf1(int);
int pf2(int);
// definitions of  two global variables 
int i=0,j=0;
//definition of power function 1 
int pf1(int x, int k){
  ::i+=1;
  if(k==0)
    return 1;
  return x*pf1(x,k-1);
}

// definition of power function 2
int pf2(int y, int m){
  ::j+=1;
  if(m==0)
    return 1;
  if (m!=0 && m%2==0)
    return pf2(y,m/2)*pf2(y,m/2);
  if (m!=0 && m%2==1)
    return y*pf2(y,m-1);
return pf2(y,m);
}

int main()
{
  int a, n;
  cout<<"a, n: ";
  cin>>a>>n;
  cout<<"the "<<n<<"-th power of a by the first and second version of the power function are :"<<pf1(a,n)<<", "<<pf2(a,n)<<"."<<endl;
  cout<<::i<<" recursive calls needed to compute the "<<n<<"-th power of a by the first version of the power function."<<endl;
  //for the first version of the power function:
  //when n=0, function recursive times(i)=1; 
  //when n>=1, function recursive times(i)=n+1.
  cout<<::j<<" recursive calls needed to compute the "<<n<<"-th power of a by the second version of the power function."<<endl;
  //for the second version of the power function, 
  //when n=0, function recursive times(j)=1; 
  //when n>=1,and n=2^a+b(a and b are non-negative integers,and b<2^(a-1)), function recursive times(j)= 3n-2b-1.
  return 0;
}