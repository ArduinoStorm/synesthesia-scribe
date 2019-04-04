/*
*   meterAnalysis.cpp
*   Tries to find the meter of a poem by locating rhyming words and checking how often the occur per line to estimate meter
*   By Jim Kemp, 2019, Licensed under the MIT License
*/

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> words;

// takes the word specified in wordNumber and returns what percent of the word list it rhymes with
float findRhyme(int word_number) {

  std::string word_checked_against = words[word_number];
  std::string word_checked_against_lastletter = word_checked_against[word_checked_against.length - 1];
  std::string word_checked_against_2ndtolastletter = word_checked_against[word_checked_against.length - 2];

  int numberOfRhymes = 0;

  for(int i = 0; i < words.size(); ++i){

    if(i) == word_number){    // skips checking for rhyme if the word we are checking is the word we are checking against
      continue;
    }

    std::string word_being_checked = words[i];
    std::string word_being_checked_lastletter = word_being_checked[word_being_checked.length() - 1];
    std::string word_being_checked_2ndtolastletter = word_being_checked[word_being_checked.length() - 2];

    if(word_being_checked_lastletter == word_checked_against_lastletter &&  word_being_checked_2ndtolastletter == string word_checked_against_2ndtolastletter) {
      ++NumberOfRhymes;
    }
  }
  return numberOfRhymes / words.size();
}

// takes the word specified in wordNumber and returns what percent of the word list it is an alliteration with
float findAlliteration(int word_number) {

  std::string word_checked_against = words[word_number];
  std::string word_checked_against_lastletter = word_checked_against[word_checked_against.length() - 1];
  std::string word_checked_against_2ndtolastletter = word_checked_against[word_checked_against.length() - 2];

  int numberOfAlliterations = 0;

  for(int i = 0; i < words.size(); ++i){

    if(i) == word_number){    // skips checking for rhyme if the word we are checking is the word we are checking against
      continue;
    }

    std::string word_being_checked = words[i];
    std::string word_being_checked_lastletter = word_being_checked[0];
    std::string word_being_checked_2ndtolastletter = word_being_checked[1];

    if(word_being_checked_lastletter == word_checked_against_lastletter &&  word_being_checked_2ndtolastletter == string word_checked_against_2ndtolastletter) {
      ++numberOfAlliterations;
    }
  }
  return numberOfAlliterations / words.size();
}

int main() {

  std::cout << "Hello and Welcome to meterAnalysis" << std::endl;

  // ------BEGIN TEST ------
  std::string str = "wassup";
  std::cout << str[str.length() - 1] << " and " << str[str.length() -2] << std::endl;
  // ------ END TEST -------

  while(true){   // loop to take values from user until the user entes "0" to terminate

    std::string input_value = "NULL";
    std::cout << "enter a word, enter 0 to exit: ";
    std::cin >>  input_value;

    if(input_value == "0") {

      break;

    }else{

      words.push_back(input_value);

    }
  }
  return 0;
}
