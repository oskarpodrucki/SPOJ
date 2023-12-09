#include <iostream>

using namespace std;

int v1,v2,ile;

int main(){

    cin>>ile;

    for(int i = 1; i<=ile; i++){
        cin>>v1>>v2;
        cout<<2*v1*v2/(v1+v2)<<endl;
    }

    return 0;
}