#ifndef CPT_T_HPP//CPT U16 (CPT V2.0)
#define CPT_T_HPP

#include <iostream>
#include <string>

namespace types{
   
  //short types
  using num = int;
  using str = std::string;
  using db = double;
  using bl = bool;
  using fl = float;
  using cr = char;
  using lg = long;
  
  //funcs
  using funv = void;
  using funnum = int;
  using funstr = std::string;
  using fundb = double;
  using funfl = float;
  using funbl = bool;
  using funcr = char;
  using funlg = long;
}

  //loan keywords
  #define var auto //from kotlin,js
  #define val const //from kotlin
  #define fun auto //from kotlin,go etc

#endif //CPT_T_HPP
