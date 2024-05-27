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
	coordinat(35,12); cout<<"| LOADING";sleep(1);cout<<".";system("color 4");sleep(1);cout<<".";system("color a");sleep(1);cout<<".";system("color 9");sleep(2);
	system("cls");
	sleep(1);
}
void caseh(){
	int li,lii;
		coordinat(5,2); for(int l=1 ; l < 100 ; l++){cout<<"_";}
		for(int l=0 ; l <= 21 ; l++){
		li= 3+l;
		coordinat(5,li); cout<<"|";	
		}
		for(int lu=0; lu<= 21 ; lu++){
			lii= 3+lu;
			coordinat(103,lii); cout<<"|";
		}
		coordinat(5,25);cout<<"|";for(int l=1 ; l < 98 ; l++){cout<<"_";}cout<<"|";
		
}

void teks_loading(){
	system("color 1");
	
}
int main(){
	string np, sk, sw, sr, sp, st, us, password, pr, n1, n2, n3, n4, n5;
	int ca;
	char c;
		
	caseh();

	coordinat(12,5);cout<<"Masukan username : "; cin>>us;
	coordinat(12,6);cout<<"Masukan password : "; 
	while(c != '\r') //Loop until 'Enter' is pressed
    {
        c = getch();
        if(c == '0')
         {
            switch(getch())
              {
              default:
                  break;            
            };
        }
     else if(c == '\b')   //If the 'Backspace' key is pressed
        {
        if(password.size() != 0)  //If the password string contains data, erase last character
           {
           cout << "\b \b";
           password.erase(password.size() - 1, 1);
           }
        continue;
        }
     else if(c <= '9' && c >= '0' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') 
        {
        password += c;
        cout << "*";
        }
     else
        continue;
     } 
	if(us == "rizal" && password == "exeed12" or us == "hilman" && password == "pakkm" || us == "mucaa" && password == "geusancabul"  or us=="geusanganteng" and password=="pacarmarsha"){
			system("cls");
			loading();
		
			system("color 9");
			caseh();
		
				coordinat(23,5);cout<<"******************Program kuis berhadiah***********************"<<endl;
				coordinat(25,6);cout<<"Nama penjawab : "; cin>>np;
				coordinat(25,7);cout<<"Siapa ketua kelas pplg 2? : "; cin>>sk;
				coordinat(25,8);cout<<"Siapa wakil ketua kelas pplg 2? : "; cin>>sw;
				coordinat(25,9);cout<<"Siapa raja KTC 2022? : "; cin>>sr;
				coordinat(25,10);cout<<"Siapa ketua PDI? : "; cin>>sp;
				coordinat(25,11);cout<<"siapa Kepala Sekolah YPC? :"; cin>>st;
				coordinat(23,12);cout<<"************************************************************"<<endl;
				
				
					coordinat(23,13);cout<<"Selamat "<<np<<", kamu berhasil menjawab semua pertayaan:)";
			
	
				sleep(5);
				system("cls");
				if(sk=="hilman"){
					n1="benar";
				}else{
					n1="salah";
				}if(sw=="rizal"){
					n2="benar";
				}else{
					n2="salah";
				}if(sr=="rizal"){
					n3="benar";
				}else{
					n3="salah";
				}if(sp=="megawati"){
					n4="benar";
				}else{
					n4="salah";
				}if(st=="ujang"){
					n5="benar";
				}else{
					n5="salah";
				}
					caseh();
					coordinat(23,5);cout<<"********************Program hadiah kuis***************************"<<endl;
				
					coordinat(25,7);cout<<"Jawaban no 1 : "<<n1<<endl;
					coordinat(25,8);cout<<"Jawaban no 2 : "<<n2<<endl;
					coordinat(25,9);cout<<"Jawaban no 3 : "<<n3<<endl;
					coordinat(25,10);cout<<"Jawaban no 4 : "<<n4<<endl;
					coordinat(25,11);cout<<"Jawaban no 5 : "<<n5<<endl;
					coordinat(23,12);cout<<"******************************************************************";
					
					if(n1 == "benar" && n2 == "benar" && n3 == "benar" && n4 == "benar" && n5 == "benar"){
						system("color a");
						coordinat(23,13);cout<<"Selamat "<<np<<", telah mendapatkan hadiah kuis tahun ini!:)";
					}else{
						system("color 4");
						
						coordinat(23,13);cout<<"maaf "<<np<<", anda belum bisa mendapatkan hadiah kuis tahun ini:(";
					}
				caseh();
		
			}
				else{
					system("cls");
					cout<<"ERROR PLEASE TRY AGAIN!";
				}
				return 0;
				
}