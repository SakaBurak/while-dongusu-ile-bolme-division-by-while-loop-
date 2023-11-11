#include<iostream>

using namespace std;

int main(){
	int sayi1,sayi2 ;
	cout<<"Bolme islemi yapmak istediginiz sayilari sirasi ile giriniz:"<<endl;
	cout<<"1.Sayi:";
	cin>>sayi1;
	cout<<"2.Sayi:";
	cin>>sayi2;
	cout<<"Girmis oldugunuz "<< sayi1<<" sayisinin "<< sayi2 <<" sayisina bolumu:";
	
	int bolum=0;
	while(sayi1>=sayi2){
		sayi1 -= sayi2;
		bolum++;
	}
	cout<<bolum<<endl;
	return 0;
}
