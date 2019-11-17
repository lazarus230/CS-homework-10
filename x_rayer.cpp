//Programmer: Brandon Robinson                 //Date: 11/2/19
//Section: d                                   //File: x_rayer.cpp
//Instructor: Master COLE                      //username: bcrp56
//Purpose: The purpose of this program is to make a hospital room that a
//         patient can go into and in that hospital room the patients private
//         member variables can be changed to either help them or harm them

#include "x_rayer.h"
#include "patient.h"
#include <iostream>
using namespace std;

/////////////set stuff to numbers and stuff////////////////////////////////////
X_rayer::X_rayer ()
{
  m_num_uses = 0;
  m_cost_per_use = 550.0;
}
////////////////////////charge patient/////////////////////////////////////////
void  X_rayer::charge_patient (Patient& p)
{
  p.pay_out (m_cost_per_use);
  return;
}
////////////////////////sometimes we hurt you//////////////////////////////////
void X_rayer::apply_changes (Patient& p)
{
  p.get_hurt();
  return;
}
////////////////////////overload the insertino operator stat///////////////////
ostream& operator << (ostream& os, X_rayer& the_machine)
{
  os << "The cost per use is: $" << the_machine.m_cost_per_use << endl
     << "The number of uses is: " << the_machine.m_num_uses << endl;
  return os;
}
