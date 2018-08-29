#include <iostream>
#include <cmath>
using namespace std;

/*Determining  whether a number is a prime or not

  properties of a prime number
   1.It has only two factors thats 1 and the number itself*/
   

int main() {
	
	int n;
	cout<<"Please enter a positive integer"<<endl;
	cin>>n;
	
	bool state=false;
	
	for( int i=2; i<n; i++){
		
		if(n%i==0){
			state= true;
			
			break;
		}
		
	}
	
	if(state){
		cout<<endl;
		cout<<"Your number is not a prime";
	}
	else{
		cout<<endl;
		cout<<"Your number is a prime";
	}
	return 0;
}
