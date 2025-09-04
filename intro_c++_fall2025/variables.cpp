// variables location in memeory 
// name consists of any number of characters using underscore 
// gross_pay
// every variable used in c++ program must be declared 
// declaration is type variablename;
// types are short, int, unsigned, long for integers
// type tells complier you want a certain number of bytes to hold that integer-- how many bytes do i want this variable??
// for real numbers (numbers with decimals) we have float, double, double long -- float is 4 bytes, long is 8 bytes
// for single characters: char (1 byte)
// ex: x = 12; short x; int x; y = 25.85; float y;
// int x; int y; int x,y;

// operators:
// arithmetic operators +, -, *, /, %
// equality operator == ex: x==y, result: true or false 
// relational operators <, <=, >, >=, !=
// logical operators NOT !, AND &&, OR ||
// false gets the value 0, ex: 5==5==5 false
// 4/6*6 = 0 

#include <iostream>
using namespace std;
int main ()
{
    //intialization
    int x=10, y=10;
    cout << "x = "<< x << ", y = "<< y << endl;
    //asignment
    int z,u;
    z = u = 20;
    cout << "z = "<< z << ", u = "<< u<< endl;
    //using cin;
    cout<<"Enter the values for z and u"<< endl;
    cin >> z >> u;
    cout << "z = "<< z << ", u = "<< u<< endl;

}
