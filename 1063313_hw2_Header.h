#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Card			//define a card 
{
public:
	Card(int, int);		//two integer represent suit and face 
	void print();
	int suit;
	int face;
private:
	string temp1[4] = { "Clubs", "Spade", "Heart", "Diamond" };				//Save suit with string array
	string temp2[13] = { "1","2","3","4","5","6","7","8","9","10","Jack","Queen","King" };//Save face with string array
};

class DeckOfCard
{
public:
	int currentCard=0;			//the next card
	vector<Card> Deck;			//Build a deck
	void SetCard();				//initialization the Deck from 1 to 52
	void Shuffle();				//shuffle
};
