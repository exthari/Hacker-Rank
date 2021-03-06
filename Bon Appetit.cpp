#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n,k,total =0,charge;
    cin>>n>>k;
    vector<int> bill(n);

    for(int i =0 ; i< n ; i++) {

        cin>>bill[i];
    }

    cin>>charge;

    for(int i =0 ; i< n ; i++) {

        total = total + bill[i];
         
         }


    total = (total - bill[k])/2;
    
    if(total != charge) {

        cout<<charge - total;
    }

    else if(total== charge){

        cout<<"Bon Appetit";
    }

return 0;
}
