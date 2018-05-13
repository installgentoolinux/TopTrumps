//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.

//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.

//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/license>.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main() {
int wins;
int losses;
int cards;
int CompCards;
cards = 10;
CompCards = 10;
while ((cards > 1) && (CompCards > 1)){
  // Defining player values with a random number seeded from Unix Time + a number (1001 to 1004)
srand( (int) time(0) + 1001);
int PlayerIntelligence = ( rand () % 100 + 1 ) ;
srand( (int) time(0) + 1002 );
int PlayerStrength = ( rand () % 100 + 1 ) ;
srand( (int) time(0) + 1003 );
int PlayerSpeed = ( rand () % 100 + 1 ) ;
srand( (int) time(0) + 1004 );
int PlayerPopularity = ( rand () % 100 + 1 ) ;


 // Showing the player their values
std::cout << "---------------" << "\n" << "(1) Your Intelligence: " << PlayerIntelligence << "\n";
std::cout << "(2) Your Strength: " << PlayerStrength << "\n";
std::cout << "(3) Your Speed: " << PlayerSpeed << "\n";
std::cout << "(4) Your Popularity: " << PlayerPopularity << "\n";
std::cout << "---------------" << "\n";

 // Asking the player for their choice of values
int PlayerChoice;
std::cout << "Please enter a the number (1 to 4) correlating to the card's trait you wish to put up against the computer's cards" << "\n" << "(EG: enter 2 for Strength) ";
std::cin >> PlayerChoice;
if ( PlayerChoice > 4) {
  std::cout << "\n" << "Please enter a number lower than 4 that correlates to the number next to the trait you wish to select" << "\n";
  std::cin >> PlayerChoice;
};
std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
// Setting the Player's choice as the value they chose
int PlayerValue;
if ( PlayerChoice == 1 ) {PlayerValue = PlayerIntelligence;};
if ( PlayerChoice == 2 ) {PlayerValue = PlayerStrength;};
if ( PlayerChoice == 3 ) {PlayerValue = PlayerSpeed;};
if ( PlayerChoice == 4 ) {PlayerValue = PlayerPopularity;};
std::cout << "The value you chose: " << PlayerValue << "\n"; 

// Comparing the values of the player and computer
srand( (int) time(0) + 1005 );
int CompValue = ( rand () % 100 + 1 ) ;
std::cout << "The Computer's value: " << CompValue << "\n";

if ( PlayerValue > CompValue ) {
  std::cout << "Hooray, You won! Now it's the computer's turn to choose!" << "\n";
  sleep(2);
  wins = (wins + 1);
  cards = (cards + 1);
  CompCards = (CompCards - 1);
};
if ( PlayerValue < CompValue ){
  std:: cout << "Sorry, but the computer's value is higher and you lost. Better luck next time!" << "\n" << "---------------" << "\n";
  sleep(2);
  losses = (losses + 1);
  cards = (cards - 1);
  CompCards = (CompCards + 1);
};
sleep(5);
std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << "---------------";
std::cout << "\n" << "Scores: " << "\n" << "You: " << wins << " Computer: " << losses << "\n" ;
std::cout << "\n" << "Your cards left: " << cards  << "\n" << "Computer's cards left: " << CompCards << "\n" << "\n";
sleep(5);
std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  // Redefining player values with a random number seeded from Unix Time + a number (1001 to 1004)
srand( (int) time(0) + 1001);
PlayerIntelligence = ( rand () % 100 + 1 ) ;
srand( (int) time(0) + 1002 );
PlayerStrength = ( rand () % 100 + 1 ) ;
srand( (int) time(0) + 1003 );
PlayerSpeed = ( rand () % 100 + 1 ) ;
srand( (int) time(0) + 1004 );
PlayerPopularity = ( rand () % 100 + 1 ) ;


 // Showing the player their new values
std::cout << "---------------" << "\n" << "Your Intelligence: " << PlayerIntelligence << "\n";
std::cout << "Your Strength: " << PlayerStrength << "\n";
std::cout << "Your Speed: " << PlayerSpeed << "\n";
std::cout << "Your Popularity: " << PlayerPopularity << "\n";
std::cout << "\n";
sleep(5);

// Getting the computer to "choose it's value"
srand( (int) time(0) + 1006 );
CompValue = ( rand () % 100 + 1 ) ;
srand( (int) time(0) + 1007 );
int CompTrait = ( rand () % 4 + 1 ) ;

// Showing the player the computer's "chosen" value
if (CompTrait == 1) {
  std::cout << "Computer's chosen trait: Intelligence" << "\n";
  PlayerChoice = 1;
};
if (CompTrait == 2) {
  std::cout << "Computer's chosen trait: Strength" << "\n" ;
  PlayerChoice = 2;
};
if (CompTrait == 3) {
  std::cout << "Computer's chosen trait: Speed" << "\n" ;
  PlayerChoice = 3;
};
if (CompTrait == 4) {
  std::cout << "Computer's chosen trait: Popularity" << "\n" ;
  PlayerChoice = 4;
};

std::cout << "The Computer's value: " << CompValue << "\n";
sleep(1);
if ( PlayerChoice == 1 ) {PlayerValue = PlayerIntelligence;};
if ( PlayerChoice == 2 ) {PlayerValue = PlayerStrength;};
if ( PlayerChoice == 3 ) {PlayerValue = PlayerSpeed;};
if ( PlayerChoice == 4 ) {PlayerValue = PlayerPopularity;};

// Telling the player id they won or lost
if ( PlayerValue > CompValue ) {
  std::cout << "Hooray, You won! Now it's your turn to choose!" << "\n";
  wins = (wins + 1);
  cards = (cards + 1);
  CompCards = (CompCards - 1);
};
if ( PlayerValue < CompValue ){
  std:: cout << "Sorry, but the computer's value is higher and you lost. Better luck next time!" << "\n";
  losses = (losses + 1);
  cards = (cards - 1);
  CompCards = (CompCards + 1);
};
sleep (5);
std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
// Scoreboard
std::cout << "\n" << "Scores: " << "\n" << "You: " << wins << " Computer: " << losses << "\n" ;
std::cout << "\n" << "Your cards left: " << cards  << "\n" << "Computer's cards left: " << CompCards << "\n" << "\n";
sleep(5);
std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  
}
// Telling the player if they won or lost
if (cards == 0) {std::cout << "Sorry, you ran out of cards and so you lost";};
if (CompCards == 0) {std::cout << "Well done! The computer has no cards left so you won!";};
return 0 ;
}
