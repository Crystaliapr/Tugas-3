#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;


int main() {
    float bil, n, jumlah, rerata;
    cout<<"Masukkan nilia n: ";cin>>n;
    
    bil=0;
    jumlah=0;
    while (bil<=n)
    {
    	jumlah+=bil;
    	rerata=jumlah/n;
    	bil++;
	}
	cout<<"jumlah : "<<jumlah<<endl;
	cout<<"rerata : "<<rerata<<endl;
	getch ();
	return 0;
	
}
