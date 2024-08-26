#include <iostream>
using namespace std;

int findGreatest(int a,int b,int c,int d){
    int greatest; 
    if(a>b  && a>c && a>d){
        greatest = a;
    }else if (b>a  && b>c && b>d){
        greatest =b;
    }else if (c>a  && c>a && c>d){
        greatest =c;
    }else {
       greatest  =d;
    }
    return greatest; 
}


int main() {
int a,b,c,d;
cin>>a>>b>>c>>d;
 int greatNumber = findGreatest(a,b,c,d);
 cout<<greatNumber<<endl;
    return 0;
}
