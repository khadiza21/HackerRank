#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
   int count = 0;
   cin>>count;
   int score[count];
   for (int i = 0; i<count; i++){
     cin>>score[i];
   }
   
   int min = score[0];
   int max  = score[0];
   int  countMin=0,countMax=0;
 
  for (int i = 1; i<count; i++){
       if(score[i] <  min){
           min = score[i];
           countMin++;
       }
       else if(score[i] > max){
            max = score[i];
           countMax++;
   }
  }
   
  cout<<countMax<<" "<<countMin<<endl;
  return 0;
}
// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem