#include <string>
using namespace std;

/// checks if the given word has a length between 5 and 10 characters
bool hasCorrectLength(string word);

/// checks if the given word contains at least one number
bool hasNumber(string word);

/// checks if the given word contains at least one special character (&,+,-,*,$,%,...)
bool hasSpecialCharacter(string word);

/// checks if the given word doe'st contain any space ' '
bool hasNoSpace(string word);

///checks if the given word fulfills all the rules
bool isValid(string word);

///checks if character is a Number
bool isNumber (char character);

///checks if a character is a Special Character
bool isSpecialCharacter(char character);