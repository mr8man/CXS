#ifndef CPM1_HPP
#define CPM1_HPP

#include <iostream>
#include "errhandl.hpp"

using std::cout;

namespace stdmath{
    
    template<typename T1, typename T2>
    void add(T1 a, T2 b) {
        cout << a + b << "\n";
    }

    template<typename T1, typename T2>
    void sub(T1 a, T2 b) {
        cout << a - b << "\n";
    }

    template<typename T1, typename T2>
    void multi(T1 a, T2 b) {
            cout << a * b << "\n";
    }

    template<typename T1, typename T2>
    void divs(T1 a, T2 b) {
        if (b == 0) {
            cout << diverr << "\n";
        } else {
            double result = static_cast<double>(a) / b;
            cout << result;
        }
    }
    
}

#endif //CPM+1_HPP