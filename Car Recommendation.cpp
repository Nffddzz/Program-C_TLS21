/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int uangAnda;
    cout << "Masukkan Budget yang anda miliki (Rp) : ";
    cin >> uangAnda;
    int pilihannya;
    cout << "Mobil yang tersedia saat ini : " << endl;
    cout << "1.Calya \n";
    cout << "2.Avanza \n" ;
    cout << "3.Inova \n" ;
    cout << "4.Voxy \n" ;
    cout << "Dengan budget sebanyak itu, Anda dapat membeli : \n";

    if(uangAnda <= 100000000) {
        cout << "Tidak cukup untuk membeli " << endl;
    }
    else if(uangAnda >= 100000000 && uangAnda <= 200000000){
        cout << "Calya " << endl;
    }
    else if(uangAnda >= 200000000 && uangAnda <= 300000000){
        cout << "Avanza / Calya " << endl;
    }
    else if(uangAnda >= 300000000 && uangAnda <= 400000000){
        cout << "Calya / Avanza / Inova " << endl;
    }
    else{
        cout << "Calya / Avanza / Inova / Voxy" << endl;
    }
}