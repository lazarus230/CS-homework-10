//Programmer: Brandon Robinson                 //Date: 11/2/19
//Section: d                                   //File: hospital_room.cpp
//Instructor: Master COLE                      //username: bcrp56
//Purpose: The purpose of this program is to make a hospital room that a
//         patient can go into and in that hospital room the patients private
//         member variables can be changed to either help them or harm them

#include <iostream>
#include "hospital_room.h"
#include "patient.h"
using namespace std;

//////////////////////////Hospital Room////////////////////////////////////////
Hospital_room::Hospital_room()
{
  m_gin_level = 10.0;
}

//////////////////////////Admit////////////////////////////////////////////////
void Hospital_room::admit (Patient& p)
{
  the_machine.charge_patient (p);
  the_machine.apply_changes (p);
  return;
}
//////////////////////////OVERLOAD THE OPERATOR////////////////////////////////
ostream& operator << (ostream& os, const Hospital_room& room_one)
{
  os << "There is " << room_one.m_gin_level <<" ozs of gin left."<<endl;
  return os;
}

void Hospital_room::give_info ()
{
  cout << the_machine;
  return;
}
