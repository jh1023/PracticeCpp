#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i = 0; i < myString.length(); i++) {
        if(myString[i] >= 'a' && myString[i] < 'l') myString[i] = 'l';
    }
    return myString;
}