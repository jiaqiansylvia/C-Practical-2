#include<iostream>
#include<cmath>
using namespace std;

// declaring a function named "fib"
int fib(int);

// definition of a fuction named "fib"
int fib(int n)
{
  int b=0,a=1,c=1;//b=fab(n-2);a=fab(n-1)
  if (n==0||n==1)
    return n;
  for(int i=2;i<=n;i++){
    c=a+b;//store formal a value 
    b=a;
    a=c;
  }
  return c;
}

int main()
{
  int n;//
  cout<<"n:";
  cin>>n;
  cout<<"the "<<n<<"-th number in the Fibonacci sequence is  "<<fib(n)<<endl;
  return 0;
}