#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_3;
    int _int_2;
    int _int_1;
    int _array_int_0[30];
    scanf("%d %d\n", &_int_0, &_int_1);
    for (_int_2 = 0; _loop_3_2(_int_0, _int_1, _int_2), _int_2 < _int_0; _int_2++)
    {
      scanf("%d", &_array_int_0[_int_2]);
      _scope_4_3(_int_0, _int_1, _int_2, _array_int_0);
    }

    if (_int_1 >= _int_0)
    {
      _if_3_4(_int_0, _int_1, _int_2, _array_int_0);
      for (_int_2 = _int_0; _loop_4_5(_int_0, _int_1, _int_2, _array_int_0), _int_2 <= _int_1; _int_2++)
      {
        _array_int_0[_int_2] = 0;
        for (_int_3 = _int_0 - 1; _loop_6_6(_int_0, _int_1, _int_2, _array_int_0, _int_3), _int_3 >= (_int_2 - _int_0); _int_3--)
        {
          _array_int_0[_int_2] = _array_int_0[_int_2] + _array_int_0[_int_3];
          _scope_7_7(_int_0, _int_1, _int_2, _array_int_0, _int_3);
        }

        _scope_5_8(_int_0, _int_1, _int_2, _array_int_0, _int_3);
      }

    }

    printf("%d\n", _array_int_0[_int_1]);
    {
      _return_3_9(_int_0, _int_1, _int_2, _array_int_0, _int_3);
      return 0;
    }
    _scope_2_10(_int_0, _int_1, _int_2, _array_int_0, _int_3);
  }
}

