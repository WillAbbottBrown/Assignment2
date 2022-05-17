#pragma once
#include <string>
using namespace std;

class AnagramModel
{
public:
	string Word = "";
	string Anagram = "";
	int LetterCount() {
		return Word.length();
	};
	AnagramModel() {

	}
	
	AnagramModel(string word, string anagram) {
		Word = word;
		Anagram = anagram;

	};
};

