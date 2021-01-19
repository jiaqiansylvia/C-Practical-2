#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float x,x0,a,dt,t=0,v;
  int n;
  cout<<"enter the initial position, the speed and the acceleration: ";
  cin>>x0>>v>>a;
  cout<<"how many times you want to display the position of the moving body? ";
  cin>>n;
  cout<<"how often (in seconds) you want to update the position of the moving object? ";
  cin>>dt;
  cout<<"---------------------"<<endl;
  cout<< "Acceleration: "<<a<<" Initial speed:"<< v<<" Initial position: "<<x0<<" Number of times: "<<n<<" Delta t: "<<dt<<endl;

  while (n>0){
    x=x0+v*t+(a/2)*t*t;
    n-=1;
    cout<<"At time "<<t<<" the position is "<<x<<endl;
    t=dt+t;
  }

return 0;
}