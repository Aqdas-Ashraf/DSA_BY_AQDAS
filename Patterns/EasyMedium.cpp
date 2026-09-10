#include<iostream>
using namespace std;

int main(){
/*
Logic Behind the Patterns : 

Patterns - Nested loops
Rule 1: for the outer loop count the number of lines

Rule 2: For the inner loop, Focus on the coloums & connect them somehow to the rows

Rule 3: Whatever you printing print them inside the inner loop

Rule 4: Observe Symmetry [Optional]

Example :
**** ---1
**** ---2
**** ---3
**** ---4

so the outer loop running for 4th times
like : 
    // This is outer loop
    for(int i=0; i<4; i++){
        -----------------
        -----------------
        -----------------
        -----------------
}

for inner loop focus in coloums and connect them somehow to the rowa
0123
||||
****
****
****
****
||||
4444

every coloums has 4 starts means
0->4
1->4
2->3
3->4

connect them somehow to the rows

for(int i=0;i<4;i++){ --- outer loop
    for(int j=0;j<4;j++){ --- inner loop
        cout<<"*";
    }
        cout<<endl;

}


*/

// int i=0;
// for(i=0;i<4;i++){
//     for(int j=0;j<4;j++){
//         cout<<"*";
//     }
//         cout<<" "<<i;
//         cout<<endl;

// }
// }

/*
Dry Run : 
#1 : Outer loop Starts with i=0;
(i) : Inner loop running j=0; condition true , print * , j increase 1

(ii) : j=1; , condition true , print * , j increase

(iii) : j=2 , condition truw , print * , j increase

(iv) : j=3 , condition true , print * , j increase 

(v) : j=4 , condition false , inner loop end , line end , shoft to next line 

then outer loop run and i = 2
and then again whole proccess happen 
In the end I have the square of starts
*/


/*
#2 : 
*
**
***
****
*****

for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
}
*/


/*
1
12
123
1234
12345

for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
}
}
*/

/*
1
22
333
4444
55555

for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        cout<<i;
    }
    cout<<endl;
}
}
*/

/*
* * * * * 
* * * * 
* * * 
* * 
* 

for(int i=1;i<=5;i++){
    for(int j=5;j>=5-i+1;j--){
        cout<<"* ";
    }
    cout<<endl;
}
}
*/

/*
12345
1234
123
12
1

for(int i=1;i<=5;i++){
    for(int j=1;j<=5-i+1; j++){
        cout<<j;
    }
    cout<<endl;
}
}
*/


/*
    *    
   ***   
  *****  
 ******* 
*********


int n;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1; j++){
        cout<<" ";
    }
    for(int k=0;k<2*i+1;k++){
        cout<<"*";
    }
    for(int l=0;l<n-i-1;l++){
        cout<<" ";
    }
    cout<<endl;
}

}
*/

/*
*********
 ******* 
  *****  
   ***   
    *   

    int n;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    for(int k=0;k<(2*n)-(2*i+1);k++){
        cout<<"*";
    }
    for(int l=0;l<i;l++){
        cout<<" ";
    }
    cout<<endl;

}
}
*/
}