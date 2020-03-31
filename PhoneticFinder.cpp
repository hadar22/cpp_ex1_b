#include "PhoneticFinder.hpp"

#include <iostream>
#include <stdexcept>
#include <string> 
#include<bits/stdc++.h> 

using namespace std;

string phonetic::find(string text,string s) {
 
    std::string delim = " ";

    auto start = 0U;
    auto end = text.find(delim);
  
    while (end != std::string::npos )
    {
        std::string h = text.substr(start, end - start) ;
       
       if (phonetic::equals(h,s)) {
         return h;
         break;
       }
 
        start = end + delim.length();
        end = text.find(delim, start+1);
        
    }
    std::string h = text.substr(start, end - start) ;
    
    if (phonetic::equals(h,s)) {
      
         return h;
        
       }
    else{
      throw exception();
    }
       
    return 0;

}
 bool phonetic::equals(string h,string s){
    
      std::string temp_h =h;
      std::string temp_s = s;
     transform(temp_h.begin(), temp_h.end(), temp_h.begin(), ::tolower); 
     transform(temp_s.begin(), temp_s.end(), temp_s.begin(), ::tolower);
      //cout<<temp_h<<endl;
     // cout<<temp_s<<endl;
       

      if (temp_h.size()!=temp_s.size()){
        
        return false;
      }
      else{ 
       for (int i=0; i<s.size();i++){
       // cout <<"po"<<endl;
        if(temp_s[i]==temp_h[i]) continue;
        else{
          switch(temp_s[i]){
            case 'v':
              if(temp_h[i]!='w') return false;
              break;
            case 'w':
              if(temp_h[i]!='v') return false;
              break; 
            case 'b':
              if(temp_h[i] != 'p' && temp_h[i] != 'f') return false;
              break;
            case 'p':
              if(temp_h[i] != 'b' && temp_h[i] != 'f') return false;
              break;
            case 'f':
              if (temp_h[i] != 'b' && temp_h[i] != 'p') return false;
              break;
            case 'g':
              if(temp_h[i]!='j') return false; 
              break;
            case 'j':
              if(temp_h[i]!='g') return false;
              break; 
            case 'c':
              if(temp_h[i]!='k' && temp_h[i]!='q') return false;
              break; 
            case 'k':
              if(temp_h[i]!='c' && temp_h[i]!='q') return false;
              break;
            case 'q':
              if(temp_h[i]!='c' && temp_h[i]!='k') return false; 
              break; 
            case 's':
              if(temp_h[i]!='z') return false;
              break;
            case 'z':
              if(temp_h[i]!='s') return false;
              break; 
            case 'd':
              if(temp_h[i]!='t') return false;
              break; 
            case 't':
              if(temp_h[i]!='d') return false;
              break; 
            case 'o':
              if(temp_h[i]!='u') return false;
              break; 
            case 'u':
              if(temp_h[i]!='o') return false; 
              break;
            case 'i':
              if(temp_h[i]!='y') return false; 
              break;
            case 'y':
              if(temp_h[i]!='i') return false; 
              break; 
            default:
            return false;
            
          }
        }
       }
      }
  return true;
}


