#include<iostream>

using namespace std;



int main(){

	long int n ;
	cin>>n;

	if(n<1919 && n%4 == 0){ // leap of julian

		cout<<"12.09."<<n;
	}

	else if(n<1919 && n%4 != 0) //non leap of julian
	{
		cout<<"13.09."<<n;

	}	

	else if(n>1919 && (n%400 == 0 || (n%4 == 0 && n%4 != 0))) // leap of greg
	{

		cout<<"12.09."<<n;
	}

	else if(n>1919 && n % 4 != 0 ){

		cout<<"13.09."<<n;
	}

}
