#pragma once
#include <iostream>
#include <string>

namespace  BenScr {
    class Console
    {
    public:
        template<typename... Args>
        static void WriteLine(Args&&... args) {
            (std::cout << ... << args);
            std::cout << '\n';
		}
        template<typename... Args>
        static void Write(Args&&... args) {
            (std::cout << ... << args);
        }

        static std::string ReadLine();

        static char ReadKey();
        static void Clear();
    };
}