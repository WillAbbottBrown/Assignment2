#pragma once

#include <string>
#include <cstdlib>
#include <ctime>
#include "AnagramModel.h"

using namespace std;

class GameManager
{
public:
	GameManager() {

	};

	AnagramModel Anagrams[60] = { 
		
		//Five Letter words
		AnagramModel("ABOUT", "TOUBA"),
		AnagramModel("BROWN", "WORBN"),
		AnagramModel("FORCE", "CORFE"),
		AnagramModel("IDEAL", "EALDI"),
		AnagramModel("STORY", "TOSRY"),
		AnagramModel("THICK", "KICTH"),

		//Six Letter words
		AnagramModel("NUMBER", "BUMNER"),
		AnagramModel("SYSTEM", "MESTYS"),
		AnagramModel("PEOPLE", "LEOPPE"),
		AnagramModel("FOLLOW", "WOLFLO"),
		AnagramModel("SHOULD", "HOLDSU"),
		AnagramModel("LITTLE", "LETLTI"),

		//Seven Letter words
		AnagramModel("ABANDON", "NANDOBA"),
		AnagramModel("BUBBLES", "BLESBUB"),
		AnagramModel("CABBAGE", "ABGCEBA"),
		AnagramModel("FABRICS", "CFIARBS"),
		AnagramModel("HABITAT", "BATIHAT"),
		AnagramModel("LABELED", "EBLELDA"),
		
		//Eight Letter words
		AnagramModel("ACADEMIC", "MIEDCACA"),
		AnagramModel("ANALYSIS", "AYSALNIS"),
		AnagramModel("DISORDER", "SRODEDRI"),
		AnagramModel("DOUBTFUL", "UUODLFTB"),
		AnagramModel("POLITICS", "SLTICOIP"),
		AnagramModel("WOODLAND", "DODWLOAN"),
		
		//Nine Letter words
		AnagramModel("ABANDONED", "AONABEDDN"),
		AnagramModel("ACCLAIMED", "CLICDMEAA"),
		AnagramModel("YOUNGSTER", "TOERYUSGN"),
		AnagramModel("VIBRATION", "BAIVOIRNT"),
		AnagramModel("UNHEALTHY", "LEHUNYHAT"),
		AnagramModel("TROUBLING", "BLUIGNORT"),
		
		//Ten Letter words
		AnagramModel("ABSOLUTELY", "ATUBLOLESY"),
		AnagramModel("ABUNDANTLY", "UDNBTALYNA"),
		AnagramModel("BANDOLIERS", "RIBODLSAEN"),
		AnagramModel("BANKRUPTCY", "RPNYUKTACB"),
		AnagramModel("VOCABULARY", "RYCBOAULAV"),
		AnagramModel("VACCINATED", "DNETACVACI"),
		
		//Eleven Letter words
		AnagramModel("ACCOMPANIED", "COIAMPEANDC"),
		AnagramModel("BATTLEFIELD", "LIETBLDTFEA"),
		AnagramModel("CALCULATION", "LIACCNTUAOL"),
		AnagramModel("WHEREABOUTS", "BEWAESHRUTO"),
		AnagramModel("WINDSURFING", "DFNUNIGISWR"),
		AnagramModel("TREACHEROUS", "RSAEETUHCRO"),
		
		//Twelve Letter words
		AnagramModel("ACCELERATION", "CCNTLEAIREAO"),
		AnagramModel("BIBLIOGRAPHY", "IAGBIPHBORYL"),
		AnagramModel("CHEERFULNESS", "HLUECSSREFEN"),
		AnagramModel("CONTAMINATED", "DCTOMIENNAAT"),
		AnagramModel("WALLPAPERING", "LGPAAWLIPNRE"),
		AnagramModel("UNATTRACTIVE", "CAUATETTVIRN"),
		
		//Thirteen Letter words
		AnagramModel("ATMOSPHERICAL", "SLPTMAAECIRHO"),
		AnagramModel("BRAINSTORMING", "TIRARGOINSNMB"),
		AnagramModel("DISCONTINUOUS", "UTINOOISSCDUN"),
		AnagramModel("DOCUMENTARIES", "DTIMSCAOERUNE"),
		AnagramModel("VISUALISATION", "ALAVUIOSSINIT"),
		AnagramModel("SIGNIFICANTLY", "SACIILFNITNYG"),
		
		//Fourteen Letter words
		AnagramModel("DECONSTRUCTION", "TNSTOOCEUNCIRD"),
		AnagramModel("DECOMMISSIONED", "EINOSDMOSMEICD"),
		AnagramModel("UNFAITHFULNESS", "TLASNUIHUFEFNS"),
		AnagramModel("PROFESSIONALLY", "LRIYALSSNPOOEF"),
		AnagramModel("INTRACTABILITY", "LIAAITYBTTRCNI"),
		AnagramModel("IMPRESSIONABLE", "MSABLPEIRENOSI"),
	};

	//Get the Answer
	string GetAnswer(int NumLetters, int pos) {

		string Answer;

		int itemfound = 0;
		for (int i = 0; i < 60; i++) {

			AnagramModel model = Anagrams[i];
			if (model.LetterCount() == NumLetters) {
				if (itemfound == pos) {
					Answer = model.Word;
					return Answer;
				}
				else {
					itemfound++;
				}
			}
		}	
		return Answer;
	}

	//Get the Scrambled Question
	string GetQuestion(int NumLetters, int pos) {
		
		string Question;
		int itemfound = 0;
		for (int i = 0; i < 60; i++) {

			AnagramModel model = Anagrams[i];
			if (model.LetterCount() == NumLetters) {
				if (itemfound == pos) {
					Question = model.Anagram;
					return Question;
				}
				else {
					itemfound++;
				}
			}
		}
		return Question;
	}
};