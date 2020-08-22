// Author: Luis Gutierrez
// GitHub:
// August 22 2020
// CSIS 113A
// Activity 2
#include <iostream>

using std::cout;
using std::endl;

int main() {
  cout << "======================================================" << endl;
  cout << "How many atoms of O (atomic Oxygen) are in 2.1 grams? " << endl;
  cout << "======================================================" << "\n" << endl;

  cout << "Atomic mass of Oxygen      : " << 15.99 << "       g/ mol" << endl;

  cout << "Grams of Oxygen            :  " << 2.1 << "        g" << endl;

  cout << "Avogadro's Number          :  " << 6.022e23 << "  atoms/ mol" << "\n" << endl;

  cout << "   Grams of Oxygen   " << endl;

  cout << "--------------------- x Avogadro's Number" << endl;

  cout << "Atomic Mass of Oxygen" << "\n" << endl;

  cout << 2.1 << "g Oxygen = " << (2.1 / 15.99) * 6.022e23 << " Atoms" << endl;

  cout << "======================================================" << "\n" << endl;

}