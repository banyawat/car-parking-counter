#include <iostream>
#include <string>
using namespace std;

const int MAX_PARKING_LOTS = 500;

class Counter {
  int availableLots;
  public:
    Counter();
    void increase ();
    void decrease ();
    string getAvailableLots ();
};

Counter::Counter (void) {
  availableLots = MAX_PARKING_LOTS;
}

void Counter::increase () {
  if(availableLots >= MAX_PARKING_LOTS)
    return ;
  availableLots++;
}

void Counter::decrease () {
  if(availableLots == 0)
    return ;
  availableLots--;
}

string Counter::getAvailableLots () {
  string result = "";
  if (availableLots == MAX_PARKING_LOTS)
    result = "FULL";
  else 
    result = to_string(availableLots);
  
  return result;
}