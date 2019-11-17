//asd;lfkjad;ffja;jfadffajdff;adffadjff;adjff


#include "patient.h"
#include "x_rayer.h"
#include "hospital_room.h"
#include <iostream>
using namespace std;

int main()
{
  srand(time(NULL));
  Patient e, f, g;
  Hospital_room room_one;
  cout <<"Patient 1 before: " << endl << e << endl;
  cout <<"Patient 2 before: " << endl << f << endl;
  cout <<"Patient 3 before: " << endl << g << endl;
  cout << room_one;
  room_one.give_info();
  for(int i = 0; i < 5; i++)
  {
    room_one.admit (e);
    room_one.admit (f);
    room_one.admit (g);
  }  
  cout <<"Patient 1 after: " << endl << e << endl;
  cout <<"Patient 2 after: " << endl << f << endl;
  cout <<"Patient 3 after: " << endl << g << endl;
  cout << room_one;
  room_one.give_info ();
  return 0;
}

