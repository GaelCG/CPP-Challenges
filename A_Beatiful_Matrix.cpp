#include<stdio.h>
#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
#endif

int mtx[5][5];
int r,c;
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        cin>>mtx[i][j];
        if(mtx[i][j]==1){
            r=i;
            c=j;
        }
    }
    
}
int result= abs(r-2) + abs(c-2);
cout<<result<<endl;


}
