/*
 Nama 	:Difa Bagasputra M
 NPM	:140810180057
 Kelas	:A
 Tanggal Pembuatan :26 Februari 2019
 Nama Program : fungsi swap
 */ 

#include<iostream>

using namespace std;

void swap(int& x,int& y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	
}

int main(){
	int x=2;
	int y=3;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	swap(x,y);
	cout<<"===After Swap====\n";
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	
}
