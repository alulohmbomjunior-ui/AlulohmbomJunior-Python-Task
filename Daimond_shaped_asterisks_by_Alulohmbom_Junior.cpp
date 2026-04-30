#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 int main (){
 	int size,k;
 	cout<<"Enter the size of the daimond:";
 	cin>>size;
 	
 	for (int i=1; i<= size; i++){
 		for( int j=1; j<= size-i; j++){
 			cout<<" ";
		 }
		 for (int k=1; k < 2 * i; k++){
		 	cout<<"*";
		 }
		 cout << endl;
	 }
	 
	 for(int i=size; i > 0; i--){
	 	for (int j=1; j<= size - i; j++){
	 		cout<<" ";
		 }
		 for(int k=1; k< 2 * i; k++){
		 	cout<<"*";
		 }
		 cout << endl;
	 }
	 
	 return 0;
 	
 }