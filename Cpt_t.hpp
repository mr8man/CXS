#ifndef CPT_T_HPP//CPT U8 (CPT V2.0)
#define CPT_T_HPP

#include <iostream>
#include <string>

namespace CXS_short_types{
  using nums = int;
  using str = std::string;
  using dob = double;
  using bl = bool;
  using fl = float;
  using cr = char;
  using lg = long;

}

namespace let_types{
  using let_nums = int;
  using let_str = std::string;
  using let_dob = double;
  using let_bl = bool;
  using let_fl = float;
  using let_cr = char;
  using let_lg = long;
  using let_db = double;
  using let_vd = void;
  using let_nort = void;
}

namespace CXS_types{
 
}

namespace functions{
 
  using funv = void;
  using funnm = int;
  using funst = std::string;
  using fund = double;
  using funf = float;
  using funb = bool;
  using funcr = char;
  using funlg = long;
}
  //loan keywords
  #define var auto //from kotlin,js
  #define val const //from kotlin

  //functions macros
  #define fn auto // from rust
  #define fun auto //from kotlin,go etc
  #define let auto //from js
  #define func auto // from CXS (CXS own syntax)
  #define function auto //from js

  //CXS own types macros
  #define dyn auto // from CXS (CXS own syntax)
  #define immut const // from CXS (CXS own syntax)
  #define letc const // from CXS (CXS own syntax)
  #define letd auto // from CXS (CXS own syntax)
  #define funk auto // from CXS (CXS own syntax)

#endif //CPT_T_HPP
