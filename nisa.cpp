#include <iostream>

using namespace std;

double cos(double x){
        double hasil = 1, temp =1;;
        int tanda = -1, i=0;
        for(int y=1 ; y<100 ; y++,tanda=-tanda)
        {
            i=i+2;
            temp = temp*((x*x)/(i*(i-1)));
            hasil = hasil + tanda*temp;
        }
        return hasil;}

int main(){
    int x;
    cout << "Menghitung Program Aproksimasi" << endl;
	cout << "Dibuat oleh Anisah Widyananda - 17081010035" << endl;
	cout << "----------------------------------------------" << endl;
    cout << "Masukkan x dalam radian: ";
    cin >> x ;
    double z = cos(x);
    cout << endl << "Cos dari " << x <<" rad adalah " << z << " .";
}
