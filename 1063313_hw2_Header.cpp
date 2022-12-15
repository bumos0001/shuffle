#include<iostream>
#include<string>
using namespace std;
#include"1063313_hw2_header.h"
#include<cstdlib>
#include<ctime>

Card::Card(int facenumber, int suitnumber)
{
	face = facenumber;
	suit = suitnumber;
}
void Card::print()
{
	cout << temp2[face] << "_" << temp1[suit] ;
}
void DeckOfCard::SetCard()				//put each card into the deck
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 13; j++)
		{
			Card a(j, i);
			a.face = j;
			a.suit = i;
			Deck.push_back(a);
		}
}

void DeckOfCard::Shuffle()		//random change next card and a cards behind it
{
	for (int i = currentCard; i < 52; i++)
	{
		int x = rand() % 52 + currentCard;
		Card temp = Deck[i];
		Deck[i] = Deck[x];
		Deck[x] = temp;
	}
}