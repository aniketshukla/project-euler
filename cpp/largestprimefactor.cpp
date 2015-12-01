#include<iostream>
#include<vector>
#include<algorithm>
#include<stdint.h>
#include<math.h>
using namespace std;

int recur_solver(long long int number,long long int &prime_number){
	
	long long int sq_number=(long long int)(pow(number,0.5));
	int super_koopa=0;
	for(long long int i=2;i<=sq_number;i++){
		if (number%i==0){
			int koopa=0;
			for(long long int j=2;j<i;j++){
				if (i%j==0){
					koopa=1;
					break;
					
				}
			}
			if (koopa==0){
				prime_number=i;
				recur_solver(number/i,prime_number);
				return 1;
				super_koopa=1;

			}
		}
	}
	if (super_koopa==0){
		prime_number=number;
	}
	return 1;
}


int main(){
	ios::sync_with_stdio(false);
	int cases;
	cin>>cases;
	long long int number=0;
	while(cases){
		cases--;
		cin>>number;
		long long int recur_solver_prime=0;
		recur_solver(number,recur_solver_prime);
		if (recur_solver_prime==0){
			cout<<recur_solver_prime<<endl;
		}
		else{
			cout<<recur_solver_prime<<endl;
		}		

	}
}