#include <iostream>

using std::cout;
using std::endl;

int main() {
  // in the last exercise, we utilized a string literal as our message.
  // string literals display literally what is present, although, some
  // characters are read differently, such as ", so we use the escape character
  // before displaying "\"
  cout << "Say \"hello\" to my little friend." << endl;

  // notice that spacing within a string literal can allow us to create the
  // appearance of formatting.
  cout << "***************" << endl;
  cout << "*             *" << endl;
  cout << "*             *" << endl;
  cout << "*             *" << endl;
  cout << "*             *" << endl;
  cout << "***************" << endl;

  // lets add some spacing between this picture and the next set of outputs
  cout << endl;

  // using the toascii command to convert a character literal to an integer
  // value. Notice that a single character is made using single quotes ' '
  // The basic subunit in communication is that of ascii values.
  cout << "ascii value of the letter 'A': " << toascii('A') << endl;
  cout << "ascii value of the letter 'a': " << toascii('a') << "\n" << endl;

  // an example of an integer literal and addition operation
  cout << 3 << " + " << 7 << " = " << 3 + 7 << endl;
  cout << 3 << " x " << 7 << " = " << 3*7 << endl;

  // notice something strange about integer division?
  // we can use the unicode symbol for the division sign if we'd like
  cout << 3 << " / " << 7 << " = " << 3/7 << endl;
  cout << 3 << " \u00F7 " << 7 << " = " << 3/7 << endl;

  // for this reason we have modulus (determines the remainder
  cout << 3 << " mod " << 7 << " = " << 3%7 << "\n" << endl;

  // another important literal is that of a double (floating point number), which is one
  // that has a decimal in it.
  cout << "Total Cost: $ " << 22.37 << endl;
  cout << "Atomic Mass of Oxygen: " << 15.999 << " U" << endl;
  cout << "Atomic Mass of Oxygen: " << 15.999 << " g/mol" << endl;
  cout << "Avogadro's Number    : " << 6.022e23 << " particles per mole" << "\n" << endl;

  // we can utilize 0b to denote the start of a binary literal
  cout << "          2020: " << "0111 1110 0100" << endl;
  cout << "0111 1110 0100: " << 0b0111'1110'0100 << endl;
}