#include "solution.h"

map<char,char> Solution::FindMapping(string s1, string s2){

  map<char, char> mapping;
  if(s1.length() != s2.length()){
    return mapping; // return empty map if they have different length
  }

  if(s1.length() == 0 || s2.length() == 0){
    return mapping;
  }

  for(int i = 0; i< s1.length(); i++){
    for(int j=i+1 ; j<s2.length(); j++){

      if(s1[j]==s1[i]){

        if(s2[j]!=s2[i]){
          map<char,char> EmptyMapping;
          //  no mapping in this case, return empty mapping. End the function
          return EmptyMapping;  
        }
      }
    }
    // if passed all checks, add the mapping to the map.
    mapping[s1[i]] = s2[i];  
  }

  // all mappings are found and all of them are checked.
  return mapping;
}
