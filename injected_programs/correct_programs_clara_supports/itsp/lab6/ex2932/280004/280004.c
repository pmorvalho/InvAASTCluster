#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _array_int_1[100];
    int _array_int_0[100];
    scanf("%d %d", &_int_0, &_int_1);
    for (int i = 0; _loop_3_2(_int_0, _int_1), i < _int_0; i++)
    {
      scanf("%d", &_array_int_0[i]);
      _scope_4_3(_int_0, _int_1, _array_int_0);
    }

    if (_int_1 < _int_0)
    {
      _if_3_4(_int_0, _int_1, _array_int_0);
      {
        int _int_2;
        for (_int_2 = 0; _loop_5_5(_int_0, _int_1, _array_int_0, _int_2), _int_2 < _int_0; _int_2++)
        {
          _array_int_1[_int_2] = _array_int_0[_int_2];
          _scope_6_6(_int_0, _int_1, _array_int_0, _int_2, _array_int_1);
        }

        printf("%d", _array_int_1[_int_1]);
        _scope_4_7(_int_0, _int_1, _array_int_0, _int_2, _array_int_1);
      }
    }
    else
    {
      _else_3_14(_int_0, _int_1, _array_int_0, _array_int_1);
      {
        int _int_2;
        for (_int_2 = 0; _loop_5_8(_int_0, _int_1, _array_int_0, _array_int_1, _int_2), _int_2 < _int_0; _int_2++)
        {
          _array_int_1[_int_2] = _array_int_0[_int_2];
          _scope_6_9(_int_0, _int_1, _array_int_0, _array_int_1, _int_2);
        }

        for (_int_2 = _int_0; _loop_5_10(_int_0, _int_1, _array_int_0, _array_int_1, _int_2), _int_2 <= _int_1; _int_2++)
        {
          int _int_3 = 0;
          for (int j = 1; _loop_7_11(_int_0, _int_1, _array_int_0, _array_int_1, _int_2, _int_3), j <= _int_0; j++)
            _int_3 = _int_3 + _array_int_1[_int_2 - j];

          _array_int_1[_int_2] = _int_3;
          _scope_6_12(_int_0, _int_1, _array_int_0, _array_int_1, _int_2, _int_3);
        }

        printf("%d", _array_int_1[_int_1]);
        _scope_4_13(_int_0, _int_1, _array_int_0, _array_int_1, _int_2);
      }
    }

    {
      _return_3_15(_int_0, _int_1, _array_int_0, _array_int_1);
      return 0;
    }
    _scope_2_16(_int_0, _int_1, _array_int_0, _array_int_1);
  }
}

