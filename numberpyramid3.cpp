#include <iostream>
using namespace std;
int main(){
   //12345
   //1234
   //123
   //12
   //1
   int n;
   cout<<"enter a number";
   cin>>n;
   for(int i=0;i<5;i++){
    for(int j=1;j<=n-i;j++){
        cout<<j;
    }

    cout<<endl;
   }
}
