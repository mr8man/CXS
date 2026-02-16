#ifndef CXS11_HPP
#define CXS11_HPP

#include <iostream>
#include "Cpt_t.hpp"
using namespace std;

namespace cp{
    template<typename T>
    void print(T value) {
        cout << value;
    }

    template<typename T>
    void println(T value) {
        cout <<value <<"\n";
    }

    template<typename T>
    void printc(T value) {
        cout <<value <<"\n";
    }

    template<typename T>
    void printcln(T value) {
        cout <<value <<"\n";
    }

    template<typename T>
    void out(T value) {
        cout <<value <<"\n";
    }

    template<typename T>
    void outln(T value) {
        cout <<value <<"\n";
    }

    template<typename T>
    void flprint(T value) {
        cout << value << flush;
    }

    template<typename T>
    void flprintln(T value) {
        cout << value <<"\n" << flush ;
    }

    template<typename T>
    void flout(T value) {
        cout << value << flush;
    }

    template<typename T>
    void floutln(T value) {
        cout << value <<"\n" << flush ;
    }

    template<typename T>
    void flprintc(T value) {
        cout << value << flush;
    }

    template<typename T>
    void flprintcln(T value) {
        cout << value <<"\n" << flush ;
    }



    template<typename T>
    void input(T& value) {
        cin >> value;
    }

    template<typename T>
    void inputc(T& value) {
        cin >> value;
    }

    template<typename T>
    void put(T& value) {
        cin >> value;
    }


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
            cout << "CXS-Error: Can't divide by zero" << endl;
        } else {
            double result = static_cast<double>(a) / b;
            cout << result << endl;
        }
    }

}


#define ct std
#define es else
#define neither else
#define esif else if
#define either else if
#define swch switch
#define when while
#define for_this for
#define fr for
#define rehave return

#define sr srand
#define tm time



#endif //CXS11_HPP
