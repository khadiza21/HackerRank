#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 
   
    int t;
    cin>>t;
    
    int numbers[t];
    
    for(int i=0; i<t; i++){
        cin>>numbers[i];
    }
    
    int al = sizeof(numbers)/sizeof(numbers[0]);
 
    
    for(int i=al-1; i>=0; i--){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
    
    
    
    return 0;
}
