// Name: Thomas Richards 
// Lab: Project1
// Due Date: 11/21/24
// Filename: main.cpp
// Description: This program will ... 

#include <iostream>
using namespace std;
int main () {
  //input the variables 
  int cookiesTotal, boxes, leftoverCookies, containers, leftoverBoxes;

  //first off, get the user to input the total amount of cookies in the boxes.
  cout << "Enter the total number of cookies";
  cin << cookiesTotal;

  // calculations for the output - 75 boxes and 24 cookies
  boxes = cookiesTotal / 24;
  leftoverCookies = cookiesTotal % 24;

  //75 boxes
  leftoverBoxes = boxes % 75;
  containers = boxes / 75;

  //boxes
  if (containers > 0)
  cout << "leftover boxes = " << leftoverBoxes << endl;

  //containers
  if (containers > 0) 
    cout << "Leftover containers = " << leftoverContainers << endl;

  //cookie 
  if (leftoverCookies > 0)
    cout << "Leftover cookies = " << leftoverCookies << endl;

  return 0;
}
