/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 17, 2016, 2:21 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int time1=1;
    int num;
    int time2;
    int count=0;
    
    cin>>num;
    if(num<10)
    {
        cout<<count;
    }
    else
    {
        while(num>=10)
        {
          while(num>=10)
          {
              time2=num%10;
              time1=time1*time2;
              num=num/10;
          }
          time1=num*time1;
          num=time1; 
          time1=1;
          count++;
        }
        
        cout<<count<<endl;
    }
    
    return 0;
}
