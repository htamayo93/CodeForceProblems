/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on March 10, 2016, 2:17 PM
 * Purpose: Elephant Problem
 * //In this problem you are to calculate the sum of all integers from 1 to n, 
 * but you should take all powers of two with minus in the sum.
 *For example, for n = 4 the sum is equal to  - 1 - 2 + 3 - 4 =  - 4,
 *because 1, 2 and 4 are 20, 21 and 22 respectively.
 *Calculate the answer for t values of n.
 *Input
 *The first line of the input contains a single integer t (1 ≤ t ≤ 100) — the
 * number of values of n to be processed.
 * Each of next t lines contains a single integer n (1 ≤ n ≤ 109).
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and Initialize the Variables
    long long n;
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
       cin>>n;
       int p=log2(n);
       n=((1+n)*n)/2;
       int x=2;
       for(int j=0;j<=p;j++)
       {
           n-=x;
           x*=2;
       }
       cout<<n<<endl;
    }
    
    return 0;
}

