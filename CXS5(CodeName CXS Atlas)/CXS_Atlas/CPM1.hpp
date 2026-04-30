#ifndef CPM1_HPP
#define CPM1_HPP

#include "CPT_bootloader.h"
#include <iostream>
#include <string>


#include "errhandl.hpp"
using namespace errhandl;

namespace stdmath{

    template<typename... Args>
    void add(Args... args) {
        std::cout << ( ... + args ) << "\n";
    }

    template<typename... Args>
    void sub(Args... args) {
        std::cout << ( ... - args ) << "\n";
    }

    template<typename... Args>
    void multi(Args... args) {
        std::cout << ( ... * args ) << "\n";
    }


    template<typename T, typename... Args>
    void divs(T first, Args... args) {
        bool has_zero = ((args == 0) || ...);
        if (has_zero) {
            std::cout << diverr;
            return;
        }

        double result = first;
        ((result /= args), ...);
        std::cout << result << "\n";
    }

}

#endif //CPM+1_HPP
