#include <iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<unistd.h>
#include<iomanip>
using namespace std;
void coordinat(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}
void loading(){//fungsi loading
	
	//						12345678901234567890123456789012345678901234567890
	coordinat(85,12); cout<<"|";
	coordinat(35,13); cout<<"|_________________________________________________|";
	coordinat(35,10); cout<<" _________________________________________________";
	coordinat(35,11); cout<<setiosflags(ios::left)<<setw(50)<<"|"<<setw(0)<<"|";
	coordinat(35,12); cout<<"| LOADING";system("color 3");sleep(1);cout<<".";system("color 2");sleep(1);cout<<".";system("color 4");sleep(1);cout<<".";

	
	system("cls");
	sleep(1);
}
int main(){
	string np, sk, sw, sr, sp, us, p, pr, n1, n2, n3, n4, n5;
	int c;

	cout<<"Masukan username : "; cin>>us;
	cout<<"Masukan password : "; cin>>p;
	if(us == "rizal" && p == "exeed12" or us == "hilman" && p == "pakkm" || us == "mucaa" && p == "geusancabul"){
		system("cls");
		loading();
		
		system("color 7");
		cout<<"pilih program [kuis/hadiah]: "; cin>>pr;
		if(pr == "kuis"){
			system("cls");
			cout<<"******************Program kuis berhadiah***********************"<<endl;
	cout<<"Nama penjawab : "; cin>>np;
	cout<<"Siapa ketua kelas pplg 2? : "; cin>>sk;
	cout<<"Siapa wakil ketua kelas pplg 2? : "; cin>>sw;
	cout<<"Siapa raja KTC 2022? : "; cin>>sr;
	cout<<"Siapa ketua PDI? : "; cin>>sp;
	cout<<"************************************************************"<<endl;
	system("cls");
	
	if(sk == "hilman" and sw == "rizal" and sr == "rizal" and sp == "megawati"){
		cout<<"Selamat "<<np<<", kamu berhasil menjawab semua pertayaan:) \nuntuk mendapatkan hadiahnya silahkan memasuki program hadiah kuis:)";
	}else{
		cout<<"Maaf "<<np<<", mungkin salah satu jawabanmu salah:(";
  			}

		}else if(pr == "Hadiah"){
			system("cls");
			cout<<"********************Program hadiah kuis***************************"<<endl;
			cout<<"Masukan usename: "; cin>>np;
			cout<<"Jawaban no 1 [benar/tidak]: "; cin>>n1;
			cout<<"Jawaban no 1 [benar/tidak]: "; cin>>n2;
			cout<<"Jawaban no 1 [benar/tidak]: "; cin>>n3;
			cout<<"Jawaban no 1 [benar/tidak]: "; cin>>n4;
			cout<<"Jawaban no 1 [benar/tidak]: "; cin>>n5;
			
			if(n1 == "benar" && n1 == "benar" && n1 == "benar" or n1 == "benar" or n1 == "benar"){
				cout<<"Selamat "<<np<<", telah mendapatkan hadiah kuis tahun ini!:)";
			}else{
				cout<<"maaf "<<np<<", anda belum bisa mendapatkan hadiah kuis tahun ini:(";
			}
		}
		
	}else{
		system("cls");
		cout<<"ERROR PLEASE TRY AGAIN!";
	}
	}

