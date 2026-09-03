#include<bits/stdc++.h>
using namespace std;

// Three Cases are in Time Complexity
// 1. Best Case
// 2. Average case
// 3. worst Case

// Always Compute time Complexity in worst case sceniario

// Time Complexity always Computed in terms of Worst Case
/* We don't consider Constant as a unit operation{

O(N*10+1)
so tere is 1 is very less thing compare to N*10 which is dosn't 
affect it so we don't take constant as a operation

}
*/

// Avoid Lower Values
// O(N*10^15 + N*10^10 ) - so there we avoid N*10^10 because it less amount of value compare to N*10^15(it is such a huge value)

// Apart from Big O Notation there is also 
// 0. BigO Notation - Wost Case (Upper Bond)
// 1. theata Notation - Avearge complxity
// 2. Omega Notation - Best Case Complexity

/*
If an Array of a[N] u define it means BigO(N) time complexity u used
*/
int main(){
    // Topic = Time Complexity
    // lets calculate for loop

    // Q- what's the time Complexity of this loop
    // for(int i=0;i<=N;i++){
    //     cout<<"Aqdas";
    // }

    // it's Big O(N*3)
    //Because it runs N time 
    // And 3 things happen for every iteration


    // Lets see heo is Best , Average and Worst

    // if(Marks<25) cout<<"D";
    // So there if someone marks is 10 
    // then the time complexity is O(2) , check and print only two operation - So it is Best Case

    // else if(Marks<45) cout<<"C";


    // else if(Marks<65) cout<<"B";


    // else cout<<"A";
    // But this is Interesting 
    // this is worst Case
    // Because it Time Complelxity is O(4) , 3 check and one print total 4 operation over here


    // Average Case = (Best Case + Wost Case)/2


    /*
    if(i=0;i<N;i++){
    for(int j=0;j<N;j++){
        cout<<"Aqdas";
    }
    }
    so what is the time complexity of this loops 
    it is like
    i=0; for(j=0;j<N;j++) // i mean j loop run then
    i=1; for(j=0;j<N;j++) // i mean j loop run then
    i=2; for(j=0;j<N;j++) // i mean j loop run then
    i=3; for(j=0;j<N;j++) // i mean j loop run then
    .
    .
    .
    .
    it goes N time because i<N;


    So the Time Complexity is O(N*N)
    */

}