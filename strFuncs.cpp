#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;

string sort(string s);
string makeLower(string phrase);
string removePunct(string input);
bool isPalindromeHelper(const char *s1, int len);


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result
 */


bool isAnagram(string s1, string s2){
    string s1_rmpunct=removePunct(s1);
    string s2_rmpunct=removePunct(s2);
    string s1_lower = makeLower(s1_rmpunct);
    string s2_lower = makeLower(s2_rmpunct);
    string s1_sorted = sort(s1_lower);
    string s2_sorted = sort(s2_lower);


    if(s1_sorted==s2_sorted){
	return true;
   }else{
	return false;
  }
}



/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You may provide a recursive OR non-recursive solution*/
bool isPalindrome(const string s1){
    int strlen = s1.length();
    if(strlen < 0) 
    for(int i = 0; i<strlen;i++)
    return true;
}


/* Precondition: s1 is a valid C-string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You MUST provide a recursive implementation and are recommended to write a helper function where the recursion actually takes place*/
bool isPalindrome(const char *s1){
    return true;
}

/* Precondition: s1 is a valid C-string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You MUST provide yan iterative implementation */
bool isPalindromeIterative(const char *s1){
    string s(s1);
    string s1_rmpunct=removePunct(s);
    string s1_lower = makeLower(s1_rmpunct);
    for(int i = 0; i<(s.length()/2);i++){
	if(s1[i]!=s1[s.length()-i]) return false;
    }
    
    return true;
    
}


bool isPalindromeHelper(const char *s1, int len){
    if (len <= 1)
        return true;
    if(s1[0]==s1[len-1])
        return isPalindromeHelper(s1+1,len-2);
    else
        return false;
}

string sort(string s){
    int lowest=0;
    string out = s;
    int length_str = s.length();
    for(int i = 0; i<length_str;i++){
	lowest = 0;
        for(int j = 1 ; j <s.length();j++){
            if (s[j]<s[lowest]){
            	lowest = j;
        }
        }
        out[i] = s[lowest];
        s.erase(lowest,1);
    }
    return out;
}


string removePunct(string input){
     string phrase = input;
     int c = 0;
     int length_str = input.length();
     for(int i = 0; i<length_str;i++){
         if(isalpha(input[i])){
                phrase[c]= input[i];
                     c++;
         }
        
     }
return phrase.substr(0,c);
}

string makeLower(string phrase){
      int length_str = phrase.length();
      for(int i = 0; i<length_str;i++){
            phrase[i] = tolower(phrase[i]);
      }
return phrase;
}




