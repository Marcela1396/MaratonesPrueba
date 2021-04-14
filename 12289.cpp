#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    string word;
    cin>>c;
    for(int i=0; i<c; i++){
        cin>> word;
        int tam = word.size();
        if(tam > 3){
            cout<<'3'<<endl;
        }
        else{
            if((word[0]=='o' && word[1]=='n') || (word[0]=='o' && word[2]=='e')  || (word[1]=='n' && word[2]=='e')){
                cout<<'1'<<endl;
            }
            else{
                cout<<'2'<<endl;
                }
            }
       }
}


