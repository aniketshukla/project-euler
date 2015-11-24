#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<stdint.h>
using namespace std;




int main(){
	ios::sync_with_stdio(false);
	int64_t cases;
	int64_t number;
	int64_t sum=0;
	cin>>cases;
	while(cases){
		sum=0;
		cases--;
		cin>>number;
		int64_t range_3=(number-3)/3+1;
		int64_t range_5=(number-5)/5+1;
		int64_t range_15=(number-15)/15+1;
		if (range_3*3==number){
			range_3-=1;
		}
		if (range_5*5==number){
			range_5-=1;
		}
		if (range_15*15==number){
			range_15-=1;
		}
		//cout<<range_3<<" "<<range_5<<" "<<range_15<<endl;
		if (number>=3){
		sum+=(range_3*(6+(range_3-1)*3))/2;}
		if (number>=5){
		sum+=(range_5*(10+(range_5-1)*5))/2;}
		if (number>=15){
			sum-=(range_15*(30+(range_15-1)*15))/2;
		}
		cout<<sum<<endl;
	}
}