#ifndef CPT_U16_HPP
#define CPT_U16_HPP

#ifdef __cplusplus
#include <string>
#include <iostream>

namespace types{
    using num = int;
    using str = std::string;
    using db = double;
    using bl = bool;
    using fl = float;
    using cr = char;
    using lg = long;

    using funv = void;
    using funnum = int;
    using funstr = std::string;
    using fundb = double;
    using funfl = float;
    using funbl = bool;
    using funcr = char;
    using funlg = long;
}

// loan keywords
#define var auto
#define val const
#define fun auto

#else // pure C

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

typedef int num;
typedef char str[1080];// GTX 1080 TI refreance?
typedef double db;
typedef float fl;
typedef bool bl;
typedef char cr;
typedef long lg;

typedef void funv;
typedef int funnum;
typedef char funstr[1080];// GTX 1080 TI refreance?
typedef double fundb;
typedef float funfl;
typedef bool funbl;
typedef char funcr;
typedef long funlg;

#endif // __cplusplus

#endif // CPT_U16_HPP