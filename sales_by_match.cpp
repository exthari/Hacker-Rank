#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int n,sum=0,flag,j,temp;
    cin>>n;
    vector<int> a(n) ;

    for(int i = 0 ;i<n ; i++) {

        cin>>a[i];
    }    

    sort(a.begin() , a.end());

    vector<int> b;
    b=a;
    vector<int>::iterator ip;
    ip = unique(b.begin() , b.end());
    b.resize(distance(b.begin(), ip));


    for(ip = b.begin(); ip != b.end() ; ip++) {

        temp = *ip;
        flag = 0 ;

        for(j =0 ; j<n ; j++) {

            if(a[j]==temp) {
                flag++;
            }
        }

        sum =sum + int(flag/2);
    }
    
    cout<<sum;    

return 0;
}    