#include <iostream>
#include <stdio.h> 
#include <conio.h>

using namespace std;

int main()
{
char Nama [30];
char NIM[11];
int A, B, C, D;
float E;

cout<<"Masukan Nama = ";
gets (Nama);
cout<<"Masukan NIM = ";
gets (NIM);
cout<<"Masukan Nilai Absen = ";
cin>>A; 
cout<<"Masukan Nilai Tugas = ";
cin>>B; 
cout<<"Masukan Nilai UTS = ";
cin>>C;
cout<<"Masukan Nilai UAS = ";
cin>>D;
E = (A*0.1)+(B*0.2)+(C*0.3)+(D*0.4);
cout<<"Total Nilai : "<<E<<endl;

if (E>=70)
	{
		cout<<"LULUS"<<endl;
	} 
if (E>=50&&E<=69.99)
	{
		cout<<"LULUS BERSYARAT"<<endl;
	} 
else
if (E<50)
	{
		cout<<"TIDAK LULUS"<<endl;
	} 
} 
