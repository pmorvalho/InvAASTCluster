#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0 = 0;
    int _int_1;
    int _int_2;
    int _array_int_1[100];
    int _array_int_0[100];
    scanf("%d %d", &_int_1, &_int_2);
    for (int i = 0; _loop_3_2(_int_0, _int_1, _int_2), i < _int_1; i++)
      scanf("%d", &_array_int_0[i]);

    if (_int_2 < _int_1)
    {
      _if_3_3(_int_0, _int_1, _int_2, _array_int_0);
      {
        for (int i = 0; _loop_5_4(_int_0, _int_1, _int_2, _array_int_0), i <= _int_2; i++)
        {
          _array_int_1[i] = _array_int_0[i];
          _scope_6_5(_int_0, _int_1, _int_2, _array_int_0, _array_int_1);
        }

        printf("%d", _array_int_1[_int_2]);
        _scope_4_6(_int_0, _int_1, _int_2, _array_int_0, _array_int_1);
      }
    }
    else
    {
      _else_3_13(_int_0, _int_1, _int_2, _array_int_0, _array_int_1);
      {
        int _int_3;
        for (_int_3 = 0; _loop_5_7(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3), _int_3 < _int_1; _int_3++)
        {
          _array_int_1[_int_3] = _array_int_0[_int_3];
          _scope_6_8(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3);
        }

        for (_int_3 = _int_1; _loop_5_9(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3), _int_3 <= _int_2; _int_3++)
        {
          for (int j = 1; _loop_7_10(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3), j <= _int_1; j++)
            _int_0 = _int_0 + _array_int_1[_int_3 - j];

          _array_int_1[_int_3] = _int_0;
          _scope_6_11(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3);
        }

        printf("%d", _array_int_1[_int_2]);
        _scope_4_12(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3);
      }
    }

    {
      _return_3_14(_int_0, _int_1, _int_2, _array_int_0, _array_int_1);
      return 0;
    }
    _scope_2_15(_int_0, _int_1, _int_2, _array_int_0, _array_int_1);
  }
}

