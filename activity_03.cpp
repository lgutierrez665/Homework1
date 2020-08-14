#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // in the last exercise, we utilized a string literal as our message.
    // string literals display literally what is present, although, some characters are
    // read differently, such as ", so we use the escape character before displaying "\"
    cout << "Say \"hello\" to my little friend." << endl;

    // notice that spacing within a string literal can allow us to create the appearance of
    // formatting.
    cout << "***************" << endl;
    cout << "*             *" << endl;
    cout << "*             *" << endl;
    cout << "*             *" << endl;
    cout << "*             *" << endl;
    cout << "***************" << endl;

    // lets add some spacing between this picture and the next set of outputs
    cout << "\n\n" << endl;

    // display an example of a receipt with only literals.
    cout << "===================================" << endl;
    cout << "                       Aug 08, 2020" << endl;
    cout << "===================================" << endl;
    cout << "Customer: Barry Allen" << endl;
    cout << "Large pizzas: " << 2 << endl;
    cout << "\n";
    cout << "                   ----------------" << endl;
    cout << "                   $          " << 22.47 << endl;
    cout << "===================================" << endl;
}