#include "strFuncs.h"
#include "tddFuncs.h"

int main() {

  string one = "Abcba";
  string two = "Racecar";
  string three = "ss";
  string four = "sd";
  string five = "abcdefghijkl";
  string six = "sasdSSSSMSnos";



  assertEquals(true, isPalindrome(one));
  assertEquals(true, isPalindrome(two));
  assertEquals(true, isPalindrome(three));
  assertEquals(false, isPalindrome(four));
  assertEquals(false, isPalindrome(five));
  assertEquals(false, isPalindrome(six));

  return 0;
}

