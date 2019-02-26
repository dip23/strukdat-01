/*
 Nama 	:Difa Bagasputra M
 NPM	:140810180057
 Kelas	:A
 Tanggal Pembuatan :26 Februari 2019
 Nama Program : konversi suhu celcius ke fahrenheit
 */ 

#include<iostream>

using namespace std;

float celtofah(float temp){
	return ((temp*9)/5)+32; //fungsi merubah celcius ke fahrenheit
}

int main(){
	float cel;
	cout<<"Suhu Celcius = ";cin>>cel;
	cout<<"\nsuhu dalam fahrenheit = "<<celtofah(cel); //panggil fungsi konversi
}
