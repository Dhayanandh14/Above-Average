
#include <iostream>
#include <iomanip>
#include<string.h>
using namespace std;

 int main() {
    int c;
    cin>>c;
    int s,n;
    double avg;
    double tot=0;
    for(int i=0;i<c;i++){
      cin>>n;
      int arr[n];
      for(int j=0;j<n;j++){
          cin>>arr[j];  
      }
      tot=0;
      for(int k=0;k<sizeof(arr)/sizeof(arr[0]);k++){
          tot = tot+arr[k];
      }
      avg = tot/n;
      double count=0;
      for(int m=0;m<sizeof(arr)/sizeof(arr[0]);m++){
        if(arr[m]>avg){
            count = count+1;
          }
      }
      double per = (100*count)/double(n);  
      cout << setprecision(3) <<fixed<<per<<"%";
      cout<<endl;
    }
}