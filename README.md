# C++ Console Utiltiy Library
A minimal C++ console utility library similar to the C# console's syntax

## How to use

### Include
```cpp
#include <Console.hpp>
using namespace BenScr;
```
### Functionality
```cpp
Console::WriteLine("Hello World!");
std::string input = Console::ReadLine();
char key = Console::ReadKey();
Console::Clear();
Console::SetTitle("Console Title");
Console::SetCursorPosition(0, 0);
```
