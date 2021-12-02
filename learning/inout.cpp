#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    // << is called insertion operator
    // The << operator inserts the data that follows it into the stream that precedes it
    // int a;
    // cin>>a;
    // cout<<a;
    // string s("vivek");
    // cout<<s;
    // // cin>>s;
    // // cout<<s;
    // getline(cin,s);
    // cout<<"hello "<<s;
/*     The extraction operation on cin uses the type of the variable after the >> operator to determine how it interprets the
 characters read from the input; if it is an integer, the format expected is a series of digits, if a string a sequence of
 characters, etc.*/


// The sstream header
/* The standard header <sstream> defines a type called stringstream that allows a string to be treated as a stream, and
 thus allowing extraction or insertion operations from/to strings in the same way as they are performed on cin and cout.
 This feature is most useful to convert strings to numerical values and vice versa. For example, in order to extract an
 integer from a string we can write:*/
    string str("1729");
    int hrn;
    stringstream(str)>>hrn;
    cout<<hrn<<str<<endl;

    return 0;
}