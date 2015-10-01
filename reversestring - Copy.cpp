#include <iostream>
#include <stdio.h>
using namespace std;

string LongestWord(string sen) { 
  int len = 0, i = 0, max = 0, counter = 0;
  int start = 0, end = 0;
  int word_length = 0;
  string max_string;
  len = sen.length();
  cout<<len<<endl;
  while(counter < len){
    if(sen[i] != ' ') {
	  counter++;	  
	}
	else {
	  word_length = start - counter;
	  if(max < word_length){
        max = word_length;
		cout<<"start"<<start<<"word"<<word_length;
		max_string = sen.substr(start, word_length);
      }
      start = counter;
      word_length = 0;	  
	}
    counter++;
  }
  cout << "Max string" << max_string <<endl;

  // code goes here   
  return max_string; 
            
}


int main() { 
  
  // keep this function call here
  string str;
  cout << "Enter a string" << endl;
  getline(cin, str);
  cout << LongestWord(str);
  getchar();
  return 0;
    
}


/*
string FirstReverse(string str) { 
  str = string(str.rbegin(), str.rend()); 
  return str;         
}
*/