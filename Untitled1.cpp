#include<iostream>
#include<cmath>

using namespace std;

double factorial(double n);

int main()
{
    double sum;
    double x;
    double term;
    int i,
        j,
        sign;
    cout << " Cos x menggunakan deret Taylor " << endl;
    cout << " masukan nilai x = ";
    cin >> x;
    sum = 0;
    i = 2;
    j = 2;
    sign = -1;
    term = 1;
    sum = 1;
    do
    {
        term = pow(x, i) / (factorial(i));
        sum = sum + term * sign;
        i += 2;
        sign = sign * (-1);
        j++;
    } while (term > 0.000001);
        cout << " Approximate Value of Cos x = " << sum << endl;
    cout << " Built in Cos(x) Function   = " << cos(x) << endl;

    cout << " Press enter to continue..." << endl;
    cin.ignore();
    cin.get();
    return 0;
}
double factorial(double n)
{
    double fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
