/*
@file Translator.cpp
@Brief: This is the implementation file for the Translator.cpp class.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#include "Translator.h"
#include "Model.h" // Since I create an object of the Model class, I have to include the Model header file here
#include <iostream>

Translator::Translator(){

}

Translator::~Translator(){

}

/*
translateEnglishWord()
Takes a string containing a single English word as input and returns a string
representing the Tutnese translation by using Model.translateStringCharacter
and Model.translateDoubleCharacter.
@param string word
@return string
*/
string Translator::translateEnglishWord(string word){
  // here check each letter of word
  Model model; // this is object of Model class to use translate functions
  // either call model's translateStringCharacter or translateDoubleCharacter function
  string translatedWord = "";

  // UPDATE: Adapted from initial commit to account for consecutive punctuation
  // that resulted in words that were empty strings which caused an out of
  // range error when checking for size
  if(word == "")
  {
    return "";
  }

  for(int i = 0; i < word.length() - 1; i++){
    if(word.at(i) == word.at(i + 1)){
      translatedWord += model.translateDoubleCharacter(word.at(i));
      i++;
    }
    else{
      translatedWord += model.translateStringCharacter(word.at(i));
    }
  }

  // UPDATE: Adapted from initial commit to account for single-letter words
  // and avoid out of range errors
  if(word.length() > 1){
    if(word.at(word.length() - 1) != word.at(word.length() - 2)){
      translatedWord += model.translateStringCharacter(word.at(word.length() - 1));
    }
  }
  else{
    translatedWord += model.translateStringCharacter(word[0]);
  }

  return translatedWord;
}

/*
translareEnglishSentence()
Takes a single string containing an English sentence as input and returns a
string representing the Tutnese translation by using translateEnglishWord().
@param string sent
@return string
*/
string Translator::translateEnglishSentence(string sent){
  // here extract each word in a sentence and call translateEnglishWord on it
  // to do so, you can use the following algorithm:
      // word = ""
      // for each character c in sentence
          // if c is a word delimiter (" ", . , ! etc.)
                // word is found
          // otherwise, word += c // c is just a letter, keep going
  string translatedSentence = "";
  string word = "";
  for(int i = 0; i < sent.length(); i++){
    // UPDATE: Adapted from initial commit to include endline additional
    // punctuation
    if(sent.at(i) == ' ' || sent.at(i) == '.' || sent.at(i) == ',' ||
        sent.at(i) == '!' || sent.at(i) == '?' || sent.at(i) == ';' ||
        sent.at(i) == ':' || sent.at(i) == '\n'){
      translatedSentence += translateEnglishWord(word) + sent.at(i);
      word = "";
    }
    else{
      word += sent.at(i);
    }
  }
  return translatedSentence;
}
