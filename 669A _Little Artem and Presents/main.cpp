/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 5, 2016, 2:28 PM
 */

#include <iostream>
using namespace std;

//Execution Begins Here
int main(int argc, char** argv) {

    int number;
    int count=0;
    cin>>number;
    
    while(number>0)
    {
        number=number-2;
        if(number>1)
        {
            number--;
            count++;
        }
        count++;
    }
    cout<<count<<endl;
  
    return 0;
}

