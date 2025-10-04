//
//
#include <iostream>
#include "apex_code.h"

using namespace std;

void quiz(stringstream& cin, stringstream& cout)
{
string userLine;
   getline(cin, userLine);
    
    int spaceIndex = userLine.find(" ");
    
    string firstWord = userLine.substr(0, spaceIndex);
    
    string rest = userLine.substr(spaceIndex + 1);
    
    rest.at(0) = toupper(rest.at(0));

    firstWord.at(0) = tolower(firstWord.at(0));
     
    string result = rest + " " + firstWord + "?";

    cout << result << endl;
}


