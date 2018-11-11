#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;


int main() {
    float bil, n, jumlah;
    cout<<"Masukkan Nilai n : ";cin>>n;
    
    bil=0;
    jumlah=0;
    while (bil<=n)
    {
    	jumlah+=n;
    	bil++;
	}
	cout<<"Jumlah : "<<jumlah<<endl;
	getch ();
	return 0;	
}
