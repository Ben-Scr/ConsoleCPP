# C++ Console Utiltiy Library
A minimal C++ console utility library similar to the C# console's syntax

## How to use

- Including
```cpp
#include <Console.hpp>
using namespace BenScr;
```

- Functionalities
```cpp
Console::WriteLine("Hello World!");
std::string input = Console::ReadLine();
char key = Console::ReadKey();
Console::Clear();
Console::SetTitle("Console Title");
Console::SetCursorPosition(0, 0);
```
