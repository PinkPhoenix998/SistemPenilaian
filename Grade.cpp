#include <iostream>
#include <stdio.h> 
#include <conio.h>

using namespace std;

int main()
{
char Nama [30]; 
char NIM [11];
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
cout<<"........................................." <<endl;

cout<<"Nama : "<<Nama<<endl;
cout<<"NIM : "<<NIM<<endl;
cout<<"Absen : "<<A<<endl; 
cout<<"Tugas : "<<B<<endl;
cout<<"UTS: "<<C<<endl;
cout<<"UAS: "<<D<<endl; 
E = (A*0.1)+(B*0.3)+(C*0.3)+(D*0.3);
cout<<"Total : "<<E<<endl; 

if (E>=80&&E<=100)
	{
		cout<<"A"<<endl;
	} 
if (E>=75&&E<=79.99)
	{
		cout<<"B"<<endl;
	} 
if (E>=65&&E<=74.99)
	{
		cout<<"C"<<endl;
	} 
else
if (E<65)
	{ 
		cout<<"D"<<endl;
	} 
} 
