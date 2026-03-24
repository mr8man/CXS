#include "CXSAtlas.hpp"
#include "CPM1.hpp"

using namespace stdio;
using namespace stdmath;
using namespace types;

fun main() -> funnum{
    str name;
    num age;
    var isAdmin;
    flprintln("Hello, World!");
    add(1, 2, 3, 4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20);
    sub(1, 2, 3, 4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20);
    multi(1, 2, 3, 4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20);
    divs(1, 2, 3, 4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20);

    input(name, age, isAdmin);
    println("hello ", name , "is your age ", age, "are you an admin? ", isAdmin);
    return 0;
}
