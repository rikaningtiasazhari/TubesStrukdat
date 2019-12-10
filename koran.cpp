#include <iostream>
#include <conio.h>
#include "koran.h"
#include "nama.h"
using namespace std;
int main ()
{
	int pilihan,baru,i;
	tumpuk.atas=-1;
	do
	{
		cout<<"\n=================================\n";
		cout<<"Stock Koran (case sensitive)\n";
		cout<<"=================================\n";
		team();
		cout<<"1.Input Kode Koran (angka)\n";
		cout<<"2.Ambil Koran\n";
		cout<<"3.Koran Tersedia\n";
		cout<<"4.Lihat Tumpukan ke\n";
		cout<<"5.Exit\n";
		cout<<"\nPilihan = ";
		cin>>pilihan;
		switch(pilihan)
		{
    			case 1:
			{
				if(tumpuk.atas==100-1)
				{
					cout<<"Tumpukan Penuh";
					cout<<endl;
				}
				else
				{
					cout<<"Kode koran yang diinputkan = ";cin>>baru;
					tumpuk.atas++;
					tumpuk.data[tumpuk.atas]=baru;
				}
				cout<<"-------------------------------------\n";
				break;
			}
    
    
   		}
		cin.ignore();
		cin.get();
		system("cls");
	}
	while(pilihan!=5);

	cin.get();
	return 0;
}
