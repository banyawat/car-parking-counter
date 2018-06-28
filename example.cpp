#include "./counter.cpp"

int main () {
  Counter counter;
  counter.decrease();
  cout << "Result: " << counter.getAvailableLots() << "\n";
  return 0;
}