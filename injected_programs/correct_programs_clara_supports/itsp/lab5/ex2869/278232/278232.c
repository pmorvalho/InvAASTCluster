#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_2;
    int _int_3;
    int _int_0;
    int _int_1 = _int_0;
    scanf("%d", &_int_0);
    for (_int_2 = 1; _loop_3_2(_int_1, _int_0, _int_2), _int_2 <= _int_0; _int_2 = _int_2 + 1)
    {
      for (_int_3 = 1; _loop_5_3(_int_1, _int_0, _int_2, _int_3), _int_3 <= _int_0; _int_3 = _int_3 + 1)
      {
        if (_int_3 < _int_2)
        {
          _if_7_4(_int_1, _int_0, _int_2, _int_3);
          {
            printf("%d", (_int_0 - _int_2) + _int_3);
            _scope_8_5(_int_1, _int_0, _int_2, _int_3);
          }
        }
        else
        {
          _else_7_6(_int_1, _int_0, _int_2, _int_3);
          printf("%d", _int_0);
        }

        _scope_6_7(_int_1, _int_0, _int_2, _int_3);
      }

      printf("\n");
      _scope_4_8(_int_1, _int_0, _int_2, _int_3);
    }

    {
      _return_3_9(_int_1, _int_0, _int_2, _int_3);
      return 0;
    }
    _scope_2_10(_int_1, _int_0, _int_2, _int_3);
  }
}

