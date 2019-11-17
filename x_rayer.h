//Programmer: Brandon Robinson                 //Date: 11/2/19
//Section: d                                   //File: x_rayer.h
//Instructor: Master COLE                      //username: bcrp56
//Purpose: The purpose of this program is to make a hospital room that a
//         patient can go into and in that hospital room the patients private
//         member variables can be changed to either help them or harm them

#ifndef X_RAYER_H
#define X_RAYER_H
#include <iostream>
#include "patient.h"
class X_rayer
{
  private: 
    float m_cost_per_use;
    short m_num_uses;  

  public: 
    //Purpose: the X_rayer() func overloads the defualt constructor to set the
    //         m_cost_per_use and m_num_uses variables to some value
    //Pre: none
    //Post: the m_cost_per_use and m_num_uses are given values
    X_rayer ();
    //Purpose: the charge_patient() func is used each time the x_rayer is used 
    //         is calls the patient's pay_out function passing the cost_per_use
    //Pre: x_rayer must be used on a ptient
    //Post: the pay_out function is called for the patient and their money is
    //      updated
    void charge_patient (Patient& p);
    //Purpose: the apply_changes() func will call the patient's get_hurt() func
    //Pre: the x_rayer must be used on the patient
    //Post: the patient will be hurt by half their health 10% of the time
    void apply_changes (Patient& p);
    //Purpose: the purpose of the operator << () func is to overload the 
    //         insertion operator so that cout << x_rayer can be used
    //Pre: the << operator should be previously defined
    //Post: the << operator will now be able to output the cost_per_use and the
    //      num_uses of the x_rayer
    friend ostream& operator << (ostream& os, X_rayer& the_mahine);
};

#endif
