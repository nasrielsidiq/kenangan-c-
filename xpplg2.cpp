/*	
	daftar yang belum beres:
	1. mengubah jadwal ke yang terbaru dan menambah kan sesi b, terus pindah kan ke void di dalam daftar void
	2. memindah kan structure ke dalam void baru di dalam daftar void
	3. menambah kan bio kreator ku identitas masing masing dan pindah kan ke void baru di dalam daftar void
	4. mun misal aya nu kurang ata kritikan di hasil tinggal hubungi engke cari solusi. Usahakeun aya kritikan atau nu kurang
	5. bikin akun masing masing 
	6. untuk nama nama void baru, sesuai ken jeng syarat percabangan
	7. tambah keun quotes daftar na tos aya, mun misal aya quotes buatan sendiri manga we
	
*/

//paket yang di pakai
#include<iostream>
#include<windows.h> 
#include<iomanip>
#include<unistd.h>
#include<conio.h>
using namespace std;
//fungsi fungsi yang di buat


void coordinat(int x, int y)//fungsi untuk menempat kan teks menjadi lebih rapih
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
	system("color 17 ");
	//						12345678901234567890123456789012345678901234567890
	coordinat(85,12); cout<<"|";
	coordinat(35,13); cout<<"|_________________________________________________|";
	coordinat(35,10); cout<<" _________________________________________________";
	coordinat(35,11); cout<<setiosflags(ios::left)<<setw(50)<<"|"<<setw(0)<<"|";
	coordinat(35,12); cout<<"| LOADING";sleep(1);cout<<".";sleep(1);cout<<".";sleep(1);cout<<".";

	sleep(3);
	system("cls");
	sleep(1);
}

		  /*
		  Daftar Quotes
			cout<<"kalau kamu punya hari yang sulit bersabarlah, karena besok akan lebih sulit:) "<<endl;
			cout<<"Karna saya orang malas, jika bisa tidak kenapa harus iya:v"<<endl;
			cout<<"Berharap kepada manusia adalah patah hati yang paling di semgaja NT YEUUUH>~<"<<endl;
			cout<<"Nyaman itu JEBAKAN-_-"<<endl;
			cout<<"Kenapa kau lakukan Sekarang jika bisa di lakukan besok;}"<<endl;
			cout<<"apa artinya besok jika kemarin atau lusa"<<endl;
			cout<<"ingat yah anak anak tetaplah di jalan setan"<<endl;
			cout<<"aku peduli?? tidak tidak tidak mending turu kidssss"<<endl;
			cout<<"jangan pernah kembali ke masa lalu karna jika kau melakukan itu sama saja kau masuk ke jurang untuk kedua kalinya (HANYA KALIMAT DARI SEORANG SAD BOY)"<<endl;
			cout<<"kamu terlalu indah untuk dimiliki dengan cara yang salah"<<endl;
			cout<<"orang yang tepat di waktu yang salah itu beneran ada"<<endl;
			cout<<"melihat ke bawah ketika naik dan melihat ke atas ketika turun"<<endl;
			cout<<"jika senyuman adalah sedekah maka aku adalah orang termiskin yang menginginkan sedekah dari mu itu"<<endl;
		  */

void quotes1(){//fungsi-fungsi untuk output quotes
	cout<<"kalau kamu punya hari yang sulit bersabarlah, karena besok akan lebih sulit:) "<<endl;
}void quotes2(){
	cout<<"Karna saya orang malas, jika bisa tidak kenapa harus iya:v"<<endl;
}void quotes3(){
	cout<<"Berharap kepada manusia adalah patah hati yang paling di semgaja NT YEUUUH>~<"<<endl;
}void quotes4(){
	cout<<"Nyaman itu JEBAKAN-_-"<<endl;
}void quotes5(){
	cout<<"Kenapa kau lakukan Sekarang jika bisa di lakukan besok;}"<<endl;
}void quotes6(){
	cout<<"apa artinya besok jika kemarin atau lusa"<<endl;
}void quotes7(){
	cout<<"ingat yah anak anak tetaplah di jalan setan"<<endl;
}

