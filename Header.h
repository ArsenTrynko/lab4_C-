#pragma once
#include "pch.h"
#include <iostream>
#include "string"
using namespace std;

class card {
private:
	string card_id;
	string type, currency_type;

public:
	string color;
	int lastn;

	//card()

	
	card() {

		card_id = "0" ;
		type = "0";
		currency_type = "0";
		color = "0";
		lastn = 0;
		svv = "0";
		name_bank = "0";
		
	}
	void enter() {
		cout << "Enter card ID =";
		cin >> card_id;
		cout << "Enter type of card =";
		cin >> type;
		cout << "Enter currency type =";
		cin >> currency_type;
		cout << "Enter color of card =";
		cin >> color;
		cout << "Enter last Four digits =";
		cin >> lastn;
		cout << "Enter svv code=";
		cin >> svv;
		cout << "Enter name of bank =";
		cin >> name_bank;



	}
	void show() {
		

		cout << endl << endl << "your card ID is =" << card_id << endl;

		cout << "your card type is =" << type << endl;

		cout << "your type currency is =" << currency_type << endl;

		cout << "your card color is =" << color << endl;

		cout << "your last Four digits are =" << lastn << endl;

		cout << "your svv code is =" << svv << endl;

		cout << "your bank name is =" << name_bank << endl<<endl;
	}
	~card() {

	}
protected:
	string svv, name_bank;
};
