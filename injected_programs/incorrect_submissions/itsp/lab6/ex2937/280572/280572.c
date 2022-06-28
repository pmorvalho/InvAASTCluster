#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_3;
    int _int_4;
    int _int_0;
    int _array_int_0[20];
    int _array_int_1[20];
    int _array_int_2[40];
    int _int_1;
    int _int_2;
    _int_0 = 0;
    scanf("%d %d", &_int_1, &_int_2);
    for (_int_3 = 0; _loop_3_2(_int_0, _int_1, _int_2, _int_3), _int_3 < _int_1; _int_3 = _int_3 + 1)
      scanf("%d", &_array_int_0[_int_3]);

    for (_int_4 = 0; _loop_3_3(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4), _int_4 < _int_2; _int_4 = _int_4 + 1)
      scanf("%d", &_array_int_1[_int_4]);

    _int_3 = 0, _int_4 = 0;
    while (_loop_3_4(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1), (_int_3 < _int_1) && (_int_4 < _int_2))
    {
      if (_array_int_0[_int_3] < _array_int_1[_int_4])
      {
        _if_5_5(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1);
        {
          _array_int_2[_int_0] = _array_int_0[_int_3];
          _int_3 = _int_3 + 1;
          _int_0++;
          _scope_6_6(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2);
        }
      }
      else
      {
        _else_5_8(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2);
        {
          _array_int_2[_int_0] = _array_int_1[_int_4];
          _int_4 = _int_4 + 1;
          _int_0++;
          _scope_6_7(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2);
        }
      }

      _scope_4_9(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2);
    }

    if (_int_3 < _int_1)
    {
      _if_3_10(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2);
      {
        for (; _loop_5_11(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2), _int_3 < _int_1; _int_3 = _int_3 + 1)
        {
          _array_int_2[_int_0++] = _array_int_0[_int_3];
          _scope_6_12(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2);
        }

        for (; _loop_5_13(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2), _int_4 < _int_2; _int_4 = _int_4 + 1)
        {
          _array_int_2[_int_0++] = _array_int_1[_int_4];
          _scope_6_14(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2);
        }

        _scope_4_15(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2);
      }
    }

    for (_int_0 = 0; _loop_3_16(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2), _int_0 < (_int_1 + _int_2); _int_0 = _int_0 + 1)
    {
      printf("%d\n", _array_int_2[_int_0]);
      _scope_4_17(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2);
    }

    {
      _return_3_18(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2);
      return 0;
    }
    _scope_2_19(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _array_int_1, _array_int_2);
  }
}

