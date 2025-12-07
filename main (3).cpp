/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
usin namespace std;
int main(){
itn N, amount;
cout<<"Number of orders:";
cin>>N;
int total=0;
int small orders=0;
for (int i=1; i<=N; i++)
cout <<"Enter amount for orders"<< i <<":"
cin>> amount;
total+= amount;
if (amount<250)
cout <<"Small order" <<endl;
small orders++;
cout<<"\nTotal money collected:" << total << endl;
cout<<"Total small orders:" << small orders << endl;
return 0;
}

