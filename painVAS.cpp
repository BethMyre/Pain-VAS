/**********************************************************************
 * Author:  Beth Myre
 * Description: This program uses a Visual Analog Scale (VAS) to collect 
 * information about a patient's pain levels, and then graphs the patient's
 * pain over the course of the preceding day.
**********************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void printVAS();
int getPainLevel(int);

int main () {

  cout << endl << "        Welcome to your new eDiary." << endl <<
  "        The eDiary will be used throughout this study" << endl <<
  "        to help you visualize the progress you are" << endl <<
  "        making in pain management." << endl << endl; 

//Create an array to record the patient's pain levels from 6:00 - 22:00.
  int hour[17];

//Initialize each element of the array to 0.
  for (int t=0; t<17; t++) {
    hour[t] = 0;
  }

//Record the patient's pain levels at each hour.
  for (int t=0; t<17; t++) {
    hour[t] = getPainLevel(t);
    for (int i = 0; i<16; i++) {
      cout << endl;
    }
  }

//Thank patient and display pain levels.
  cout << "        Thank you for completing this eDiary!" << endl <<
    "        Your pain levels for today are shown below." << endl <<
    "        Throughout this study, please be sure to speak with your doctor" <<
endl <<
    "        about any patterns that you notice in the level of pain that" << endl <<
    "        you experience throughout the day." << endl << endl;
 
  cout << "        " << "\U0001F62D" << " |";
  for (int t = 0; t<17; t++) {
    if (hour[t] == 5) {
      cout << ". ";
    }
    else {
      cout << "  ";
    }
  }
  cout << endl;

  cout << "        " << "\U0001F641" << " |";
  for (int t = 0; t<17; t++) {
    if (hour[t] == 4) {
      cout << ". ";
    }
    else {
      cout << "  ";
    }
  }
  cout << endl;
 
  cout << "        " << "\U0001F610" << " |";
  for (int t = 0; t<17; t++) {
    if (hour[t] == 3) {
      cout << ". ";
    }
    else {
      cout << "  ";
    }
  }
  cout << endl;

  cout << "        " << "\U0001F642" << " |";
  for (int t = 0; t<17; t++) {
    if (hour[t] == 2) {
      cout << ". ";
    }
    else {
      cout << "  ";
    }
  }
  cout << endl;

  cout << "        " << "\U0001F600" << " |";
  for (int t = 0; t<17; t++) {
    if (hour[t] == 1) {
      cout << ". ";
    }
    else {
      cout << "  ";
    }
  }
  cout << endl << "           ___________________________________" << endl <<
    "           6:00       12:00       18:00" << endl;

  cout << endl << endl << endl;

  return 0;
}


/************************************************************
* This function displays the VAS.
************************************************************/

void printVAS() {

  string sleeping = "\U0001F4A4",
    noPain = "\U0001F600",
    mildPain = "\U0001F642",
    moderatePain = "\U0001F610",
    severePain = "\U0001F641",
    worstImaginablePain = "\U0001F62D";

  cout << "   0         1         2         3         4         5" << endl <<
    "   " << sleeping <<
    "        " << noPain <<
    "        " << mildPain <<
    "        " << moderatePain <<
    "        " << severePain <<
    "        " << worstImaginablePain <<
     "   " << endl <<
    "             No        Mild      Moderate  Severe    Worst" << endl <<
    "   Sleeping  Pain      Pain      Pain      Pain      Imaginable" << endl <<
    "                                                     Pain" << endl << endl; 
  return;
}


/*************************************************************
* This function asks about the patient's pain levels at each 
* hour from 6:00 to 22:00.
*************************************************************/
int getPainLevel(int time) {
  int tempPainLevel;
  int painLevel;

  cout << endl;

  printVAS();

  cout << "        What was your pain level at " << (time + 6) << ":00?" << endl <<
    "        Enter a number 0 - 5 based on the scale above." << endl;

  for (int i = 0; i<8; i++) {
    cout << endl;
    }

  cin >> tempPainLevel;

  while (!cin) {
    cout << "        Please enter a number between 0 and 5." << endl;
    cin.clear();
    cin.ignore();
    cin >> tempPainLevel;
  }

  while (!(tempPainLevel >=0 && tempPainLevel <=5)) {
    cout << "        Please enter a number between 0 and 5." << endl;
    cin >> tempPainLevel;
  }

  painLevel = tempPainLevel;

  return painLevel;
}


















