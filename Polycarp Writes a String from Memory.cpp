#include "iostream"
#include <unordered_set>
using namespace std;


int slove(string word){  
  unordered_set<char>set;
    int cont=0;
    for (char caracter : word) {
        set.insert(caracter);
        if(set.size()>3){
            cont++;
            set.clear();
            set.insert(caracter);     
        }       
    }
    if (set.size()!=0)
    {
            cont++;
    }
    
return cont;
}



int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int nWords = 0;
    cin >> nWords;
    string word;
    for (int i = 0; i < nWords; i++)
    {
        cin >> word;
        int var = slove(word);
        cout << var << endl;
    }
    


    return 0;
}
