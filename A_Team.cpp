#include<stdio.h>
#include <iostream>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
#endif

	int num;
	cin>>num;
    int p,t,v,cont=0;
    for(int i =0;  i<num; i++){
        cin>>p>>t>>v;
        if(p+t+v>=2)
            cont += 1;
    }
	cout<<cont<<endl;
	return 0;
}