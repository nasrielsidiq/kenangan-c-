#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
using namespace std;
int main(){
	cout<<"===========Program Flashdisk==========="<<endl;
	string nk, m;
	int k, jb, h, tb, ub, uk;
	cout<<	"+---------------------------------------------------------------+\n"<<
			"\tMerk\t\t|\tKapasitas\t|\tHarga\t|\n"<<
			"+---------------------------------------------------------------+\n"<<
			"\tToshiba\t\t|\t32\t\t|\t120000\t|\n"<<
			"+---------------------------------------------------------------+\n"<<
			"\tToshiba\t\t|\t16\t\t|\t95000\t|\n"<<
			"+---------------------------------------------------------------+\n"<<
			"\tToshiba\t\t|\t8\t\t|\t75000\t|\n"<<
			"+---------------------------------------------------------------+\n"<<
			"\tKingston\t|\t32\t\t|\t115000\t|\n"<<
			"+---------------------------------------------------------------+\n"<<
			"\tKingston\t|\t16\t\t|\t75000\t|\n"<<
			"+---------------------------------------------------------------+\n"<<
			"\tKingston\t|\t8\t\t|\t55000\t|\n"<<
			"+---------------------------------------------------------------+\n";
	cout<<"Nama Konsumen \t\t: "; cin>>nk;
	cout<<"Merk[Toshiba/Kingston] \t: "; cin>>m;
	if(m == "Toshiba" || m == "toshiba"){
		cout<<"Kapasitas[32/16/8] \t: "; cin>>k;
		if(k == 32){
			h= 120000;
			cout<<"Jumlah Beli \t\t: "; cin>>jb;
			system ("cls");
			ulang2:
			cout<<"----------------Struk Pembayaran----------------"<<endl;
			cout<<"\t Konsumen \t: "<<nk<<endl;
			cout<<"\t Merk \t\t: "<<m<<endl;
			cout<<"\t Harga \t\t: "<<h<<endl;
			tb= jb*h;
			cout<<"\t Total bayar \t: "<<tb<<endl;
			cout<<"------------------------------------------------"<<endl;
			cout<<"\t Uang Bayar \t: "; cin>>ub;
			if(ub >= tb){
				uk = ub-tb;
			cout<<"\t Uang Kembali \t: "<<uk<<endl;
			}else{
				cout<<"Maaf Uang Anda Tidak Cukup\n";
				sleep(3);
				system("cls");
				goto ulang2;
			}
		}else if(k == 16){
			h= 95000;
			cout<<"Jumlah Beli \t\t: "; cin>>jb;
			system("cls");
			ulang3:
			cout<<"----------------Struk Pembayaran----------------"<<endl;
	cout<<"\t Konsumen \t: "<<nk<<endl;
	cout<<"\t Merk \t\t: "<<m<<endl;
	cout<<"\t Harga \t\t: "<<h<<endl;
	tb= jb*h;
	cout<<"\t Total bayar \t: "<<tb<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"\t Uang Bayar \t: "; cin>>ub;
	if(ub >= tb){
				uk = ub-tb;
			cout<<"\t Uang Kembali \t: "<<uk<<endl;
			}else{
				cout<<"Maaf Uang Anda Tidak Cukup"<<endl;
				sleep(3);
				system("cls");
				goto ulang3;
			}
		}else if(k == 8){
			h= 75000;
			cout<<"Jumlah Beli \t\t: "; cin>>jb;
			system("cls");
			ulang4:
			cout<<"----------------Struk Pembayaran----------------"<<endl;
	cout<<"\t Konsumen \t: "<<nk<<endl;
	cout<<"\t Merk \t\t: "<<m<<endl;
	cout<<"\t Harga \t\t: "<<h<<endl;
	tb= jb*h;
	cout<<"\t Total bayar \t: "<<tb<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"\t Uang Bayar \t: "; cin>>ub;
	if(ub >= tb){
				uk = ub-tb;
			cout<<"\t Uang Kembali \t: "<<uk<<endl;
			}else{
				cout<<"Maaf Uang Anda Tidak Cukup\n";
				sleep(3);
				system("cls");
				goto ulang4;
			}
		}else{
			h =0;
			cout<<"Kapasitas Tidak Tersedia/Inputan Salah!"<<endl;
			
		}
		
	
		
	}else if(m == "Kingston" || m == "kingston"){
		cout<<"Kapasitas[32/16/8] \t: "; cin>>k;
		if(k==32){
			h= 115000;
			cout<<"Jumlah Beli \t\t: "; cin>>jb;
			system("cls");
			ulang:
			cout<<"----------------Struk Pembayaran----------------"<<endl;
	cout<<"\t Konsumen \t: "<<nk<<endl;
	cout<<"\t Merk \t\t: "<<m<<endl;
	cout<<"\t Harga \t\t: "<<h<<endl;
	tb= jb*h;
	cout<<"\t Total bayar \t: "<<tb<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"\t Uang Bayar \t: "; cin>>ub;
	if(ub >= tb){
				uk = ub-tb;
			cout<<"\t Uang Kembali \t: "<<uk<<endl;
			}else{
				cout<<"Maaf Uang Anda Tidak Cukup\n";
				sleep(3);
				system("cls");
				goto ulang;
			}
		}else if(k==16){
			h= 75000;
			cout<<"Jumlah Beli \t\t: "; cin>>jb;
			system("cls");
			ulang6:
			cout<<"----------------Struk Pembayaran----------------"<<endl;
	cout<<"\t Konsumen \t: "<<nk<<endl;
	cout<<"\t Merk \t\t: "<<m<<endl;
	cout<<"\t Harga \t\t: "<<h<<endl;
	tb= jb*h;
	cout<<"\t Total bayar \t: "<<tb<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"\t Uang Bayar \t: "; cin>>ub;
	if(ub >= tb){
				uk = ub-tb;
			cout<<"\t Uang Kembali \t: "<<uk<<endl;
			}else{
				cout<<"Maaf Uang Anda Tidak Cukup\n";
				sleep(3);
				system("cls");
				goto ulang6;
			}
		}else if(k==8){
			h= 55000;
			cout<<"Jumlah Beli \t\t: "; cin>>jb;
			system("cls");
			ulang5:
			cout<<"----------------Struk Pembayaran----------------"<<endl;
	cout<<"\t Konsumen \t: "<<nk<<endl;
	cout<<"\t Merk \t\t: "<<m<<endl;
	cout<<"\t Harga \t\t: "<<h<<endl;
	tb= jb*h;
	cout<<"\t Total bayar \t: "<<tb<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"\t Uang Bayar \t: "; cin>>ub;
	if(ub >= tb){
				uk = ub-tb;
			cout<<"\t Uang Kembali \t: "<<uk<<endl;
			}else{
				cout<<"Maaf Uang Anda Tidak Cukup\n";
				sleep(3);
				system("cls");
				goto ulang5;
			}
		}else{
			cout<<"Kapasitas Tidak Tersedia/Inputan Salah!"<<endl;
			h =0;
		}
		
	}else{
		cout<<"Merk Tidak Tersedia/Inputan Salah!"<<endl;
		m == "-";
	}
}
