/*
 * ________________________________________________________________________________
 * |  File: map.cpp
 * |  Project: patient
 * |  File Created: Monday, 25th November 2024 02:19 pm
 * |  Author: Daniel Haddington [haddingtondaniel5@icloud.com]
 */
#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;


int main()
{
	map<string, string> myDictionary;
	myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));
	myDictionary.insert(pair<string, string>("apple", "der Apfel"));
	myDictionary.insert(pair<string, string>("banana", "die Banane"));
	myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfelsine"));


	myDictionary["apple"] = "Der Apfel";
	// myDictionary.clear();
	myDictionary.erase("orange");
	cout << myDictionary.size() << endl;
	for (auto pair : myDictionary)
	{
		cout << pair.first << " - " << pair.second << endl;
	}



	map<string, list<string>> pokedex;

	list<string> pikachuAttacks { "thunder shock", "tailwhip", "quick attack"};
	list<string> charmanderAttacks { "flame thrower", "scary face"};
	list<string> chikoritaAttacks { "razor leaf", "poison powder"};

	pokedex.insert(pair<string, list<string>>("Pikachu", pikachuAttacks));
	pokedex.insert(pair<string, list<string>>("Charmander", charmanderAttacks));
	pokedex.insert(pair<string, list<string>>("Chikorita", chikoritaAttacks));

	for (auto pair : pokedex)
	{
		cout << pair.first << " - ";
		for (auto attack : pair.second)
		{
			cout << attack << ", ";
		}
		cout << endl;
	}


	return (0);
}