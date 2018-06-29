#include "./counter.cpp"
using namespace std;

int main () {
  cout << "\n" << "#### Carparking System Example ####" << "\n";
  Counter counter;

  counter.unpark();
  cout << "PARK!" << "\n";

  cout << "Available lots: " << counter.getAvailableLots() << "\n";

  counter.park();
  cout << "UNPARK!" << "\n";

  cout << "Available lots: " << counter.getAvailableLots() << "\n";

  counter.park();
  cout << "UNPARK!" << "\n";

  counter.unpark();
  cout << "UNPARK!" << "\n";
  cout << "Available lots: " << counter.getAvailableLots() << "\n\n";

  cout << "FINAL Available lots: " << counter.getAvailableLots() << "\n";
  return 0;
}