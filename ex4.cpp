#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int n,ni=1,mi=1,x=1;
  cout<<"How many lines do you want fot Floyd's triangle? ";
  cin>>n;

  while (ni<=n){
    mi=1;
    while (mi<=ni){
      cout<<x<<" ";
      x+=1;
      mi+=1;
    }
    cout<<endl;
    ni+=1;
  }
  return 0;
}

//try recursive function？？