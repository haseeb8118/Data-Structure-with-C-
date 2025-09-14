#include <iostream>
using namespace std;

int main(){
    char character;
    cout << "Enter any character: ";
    cin >> character;

    cout << (character >= 'a' && character <= 'z'? "lowercase": "uppercase");
}