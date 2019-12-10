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
			case 2:
				{
				if(tumpuk.atas == -1){
					cout<<"Tumpukan Kosong \n";
				}
				else{
					cout<<"Kode koran yang diambil = "<<tumpuk.data[tumpuk.atas];
					tumpuk.atas--;
					cout<<"\n\n";
				}
				cout<<"--------------------------------------\n";
				break;
			}
			case 3:
				{
				if(tumpukan.atas == -1){
					cout<<"Tumpukan Kosong \n";
				}
				else{
					cout<<"\n Kode koran yangg tersedia saat ini adalah : \n";
					for(int i=0 ; i <= tumpuk.atas ; i++){
						cout<<"Tumpukan Koran ke- "<<i+1<<" : "<<tumpuk.atas[i]<<endl;
					}
					cout<<"\n\n";
				}
				cout<<"-------------------------------------\n";
				break;
			}
			case 4:
				{
					cout<<"Lihat tumpukan ke = ";
					cin>>i;
					cout<<"Tumpukan ke "<<i<<" adalah = "<<tumpuk.data[i-1]<<endl;
					break;
				}
			case 5:
				{
					exit(0);
					break;
				}
			default:
			cout<<"\nTidak ada dalam pilihan";
			cout<<endl;
			cout<<"-------------------------------------\n";
   		}
		cin.ignore();
		cin.get();
		system("cls");
	}
	while(pilihan!=5);

	cin.get();
	return 0;
}
