#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<stdint.h>
using namespace std;




int main(){
	ios::sync_with_stdio(false);
	long long int cases;
	long long int number=0;
	long long int pre1=8;
	long long int pre2=2;
	long long int sum=10;
	long long int temp_sum=0;
	cin>>cases;
	while(cases){
		pre1=8;
		pre2=2;
		sum=10;
		temp_sum=0;
		cases--;
		cin>>number;
		if (number<=8){
			cout<<"2"<<endl;
		}
		else if (number<=34){
			cout<<"10"<<endl;
		}
		else{
			while(1){
				temp_sum=4*pre1+pre2;
				if (temp_sum>=number){
					break;
				}
				//cout<<temp_sum<<endl;
				//cout<<temp_sum<<' ';
				sum+=temp_sum;
				pre2=pre1;
				pre1=temp_sum;
			}
			cout<<sum<<endl;
		}
	}

}