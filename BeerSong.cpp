// BeerSong.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

void Ninety_Nine_Bottles_of_Beer() {
	
	for (int n = 99; n > 2; n--) {
		cout << n << " bottles of beer on the wall," << n << " bottles of beer\n";
		cout << "ya take one down, pass it around, " << n - 1 << " bottles of beer on the wall\n ";
	}
	cout << "2 bottles of beer on the wall, 2 bottles of beer \n" << "ya take one down, pass it around, 1 more bottle of beer on the wall\n";
	cout << " 1 bottle of beer on the wall, 1 bottle of beer \n" << "ya take one down, pass it around, no more bottles of beer on the wall!";


}
//Code is good
int main()
{
	Ninety_Nine_Bottles_of_Beer();

	return 0;
}
