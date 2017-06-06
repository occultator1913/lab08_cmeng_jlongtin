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

int main() {
    string a = "RADIANT Damn,, hot";

    cout<<"a: " << a<<endl;
    string a2 =removePunct(a);
    cout<<"a2: "<<a2<<endl;
    string a3 = makeLower(a2);
    cout <<"a3: "<<a3 <<endl;
    string a4 =sort(a3);
    cout<<"a4: " << a4<<endl;
}

bool isAnagram(string s1, string s2){
    string s1_rmpunct=removePunct(s1);
    string s2_rmpunct=removePunct(s2);
    string s1_sort = sort(s1_rmpunct);
    string s2_sort = sort(s2_rmpunct);
    string s1_final = makeLower(s1_sort);
    string s2_final = makeLower(s2_sort);

    int str1= s1.length(); 
    int str2= s2.length();
    
    if (str1!=str2)  return false;
    else { 
        for(int i=0; i<str1; i++){
            if(s1_final[i]!=s2_final[i])
                return false;
           }     
            return true;
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
    if(s1 == 0)
        return false;
    if(s1[0] == 0)
        return true;
    int len = strlen(s1);
    if s1[0] == s1[len-1];
        result = isPalidromeHelper(s1+1,len-2);
}


bool isPalindromeHelper(const char *s1, int len){
    if (len <= 1)
        return true;
    if(s1[0]==s1[len-1])
        return isPalidromeHelper(s1+1,len-2);
    else
        return false;
}

string sort(string s){
    int lowest=0;
    string out;
    int length_str = s.length();
    for(int i = 0; i<length_str;i++){
        for(int j = 0 ; j <(length_str-1);j++){
            int temp2 = (int)(s[j]);
            int temp1 = (int)(s[lowest]);
            cout<<temp2<< " "<<temp1<<endl;
            if(temp2 < temp1 || j == 0)
                lowest = j;
        }
        
        out[i] = s[lowest];
        s.erase(s[lowest],1);
        lowest = 0;
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




