#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;


int main() {
    float bil, n, jumlah, rerata;
    cout<<"Masukkan nilia n: ";cin>>n;
    
    bil=0;
    jumlah=0;
    do {
    	jumlah+=bil;
    	rerata=jumlah/n;
    	bil++;
	}
	while (bil<=n);
	cout<<"Jumlah : "<<jumlah<<endl;
	cout<<"rerata : "<<rerata<<endl;
	
	getch();
	return 0;
}