//main kodingan
int main()
{
	loading();
		string us,pas,ch = "";
		char c;

	cout<<"\t=============X PPLG 2 CLASS============="<<endl;
	cout<<"========================================================="<<endl;

//main login
	cout<<"Username: "; cin>>us;
	cout<<"password: "; 
	while(c != '\r') //Loop sebelum menekan 'Enter' 
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
     else if(c == '\b')   //percabangan ketika menekan 'Backspace'
        {
        if(pas.size() != 0)  
           {
           cout << "\b \b";
           pas.erase(pas.size() - 1, 1);
           }
        continue;
        }
     else if(c <= '9' && c >= '0' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') 
        {
        pas += c;
        cout << "*";//simbol pengganti tampilan password
        }
     else
        continue;
     }    
     //daftar akun yang bisa di gunakan
	if(us == "mitsu" && pas == "bismilah" or us== "apaantuh"&& pas == "lahaula" or us == "silent" && pas =="666" or us == "Kiaa" && pas =="exeed12"){
		string folder;
	//main setelah login
		cout<<"\n \t=============WELCOME "<<us<<"============="<<endl;
		cout<<"========================================================="<<endl;
	
		char looping='y';
		int counter=0;
	while(looping == 'y'){//kodingan agar kodingan bisa naik kemmbali ke atas, sebelum mengenal goto
		cin>>folder;
		//percabangan untuk membuat inputan seperti cmd
		if(folder == "c/quotes/1"){
			quotes1();
			cout<<"next?";cin>>looping;
			counter++;
		}else if(folder == "c/quotes/2"){
			quotes2();
			cout<<"next?";cin>>looping;
			counter++;
		}
		else if(folder == "c/bio"){
			cout<<"\tSelamat datang di server X PPLG 2 yang di buat pada saat Gabut dan di kembang kan setelah menjadi TUGAS"<<endl;
			cout<<"next?";cin>>looping;
			counter++;
		}else if(folder == "c/structure"){
		cout<<"+===============================================+"<<endl;
			cout<<"|NO 	|NAMA			|JOBDES		|"<<endl;
			cout<<"+-------+-----------------------+---------------+"<<endl;
			cout<<"|1	|Hilman Agustian	|Ketua kelas	|"<<endl;
			cout<<"+-------+-----------------------+---------------+"<<endl;
			cout<<"|2	|M Rizal Fikri		|W Ketua Kelas	|"<<endl;
			cout<<"+-------+-----------------------+---------------+"<<endl;
			cout<<"|3	|Rivana Pebrianti	|Sekertaris	|"<<endl;
			cout<<"+-------+-----------------------+---------------+"<<endl;
			cout<<"|4	|Alika Rahma S		|W Sekertasri	|"<<endl;
			cout<<"+-------+-----------------------+---------------+"<<endl;
			cout<<"|5	|Naisah Alya		|Bendahara	|"<<endl;
			cout<<"+-------+-----------------------+---------------+"<<endl;
			cout<<"|6	|Silvia Cintani A	|W Bendahara	|"<<endl;
			cout<<"+===============================================+"<<endl;
			cout<<"next?";cin>>looping;
			counter++;
		}else if(folder == "c/bio/creator"){
			cout<<"Creator 1:\n";
			cout<<"Nama \t: M Mufti Nasriel Sidiq M"<<endl;
			cout<<"Kelas \t: X PPLG 2"<<endl;
			cout<<"TTL \t: 10 juni 2006"<<endl;
			cout<<"Status \t: Pelajar"<<endl;
			cout<<"Hobi \t: Membaca"<<endl;
			cout<<"next?";cin>>looping;
			counter++;
		}else if(folder == "c/jadwal/a"){
			cout<<"\bmonday"<<endl;
			cout<<"ODPR"<<endl;
			cout<<"\btuesday"<<endl;
			cout<<"PJIPAS || BDKR"<<endl;
			cout<<"\bwednesday"<<endl;
			cout<<"ADP"<<endl;
			cout<<"\bthursday";
			cout<<"PJIPAS || ADP || PJO"<<endl;
			cout<<"\bfriday"<<endl;
			cout<<"PJIPAS || BDKR"<<endl;
			cout<<"\bsaturday"<<endl;
			cout<<"PJIPAS || INF"<<endl;
		}else{
			cout<<"404 NOT FOUND"<<endl;
			cout<<"next?";
			cin>>looping;
			counter++;
		}
		}cout<<"TERIMAKASIH TELAH MAMPIR";
		return 0;
	}else{
	cout<<"404 NOT FOUND";
		
}system("pause");
}
