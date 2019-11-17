//Programmer: Brandon Robinson                 //Date: 11/2/19
//Section: d                                   //File: hospital_room.h
//Instructor: Master COLE                      //username: bcrp56
//Purpose: The purpose of this program is to make a hospital room that a
//         patient can go into and in that hospital room the patients private
//         member variables can be changed to either help them or harm them

#ifndef HOSPITAL_ROOM_H
#define HOSPITAL_ROOM_H
#include <iostream>
#include "x_rayer.h"
using namespace std;

class Hospital_room
{
  private:
    X_rayer the_machine;
    float m_gin_level;

  public: 
    //Prupose: the Hospital_roon() func overloads the default constructor and 
    //         sets the m_gin_levels to 10 ozs
    //Pre: none
    //Post: the the m_gin_levels is set to 10 ozs
    Hospital_room();
    //Purpose: the admit() func puts the patient in the hospital room and for
    //         right now, just x_rayers them and calls charge_patient and 
    //         apply_changes
    //Pre: a patient should be put into the hospital_room
    //Post: the patient is charged the m_cost_per_use and their health is 
    //      halved 10% of the time 
    void admit (Patient& p);
    //Purpose: the operator << () func overloads the insertion operator 
    //         so that you can do cout<<Hospital_room and get the amount of gin
    //Pre: the operator << should be previously defined
    //Post: the m_gin_levels is ouput to the screen
    friend ostream& operator << (ostream& os, const Hospital_room& room_one);
    //Purpose: the give_info() funct will output the status of the machine
    //Pre: none
    //Post: the m_cost_per_use a m_num_uses will be output to the screen
    void give_info ();
};

#endif
