#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

main(){
char nama[20][30],ket[20];
int i,j,idsiswa[20],inggris[20],mtk[20],indo[20],akhir[20];
cout<<" PROGRAM DAFTAR NILAI SMPTN SISWA "<<endl;
cout<<" MATERI PEMROGRAMAN C++ "<<endl<<endl;
cout<<" Masukkan Jumlah Siswa : ";cin>>j;
cout<<endl;

for(i=1;i<=j;i++){
	cout<<" Siswa Ke - "<<i<<endl;
	cout<<" ID Siswa		: ";cin>>idsiswa[i];
	cout<<" Nama Siswa             : ";cin>>nama[i];
	cout<<" Nilai Bahasa Inggris   : ";cin>>inggris[i];
	cout<<" Nilai Matematika       : ";cin>>mtk[i];
	cout<<" Nilai Bahasa Indonesia : ";cin>>indo[i];

akhir[i]=(inggris[i]*0.4)+(mtk[i]*0.3)+(indo[i]*0.3);

if(akhir[i]>=80)
ket[i]='L';
else if(akhir[i]<80)
ket[i]='T' ;
else
ket[i]='0';
cout<<endl;
}

cout<<"\n                                            DAFTAR NILAI                                        "<<endl;
cout<<"                                              UJIAN SMPTN                                      "<<endl;
cout<<"================================================================================================"<<endl;
cout<<"ID    |   Nama       |            		   Nilai                         |             |"<<endl;
cout<<"Siswa |   Siswa      | ----------------------------------------------------------|  Keterangan |"<<endl;
cout<<"      |              |  B.Inggris  |   Matematika  |   B.Indonesia   |   Akhir   |             |"<<endl;
cout<<"================================================================================================1"<<endl;

for(i=1;i<=j;i++){
	cout<<setiosflags(ios::left)<<setw(10)<< idsiswa[i];
	cout<<setiosflags(ios::left)<<setw(12)<< nama[i];
	cout<<setiosflags(ios::left)<<setw(17)<< inggris[i];
	cout<<setiosflags(ios::left)<<setw(17)<< mtk[i];
	cout<<setiosflags(ios::left)<<setw(17)<< indo[i];
	cout<<setiosflags(ios::left)<<setw(15)<< akhir[i];
	cout<<setiosflags(ios::left)<<setw(15)<< ket[i]<<endl;
}
	cout<<"================================================================================================"<<endl;
	cout<<"\n Penjelasan :"<<endl;
	cout<<" L = Lulus"<<endl;
	cout<<" T = Tidak Lulus"<<endl;
	
	cout<<"						By : IMO "<<endl;
	cout<<"					     Copyright @ 2021"<<endl;
	
	getch();
}
