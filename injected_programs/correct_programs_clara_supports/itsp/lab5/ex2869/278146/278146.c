#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    scanf("%d", &_int_0);
    for (_int_1 = 1; _loop_3_2(_int_0, _int_1), _int_1 <= _int_0; _int_1 = _int_1 + 1)
    {
      for (_int_2 = 1; _loop_5_3(_int_0, _int_1, _int_2), _int_2 <= _int_0; _int_2 = _int_2 + 1)
        if (_int_1 > _int_2)
      {
        _if_6_4(_int_0, _int_1, _int_2);
        {
          printf("%d", (_int_0 - _int_1) + _int_2);
          _scope_7_5(_int_0, _int_1, _int_2);
        }
      }
      else
      {
        _else_6_7(_int_0, _int_1, _int_2);
        {
          printf("%d", _int_0);
          _scope_7_6(_int_0, _int_1, _int_2);
        }
      }


      printf("\n");
      _scope_4_8(_int_0, _int_1, _int_2);
    }

    {
      _return_3_9(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_10(_int_0, _int_1, _int_2);
  }
}

