#include "var.h"
#include <windows.h>  
#include <iostream>
#include <math.h>
#include <string>
#define N 120
#define K 24


using namespace std;

static void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}  

static void Intf(){
	for( int i = 0; i < N; i++ ){
		for( int j = 0; j < K; j++ ){
			if ( j == K-1 ){
				gotoxy(i,K-1);
				cout << "-";
			}
			else if ( i == 0 ){
				gotoxy(0,j);
				cout << "|";
			}
			else{
				gotoxy(i,j);
				cout << " ";
			}
		}
	}
}

void sqrt_graf(string car){
	for(int i = 1; i < N; i++){
		for(int j=K-1; j>0; j--){
			gotoxy(i,pow(j-1,2));
			cout << "X";
		}
	}
}

void graf(string type, string car){
	Intf();
	if( type == "sqrt" ){
		sqrt_graf(car);
	}
}

