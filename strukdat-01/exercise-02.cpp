/*
 Nama 	:Difa Bagasputra M
 NPM	:140810180057
 Kelas	:A
 Tanggal Pembuatan :26 Februari 2019
 Nama Program : FizzBuzz
 */ 

#include<iostream>

using namespace std;

float celtofah(float temp){
	return ((temp*9)/5)+32;
}

int main(){
	float cel;
	cout<<"Suhu Celcius = ";cin>>cel;
	cout<<"\nsuhu dalam fahrenheit = "<<celtofah(cel);
}
