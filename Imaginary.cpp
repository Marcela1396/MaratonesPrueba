#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long int a=1, b=1;
    long long int  r;


    cin>>a>>b;
    while(a != 0 && b!=0){
    	r = b%4;
    	if(r== 0){
    		cout<<a<<endl;
		}else{
			if(r==1){
				cout<<a<<'i'<<endl;	
			}else{
				if(r==2){
					cout<<-a<<endl;	
				}
				else{
					if(r==3){
						cout<<-a<<'i'<<endl;		
					}
				}
			}
		}
		cin>>a>>b;
        
    }
   


}
