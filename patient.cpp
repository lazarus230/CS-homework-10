//Programmer: Brandon Robinson                 //Date: 11/2/19
//Section: d                                   //File: patient.cpp
//Instructor: Master COLE                      //username: bcrp56
//Purpose: The purpose of this program is to make a hospital room that a
//         patient can go into and in that hospital room the patients private
//         member variables can be changed to either help them or harm them

#include "patient.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

/////////////////////lets set some values//////////////////////////////////////
Patient::Patient ()
{
  const int min_hp = 0;
  const int max_hp = 100;
  const int  min_cash = 0;
  const int  max_cash = 400000;
  m_hp = min_hp + rand()% ((max_hp + 1) - min_hp);
  m_money = (min_cash + rand()% ((max_cash + 1) - min_cash))/100.0;
  ifstream fin;
  int lines = 0;
  fin.open ("names.dat");
  while (fin >> m_name)
  {
    lines ++;
  }
  int r_num = rand()% lines;
  fin.close();
  fin.open("names.dat");
  for(int i = 0; i < r_num; i ++)
  {
    fin >> m_name;
  }
  kill();
}
/////////////////////stuff costs things////////////////////////////////////////
float Patient::pay_out (const float price)
{
  m_money = m_money - price;/////////this probably doesn't work
  return m_money;
}
/////////////////////Sometimes x rays be hurting///////////////////////////////
int Patient::modify_hp (const int damage)
{
  m_hp = m_hp - (damage);
  if (m_hp <= 0)
    kill();
  return m_hp;
}
/////////////////////get_hurt//////////////////////////////////////////////////
void Patient::get_hurt ()
{
  int big_damage = rand()%10;
  if (big_damage == 1)
  {
     m_hp = (m_hp - (m_hp/2));
     modify_hp (m_hp/2);
     cout<<"X-rays are very safe, more or less, sometimes....shh"<<endl;
  }
  return;
}
/////////////////////oops you died/////////////////////////////////////////////
void Patient::kill ()
{
  if (m_hp == 0)
  {
    m_is_alive = false;
  }
  else if (m_hp > 0)
  {
    m_is_alive = true;
  }
  return;
}
/////////////////////overload the operator quick///////////////////////////////
ostream& operator << (ostream& os, const Patient& p)
{
  os << p.m_name << " has: $" << p.m_money << endl
     << p.m_name << " has: " << p.m_hp << "hp" << endl; 
  if (p.m_is_alive == true)
    os << p.m_name << " is still alive." << endl;
  else if (p.m_is_alive == false) 
    os << p.m_name << " has sadly passed away." << endl;
  return os;
}    
