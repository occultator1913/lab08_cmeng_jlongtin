#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result
 */

string removepunct(string input){
	string phrase = input;
	int c = 0;
	for(int i = 0; i<input.length();i++){
		if(isalpha(input[i])){
			phrase[c]= input[i];
			c = c++;	
		}
	}
	return phrase.substr(0,c);
}

string makelower(string phrase){
	for(int i = 0; i<phrase.length();i++){
		phrase[i] = tolower(phrase[i]);
	}
	return phrase;
}
string sort(string s){
	int lowest;
	string out;
	for(int i = 0; i<s.length();i++){
		for(int j = 0;j<s.length();j++){
			if(s[j]<s[lowest] || j == 0){
				lowest = j;
			}
		}
		out[i] = s[lowest];
		s[lowest] = z
	}
	return out;
}
		
bool isAnagram(string s1, string s2){
	
	
}
/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You may provide a recursive OR non-recursive solution*/
bool isPalindrome(const string s1){
    return true;
}

bool isPalindromeHelper(const char *s1, int len);
/* Precondition: s1 is a valid C-string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You MUST provide a recursive implementation and are recommended to write a helper function where the recursion actually takes place*/
bool isPalindrome(const char *s1){
    return true;
}

/* Precondition: s1 is a valid C-string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You MUST provide an iterative implementation */
bool isPalindromeIterative(const char *s1){
    return true;
}



