#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_1;
    int _int_3;
    int _int_2;
    int _int_4;
    int _int_0 = 0;
    scanf("%d %d", &_int_1, &_int_2);
    int _array_int_1[31];
    int _array_int_0[21];
    for (_int_3 = 0; _loop_3_2(_int_0, _int_1, _int_2, _int_3), _int_3 < _int_1; _int_3++)
    {
      scanf("%d", &_array_int_0[_int_3]);
      _array_int_1[_int_3] = _array_int_0[_int_3];
      _scope_4_3(_int_0, _int_1, _int_2, _int_3, _array_int_0, _array_int_1);
    }

    if (_int_2 < _int_1)
    {
      _if_3_4(_int_0, _int_1, _int_2, _int_3, _array_int_0, _array_int_1);
      printf("%d", _array_int_1[_int_2]);
    }
    else
    {
      _else_3_10(_int_0, _int_1, _int_2, _int_3, _array_int_0, _array_int_1, _int_4);
      {
        _array_int_1[_int_1] = _int_0;
        for (_int_3 = _int_1; _loop_5_5(_int_0, _int_1, _int_2, _int_3, _array_int_0, _array_int_1), _int_3 <= _int_2; _int_3++)
        {
          _array_int_1[_int_3] = 0;
          for (_int_4 = _int_3 - 1; _loop_7_6(_int_0, _int_1, _int_2, _int_3, _array_int_0, _array_int_1, _int_4), _int_4 >= (_int_3 - _int_1); _int_4--)
          {
            _array_int_1[_int_3] = _array_int_1[_int_3] + _array_int_1[_int_4];
            _scope_8_7(_int_0, _int_1, _int_2, _int_3, _array_int_0, _array_int_1, _int_4);
          }

          _scope_6_8(_int_0, _int_1, _int_2, _int_3, _array_int_0, _array_int_1, _int_4);
        }

        printf("%d", _array_int_1[_int_2]);
        _scope_4_9(_int_0, _int_1, _int_2, _int_3, _array_int_0, _array_int_1, _int_4);
      }
    }

    {
      _return_3_11(_int_0, _int_1, _int_2, _int_3, _array_int_0, _array_int_1, _int_4);
      return 0;
    }
    _scope_2_12(_int_0, _int_1, _int_2, _int_3, _array_int_0, _array_int_1, _int_4);
  }
}

