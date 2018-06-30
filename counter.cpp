#include <iostream>
#include <string>
using namespace std;

const int DEFAULT_MAX_PARKING_LOTS = 500;

class Counter {
  int availableLots;
  int maxParkingLots;
  public:
    Counter (int configMaxLots) {
      if(configMaxLots > 0) {
        maxParkingLots = configMaxLots;
        availableLots = maxParkingLots;
      }
      maxParkingLots = DEFAULT_MAX_PARKING_LOTS;
    }

    Counter () {
        maxParkingLots = DEFAULT_MAX_PARKING_LOTS;
        availableLots = DEFAULT_MAX_PARKING_LOTS;
    }

    void park () {
      if(availableLots == 0)
        return ;
      availableLots--;
    }

    void unpark () {
      if(availableLots >= maxParkingLots)
        return ;
      availableLots++;
    }

    void resetAvailableLots () {
      availableLots = maxParkingLots;
    }

    void setAvailableLots (int currentLots) {
      if(currentLots >= 0 && currentLots <= maxParkingLots) {
        availableLots = currentLots;
      }
    }

    string getAvailableLots () {
      string result = "";
      if (availableLots == 0)
        result = "FULL";
      else 
        result = to_string(availableLots);
      
      return result;
    }
};