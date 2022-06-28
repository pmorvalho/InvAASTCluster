#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_1;
    int _int_2;
    int _int_3;
    int _int_4;
    int _int_0 = 0;
    scanf("%d", &_int_1);
    for (_int_2 = 1; _loop_3_2(_int_0, _int_1, _int_2), _int_2 <= _int_1; _int_2++)
      for (_int_3 = 1; _loop_4_3(_int_0, _int_1, _int_2, _int_3), _int_3 <= _int_2; _int_3++)
      for (_int_4 = 1; _loop_5_4(_int_0, _int_1, _int_2, _int_3, _int_4), _int_4 <= _int_3; _int_4++)
      if ((((_int_2 + _int_3) > _int_4) && ((_int_3 + _int_4) > _int_2)) && ((_int_4 + _int_2) > _int_3))
    {
      _if_6_5(_int_0, _int_1, _int_2, _int_3, _int_4);
      _int_0++;
    }




    printf("Number of possible triangles is %d", _int_0);
    {
      _return_3_6(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_7(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

