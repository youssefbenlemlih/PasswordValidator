#include "functions.h"


bool hasCorrectLength(string word) {
    return  (5<=word.length() && word.length()<=20);
}
bool hasNumber(string word){
    for (char c: word){
        if (isNumber(c)){
            return true;
        }
    }
    return false;
}
/// checks if password contains at least  special character (&,+,-,*,$,%,...)
bool hasSpecialCharacter(string word){
    for (char c: word){
        if (isSpecialCharacter(c)){
            return true;
        }
    }
    return false;
}
/// checks if password does'nt contain any space ' '
bool hasNoSpace(string word){
    for (char c: word){
        if (c==' ')  {
            return false;
        }
    }
    return true;
}

bool isValid(string word){
    return hasCorrectLength(word) &&
        hasNoSpace(word) &&
        hasNumber(word)&&
        hasSpecialCharacter(word);
}

bool isNumber (char character){
    return 48<=character && character<=57;
}

bool isSpecialCharacter(char character){
    /*The special characters have values in the following ranges:
 * 33-48
 * 57-64
 * 91-96
 * 123-126
 */
    return (33<=character && character<=48) ||
            (57<=character && character<=96) ||
            (91<=character && character<=96) ||
            (123<=character && character<=126);

}