#include <iostream>
#include <string>
using namespace std;


string wordconvert(string word){
	if(word.length()>10)

		return word[0] + to_string(word.length()-2)+word.back();
	
	else
		return word;

}
int main(){
#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
#endif

int numWords =0;
cin>>numWords;

for ( int i = 0; i < numWords; i++)
{
	string word;
	cin>>word;
	cout<<wordconvert(word)<<endl;
	
}
return 0;
}