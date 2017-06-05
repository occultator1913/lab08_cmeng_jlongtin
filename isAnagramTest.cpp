#include "strFuncs.h"
#include "tddFuncs.h"

int main() {

  string mice_1 = "Rats and Mice";
  string mice_2 = "in cat's dream";
  string plus_1 = "Eleven plus two";
  string plus_2 = "Twelve plus one";
  string dorm_1 = "DORMITORY";
  string dorm_2 = "dirty room";

  

  ASSERT_EQUALS( true, isAnagram(mice_1,mice_2));
  ASSERT_EQUALS( true, isAnagram(plus_1,plus_2));
  ASSERT_EQUALS( true, isAnagram(dorm_1,dorm_2));
  ASSERT_EQUALS( false, isAnagram(mice_1,plus_1));
  ASSERT_EQUALS( false, isAnagram(dorm_1,plus_2));
  ASSERT_EQUALS( false, isAnagram(mice_2,dorm_2));
  
  return 0;
}
