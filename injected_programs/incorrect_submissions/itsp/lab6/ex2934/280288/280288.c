#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_2;
    int _int_4;
    int _int_0;
    int _int_1;
    int _int_3;
    int _array_int_0[5555];
    scanf("%d\n", &_int_0);
    for (_int_1 = 0; _loop_3_2(_int_0, _int_1), _int_1 < _int_0; _int_1++)
    {
      scanf("%d ", &_array_int_0[_int_1]);
      if (((-1000) <= _array_int_0[_int_1]) && (_array_int_0[_int_1] <= 1000))
      {
        _if_5_3(_int_0, _int_1, _array_int_0);
        {
          {
            _continue_7_4(_int_0, _int_1, _array_int_0);
            continue;
          }
          _scope_6_5(_int_0, _int_1, _array_int_0);
        }
      }
      else
      {
        _else_5_7(_int_0, _int_1, _array_int_0);
        {
          _array_int_0[_int_1] = 1000;
          _scope_6_6(_int_0, _int_1, _array_int_0);
        }
      }

      _scope_4_8(_int_0, _int_1, _array_int_0);
    }

    for (_int_2 = 1; _loop_3_9(_int_0, _int_1, _array_int_0, _int_2), _int_2 <= _int_0; _int_2++)
    {
      _int_3 = _int_0 - 1;
      for (_int_4 = 1; _loop_5_10(_int_0, _int_1, _array_int_0, _int_2, _int_3, _int_4), _int_4 <= _int_2; _int_4++)
      {
        printf("%d ", _array_int_0[_int_3]);
        _int_3 = _int_3 - 1;
        _scope_6_11(_int_0, _int_1, _array_int_0, _int_2, _int_3, _int_4);
      }

      printf("\n");
      _scope_4_12(_int_0, _int_1, _array_int_0, _int_2, _int_3, _int_4);
    }

    {
      _return_3_13(_int_0, _int_1, _array_int_0, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_14(_int_0, _int_1, _array_int_0, _int_2, _int_3, _int_4);
  }
}

