#ifndef CXSAtlas_HPP
#define CXSAtlas_HPP

#include <iostream>
#include <string>
#include "CPT_bootloader.h"

namespace stdio{
    
    //print funcs
    template<typename... Args>
    void print(Args... args) {
        (std::cout << ... << args);
    }

    template<typename... Args>
    void println(Args... args) {
        (std::cout << ... << args) << "\n";
    }
    
    template<typename... Args>
    void flprintln(Args... args) {
        (std::cout << ... << args) << "\n" << std::flush;
    }
    
    //input func
    template<typename... Args>
    void input(Args&... args) {
        (std::cin >> ... >> args);    
    }

}

#endif //CXSAtlas_HPP
