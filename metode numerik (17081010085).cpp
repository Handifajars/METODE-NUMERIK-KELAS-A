#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.141592653589;

//factorial function
int factorial(int n)
{
  if ((n == 0) || (n==1)) return 1;
  return (n*factorial(n-1));
}


// Main function
int main()
{
  // statements
  double x,sign,cosx,contribution,rads;
  double epsilon; 
  
  // request and print x
  cout << "Please input value of x in degrees for evaluating function cos(x)" << endl;
  cin >> x;
  cout << "x = " << x << endl;
  
  // convert degrees to radians
  rads=x*pi/180.0;

  // evaluate the Taylor Series Expansion for cos(x)
  cosx = 0;
  sign = -1;
  epsilon =0.000001;
  contribution = epsilon+1;

  for (int i=0; abs(contribution)>=epsilon; i++)
  {
    contribution = pow(sign,i)*pow(rads,2*i)/factorial(2*i);
    cosx=cosx+contribution;
    cout << "Term contribution is: " << contribution << endl;
    cout << "The function with " << i << " terms is: " << cosx << endl;
  }


  // Print the value of the functino with each addiitonal term

  return 0;
}
