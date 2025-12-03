# Console Utiltiy Library
A idiomatic C++ console utility library similar to the C# console

## Example

```cpp
#include <Console.hpp>
using namespace BenScr;
```

```cpp
Console::WriteLine("Hello World!");
std::string input = Console::ReadLine();
char key = Console::ReadKey();
Console::Clear();
```
