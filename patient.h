//Programmer: Brandon Robinson                 //Date: 11/2/19
//Section: d                                   //File: patient.h
//Instructor: Master COLE                      //username: bcrp56
//Purpose: The purpose of this program is to make a hospital room that a
//         patient can go into and in that hospital room the patients private
//         member variables can be changed to either help them or harm them 

#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
using namespace std;

class Patient
{
  private:
    float m_money;
    bool m_is_alive;
    int m_hp;
    string m_name;
    //Purpose: the kill () func will update the patients m_is_alive bool to 
    //         false if the patients hp drops to 0
    //Pre: hp must be given some value
    //Post: the m_is_alive bool will be changed to false if hp goes to 0
    void kill ();

  public:
    //default constructor
    //money, health, and name
    //Purpose: Patient() is an overloaded default constructor and sets the
    //         patient's health, money, and name to random values
    //Pre: none
    //Post: the patient's private variable are given values
    Patient();
    //Purpose: the pay_out() func is used to change the users amount of money
    //         whenever it is passed the price of something
    //Pre: the price should be passed in
    //Post: the patients money is lowered by the amount of the cost
    float pay_out (const float price);
    //Purpose: the modify_hp() func is for changing the patients hp if it
    //         healed or hurt (just hurt for now) it also calls the kill()
    //         func in case the health drops to 0 or below
    //Pre: a value for damage should be passed in
    //Post: the patient's health is changed based on damage and the kill() func
    //      is called
    int modify_hp (const int damage);
    //Purpose: the get_hurt() func is for the 10% chance of the x_rayer hurting
    //         if unlucky the modify_hp() func is called and passed half the 
    //         patients current health
    //Pre: this func should only be used when the X_rayer is used
    //Post: 10% of the time the patient will lose half their hp
    void get_hurt ();
    //Purpose: the purpose of operator << () is to overloade the insertion
    //         operator so that cout<< patient will give the information
    //         contained in the private variables
    //Pre: << should be defined
    //Post: the insertion operator "<<" will now be able to be used for the 
    //      patient class, printing their hp, health, alive status, and name
    friend ostream& operator << (ostream& os, const Patient& p);
};
#endif
