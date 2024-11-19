// Name: Thomas Richards 
// Lab: Project1
// Due Date: 11/21/24
// Filename: main.cpp
// Description: This program calculates the number of boxes cookies needed for 1 container. If the required amount of boxes are not reached, the program will discard and show leftover cookies.


#include <iostream>
using namespace std;
int main () {
  //input the variables 
  int cookiesTotal, boxes, leftoverCookies, containers, leftoverBoxes;

  //first off, get the user to input the total amount of cookies in the boxes.
  cout << "Enter the total number of cookies: ";
  cin >> cookiesTotal;

  // calculations for the output - 75 boxes and 24 cookies
  boxes = cookiesTotal / 24;
  leftoverCookies = cookiesTotal % 24;

  //75 boxes
  leftoverBoxes = boxes % 75;
  containers = boxes / 75;

  //boxes
  if (boxes > 0)
  cout << "The number of cookie boxes needed to hold the cookies: " << boxes << endl;

  //boxes left
  if (leftoverBoxes > 0)
    cout << "leftover boxes: " << leftoverBoxes << endl;

  //containers
  if (containers > 0) 
    cout << "The number of containers needed to store the cookie boxes: " << containers << endl;

  //cookie 
  if (leftoverCookies > 0)
    cout << "Leftover cookies: " << leftoverCookies << endl;

  return 0;
}
