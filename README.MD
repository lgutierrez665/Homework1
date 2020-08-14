# Output and Literals
We begin our discussion of 

### The entry point of a C++ program
Every C++ program must have a single entry point. That entry point is defined by the main function.
We will learn 
```c++
int main() {

}
```

### Displaying messages to the screen
```c++
#include <iostream>

int main() {
  std::cout << "My message to the world." << "\n";
}
```


```c++
#include <iostream>
using std::cout;

int main() {
  cout << "My message to the world." << "\n";
}
```


### Displaying different types of characters
