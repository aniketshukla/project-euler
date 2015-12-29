#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;


int reverser(int number){
	int number_alter=0;
	while(1){
		number_alter=number_alter*10+number%10;
		
		if (number<10){
			break;
		}
		number=number/10;
	}
	return number_alter;
}

int main(){
	int cases;
	int number;
	cin>>cases;
	while(cases){
		cases--;
		int onepunch=0;
		cin>>number;
		for(int i=999;i>=100;i--){
			for(int j=100;j<1000;j++){
				if (i*j<number){
					if (i*j==reverser(i*j) && i*j>onepunch){
						onepunch=i*j;
					}		
				}
				else{
					break;
				}
			}
		}
		cout<<onepunch<<endl;
	}
}