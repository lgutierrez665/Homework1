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
  cout << "\n" << endl;

  // an example of an integer literal
  cout << 3 << " + " << 7 << " = " << 3 + 7 << "\n" << endl;

  // using the toascii command to convert a character literal to an integer
  // value
  cout << "ascii value of the letter 'A': " << toascii('A') << endl;
  cout << "ascii value of the letter 'a': " << toascii('a') << endl;

  // we can utilize 0b to denote the start of a binary literal
  cout << "\n" << endl;
  cout << "          2020: " << "0111 1110 0100" << endl;
  cout << "0111 1110 0100: " << 0b0111'1110'0100 << endl;
}