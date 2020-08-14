// Author: David C Hernandez, MSW, MBA
// GitHub: https://github.com/dhernandez-msjc/csis_113a_output_and_literals.git
// August 08, 2020
// CSIS 113A
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // this statement displays 'Hello' to the screen. Notice the use of std:: before
    // the cout statement, this is because it is from the standard library. We can
    // clean this up by bringing the cout command into the global scope, by the
    // using statement you see on line 7.
    std::cout << "Hello\n";

    // since we added line 7, we can use cout directly, this is what it means to bring
    // the command into the global scope. To clean the code up, we also want to move the
    // "\n", which moves the cursor to the next line, to a chained stream. Notice the
    // use of the << (insertion operator), which streams the information towards the cout
    // command, which is directing to display the information as if we are pulling a string
    // through in the <---- direction.
    cout << "Hello world!" << "\n";

    // we can also utilize the stream command endl (stands for end line)
    // clean code is going to be a consistent concept throughout this course.
    cout << "Saying hello again!" << endl;
}