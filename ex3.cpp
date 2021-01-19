#include<iostream>
using namespace std;

//declaring the fuction "swap"
int swap(int);

//definition of the function "swap"
int swap(int &x, int &y,int z){
  z=x;
  x=y;
  y=z;
  return x,y;
}

int main()
{
  int x,y,z;
  cout<<"x,y: ";
  cin>>x>>y;
  cout<<"before swaping, x: "<<x<<", y: "<<y<<endl;
  swap(x,y,z);
  cout<<"after swaping, x: "<<x<<", y: "<<y<<endl;
  return 0;
}