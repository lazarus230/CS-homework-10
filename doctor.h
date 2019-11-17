///////////header..////////////////////////////////////////////////////////////
///////////////////////////////do the header brandon///////////////////////////
///////////d o t h e f u c k i n g h e a d e r b r a n d o n///////////////////

#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
using namespace std;

class Doctor
{
  private:
    string m_name;
    short m_gin_consumed;
    float m_money;

  public:
    //Purpose: the Doctor() func will overwrite the defualt constructor to set
    //         the amount of gin consumed by the doc and how much money he has
    //         both zero for this
    //Pre: none
    //Post: the m_gin_consumed and m_money variables will be set to zero
    Doctor(const string name);
    //Purpose: the puke() func will tell the user that the doc vomitted and it
    //         will lower the amount of gin in the doc
    //Pre: m_gin_consumed must be over 25ozs
    //Post: a vomitting message will be output to the screen and m_gin_consumed
    //      will be set back to zero
    void puke();
    ///////////////////getters and setters are dumb as fuck so they dont belong    
};
