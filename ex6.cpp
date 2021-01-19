#include<iostream>
using namespace std;

// declaring a function named "fib"
int fib(int);
//definition of a global variable i
int i=0;
// definition of a fuction named "fib"
int fib(int k){
  ::i+=1;
  if (k==0||k==1)
    return k;
  return fib(k-1)+fib(k-2);
}

int main()
{
  int n;//
  cout<<"n:";
  cin>>n;
  cout<<"The "<<n<<"-th number in the Fibonacci sequence is  "<<fib(n)<<"."<<endl;
  cout<<::i<<" recursive calls are needed to compute the "<<n<<"-th Fibonacci number."<<endl;
  return 0;
} 