#include<iostream>
using namespace std;
int main(){
    //Constants in C++
    // integer costant floaing point constant, character and string constant(including escape characters)
    
    // octal numbers are preceded with 0 e.g. 0113
    // hexadecimal numbers are preceded with 0x e.g. 0x4b
    cout<<"we have only time to spend, so don't waste it \"invest it\" "<<"\t";
    cout<<"we have only time to spend, so don't waste it \"invest it\""<<"\b";
    cout<<"we have only time to spend, so don't waste it \"invest it\" "<<"";

// x = "string expressed in \
// two lines"
// is equivalent to:
// x = "string expressed in two lines

// Sometimes, it is just convenient to give a name to a constant value:
const double pi = 3.141;

// Preprocessor definitions (#define)
// Another mechanism to name constant values is the use of preprocessor definitions. They have the following form:
// #define identifier replacement
#define pi 3.1415

}