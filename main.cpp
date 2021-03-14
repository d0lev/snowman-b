/**
 * Demo program for snowman exercise.
 * 
 * Author: Dolev Abuhazira
 * Since : 2021-02
 */

#include "snowman.hpp"

#include <iostream>
#include <stdexcept>
#include "snowman.hpp"
#include <array>
#include <math.h>

using namespace std;
using namespace ariel;
int const length = 8;

int main() {
	string choose;
	int input;
    array<int,length> initial = {0};
	int index = 0;
	cout <<
	"Do You Wanna Build a Snow-Man?" << "\n"
	"Please enter : Yes or No" << "\n"
	<< endl;

	cin >> choose;
	if (choose.compare("Yes")) {
		cout << "OK! .. bye." << endl;
		exit(1);
	}

	cout << "\n" <<
	"Okay ! Let's build a snowman " << "\n"
    "Our snowman is made up of eight different body parts" << "\n"
	"each part having four different options to choose from." << "\n"
	"Please enter an eight-digit numnber such that each digit -" << "\n"
	"representing a different part of the snowman's body \n" << "\n"
	"Please make sure that each digit does not fall below 1 or rise above 4." << "\n"
	"The body parts are :" << "\n"
	<< endl;

	cout << "\n"
	"Head : 1) _===_ "  << "\n\n"
	"     : 2)  ___  "  << "\n" 
    "          ..... "  << "\n"
	"     : 3)   _   "  << "\n"
	"           /_\\ "  << "\n"
	"     : 4)  ___  "  << "\n"
	"          (_*_) "  << "\n"
	"Please enter a number :" ;

	cin >> input;
	initial.at(index ++) = input;
	
	cout << "\n"
	"Nose : 1)  ,  2)  .  3)  _  4)   " << "\n"
    "Please enter a number :" ;
	cin >> input;
	initial.at(index ++) = input;

    cout << "\n"
	"Eyes : The right eye option the same as the left eye" << "\n"
	"1)  .  2)  o  3)  O  4)  -  " << "\n"
	"Please enter a number :" ;
	cin >> input;
	initial.at(index ++) = input;
	cout << "Please enter a number :" ;
	cin >> input;
	initial.at(index ++) = input;

	cout << "\n"
	"Left arm  : 1)  <  2)  \\  3)  /  4)" << "\n"
	"Please enter a number :";
	cin >> input;
	initial.at(index ++) = input;

	cout << "\n"
	"Right arm : 1)  >  2)  /   3)  \\ 4)" << "\n"
	"Please enter a number :";
	cin >> input;
	initial.at(index ++) = input;


	cout << "\n"
	"Torso  : 1)  :  2)  ] [  3)  > <  4)" << "\n"
	"Please enter a number :" ;
	cin >> input;
	initial.at(index ++) = input;
	
	cout << "\n"
	"Base   : 1)  :  2)  \" \"  3)  ___  4)" << "\n"
	"Please enter a number :";
	cin >> input;
	initial.at(index ++) = input;

	int getInput = 0;
	for (int i = 0 , j = length - 1 ; i < length; i++ , j--) {
		getInput += initial[i] * pow(10,j);
	}
	cout << "\n" << "This is Your Snow-Man: " << endl;
	cout << snowman(getInput) << endl;

}