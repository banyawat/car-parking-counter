#include "./counter.cpp"
using namespace std;

int main () {
  cout << "\n#### Carparking System Example #### \n";
  Counter counter;

  counter.park();
  cout << "PARK! \n";
  cout << "Available lots: " << counter.getAvailableLots() << "\n";

  counter.park();
  cout << "PARK! \n";
  cout << "Available lots: " << counter.getAvailableLots() << "\n\n";

  counter.unpark();
  cout << "UNPARK! \n";
  cout << "Available lots: " << counter.getAvailableLots() << "\n";

  counter.park();
  cout << "PARK! \n";
  cout << "Available lots: " << counter.getAvailableLots() << "\n\n";

  counter.resetAvailableLots();
  cout << "RESET \n";
  cout << "Available lots: " << counter.getAvailableLots() << "\n\n";

  counter.setAvailableLots(2);
  cout << "SET TO 2 \n";
  cout << "Available lots: " << counter.getAvailableLots() << "\n\n";
  
  counter.park();
  cout << "PARK! \n";
  cout << "Available lots: " << counter.getAvailableLots() << "\n";

  counter.park();
  cout << "PARK! \n";
  cout << "Available lots: " << counter.getAvailableLots() << "\n";

  cout << "FINAL Available lots: " << counter.getAvailableLots() << "\n";
  return 0;
}