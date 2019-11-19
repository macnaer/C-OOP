#include <iostream>
#include <string>
#include "SPlayer.h"

using namespace std;

class Player {
private:
	string name;
	string country;
	string team;
	string position;
	unsigned int goals;
	int salary;
	int price;
	void UpdatePrice() {
		price += 1000;
	}

	void UpdateGoals(int newGoal) {
		goals += newGoal;
	}

public:

	Player() {
		cout << "\nDefault constructor rinning....\n" << endl;
	}

	Player(string pName, string pCountry, string pTeam, string pPosition, unsigned int pGoals, int pSalary, int pPrice) {
		cout << "\nModefied constructor rinning....\n" << endl;
		name = pName;
		country = pCountry;
		team = pTeam;
		position = pPosition;
		goals = pGoals;
		salary = pSalary;
		price = pPrice;
	}
	void ShowPlayer() {
		cout << "=======================Show Player====================" << endl;
		cout << "Name: " << name << "\nCountry: " << country << "\nTeam: " << team << "\nPosition: "
			<< position << "\nGoals: " << goals << "\nSalary: " << salary << "\nPrice: " << price << endl;
		cout << "=======================Show Player====================" << endl;
	}

	int GetGoals() {
		return goals;
	}

	void SetGoals(int newGoal) {
		if (newGoal >= 1) {
			UpdateGoals(newGoal);
			UpdatePrice();
		}
		else {
			cout << "R.T.F.M." << endl;
		}
		
	}
};


int main() {

	Player ronaldo("Cristiano Ronaldo", "Portugal", "Juventus", "Forward", 600, 20000000, 100000000);
	ronaldo.ShowPlayer();

	int goals = ronaldo.GetGoals();
	cout << "Ronaldo goals = > " << goals << endl;
	ronaldo.SetGoals(1);
	ronaldo.ShowPlayer();
	ronaldo.SetGoals(1);
	ronaldo.SetGoals(1);
	ronaldo.SetGoals(1);
	ronaldo.SetGoals(1);
	ronaldo.SetGoals(1);
	ronaldo.SetGoals(13);
	ronaldo.ShowPlayer();
	

	/*Player yarmolenko("Andrii Yarmolenko", "Ukraine", "West Ham", "Forward", 150, 5000000, 20000000);
	yarmolenko.ShowPlayer();

	Player maradonna;
	maradonna.ShowPlayer();*/


	SPlayer test;



	system("pause");
	return 0;
}