/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on March 10, 2016, 2:17 PM
 * Purpose: Elephant Problem
 * //An elephant decided to visit his friend. It turned out that the elephant's 
 * house is located at point 0 and his friend's house is located at point x(x > 0)
 * of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 
 * positions forward. Determine, what is the minimum number of steps he need to 
 * make in order to get to his friend's house.
 *Input
 *The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The 
 *coordinate of the friend's house.
 *Output
 *Print the minimum number of steps that elephant needs to make to get from 
 *point 0 to point x.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and Initialize the Variables
    int x;
    cin>>x;
    int coordin=x/5;
    
    if(x%5!=0)
    {
        coordin++;
    }
    cout<<coordin<<endl;
    return 0;
}

