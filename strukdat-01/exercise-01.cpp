/*
 Nama 	:Difa Bagasputra M
 NPM	:140810180057
 Kelas	:A
 Tanggal Pembuatan :26 Februari 2019
 Nama Program : FizzBuzz
 */ 

#include<iostream>

using namespace std;

void fizzbuzz(int a){
	for(int i=1;i<=a;i++){ //perulangan untuk output angka
		if(i%3==0&&i%5==0)
			cout<<"FizzBuzz"; //jika dapat dibagi 3 dan 5 maka FizzBuzz
		else if(i%5==0)
			cout<<"Buzz"; //jika dapat dibagi 3 Fizz
		else if(i%3==0)
			cout<<"Fizz"; //jika dapat dibagi 5 Buzz
		else
			cout<<i;
			
		cout<<endl;
	}
}

int main(){
	int a;
	cout<<"Masukkan range : ";cin>>a;
	fizzbuzz(a);
}
