#include<iostream>
#include<vector>
using namespace std;
#include"1063313_hw2_header.h"
#include<cstdlib>
#include<ctime>
int main()
{
	cout << "How many Player? (1,2, or 4)" << endl;		//	ask how many people play
	int num;
	cin >> num;
	string player[4];									//string array store player name
	for (int i = 0; i < num; i++)
	{
		cout << "Player " << i + 1 << " Name?" << endl;
		cin >> player[i];
	}
	srand(time(0));
	DeckOfCard	mydeck;										//create a deck
	mydeck.SetCard();										//initialization
	mydeck.Shuffle();										//Shuffle
	cout << "Total " << num << " Player" << endl;
	int number = 52 / num;								//Calculate how many cards a person has
	for (int i = 0; i < num; i++)
	{
		cout << endl;
		cout << "Player " << i + 1 << " (" << player[i] << "):" << endl;
		for (mydeck.currentCard; mydeck.currentCard < mydeck.Deck.size(); )		//print everyone cards
		{
			{
				mydeck.Deck[mydeck.currentCard].print();
				mydeck.currentCard++;									//Next Card
				if (mydeck.currentCard % number == 0)					//if people have 52/num cards ,break
					break;
				cout << " ,";
			}
			
		}
	}
}
