#include<iostream>
#include<cmath>
using namespace std;

//declaring a function
float distance (float); 

//defination of function"distance"
float distance (float x,float y,float cx,float cy){
 return sqrt((x-cx)*(x-cx)+(y-cy)*(y-cy));
}

int main()
{
  float x,y,r,cx,cy,d;
  std::cout<<"coordinates of the point(x,y): "<<endl;
  std::cin>>x>>y;
  std::cout<<"coordinates of the center of a circle(cx,cy), and its radium: "<<endl;
  std::cin>>cx>>cy>>r;
  if (distance(x,y,cx,cy)<=r)
    cout<< "this point is enclosed in the circle."<< endl;
  else 
    cout<< "this point is not enclosed in the circle."<< endl;
return 0;
}

