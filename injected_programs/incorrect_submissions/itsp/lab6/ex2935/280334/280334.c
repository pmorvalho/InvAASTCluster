#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _array_int_0[15];
    int _array_int_1[15];
    int _int_0;
    int _int_1;
    int _int_3;
    int _int_2;
    int _int_5;
    int _int_4;
    int _int_6;
    int _int_7;
    int _int_8;
    int _int_9;
    int _array_int_2[29];
    scanf("%d %d", &_int_0, &_int_1);
    _int_2 = 1;
    for (_int_3 = 0; _loop_3_2(_int_0, _int_1, _int_2, _int_3), _int_3 < _int_0; _int_3++)
    {
      scanf("%d ", &_array_int_0[_int_0 - _int_3]);
      _int_2 = _int_2 + 1;
      _scope_4_3(_int_0, _int_1, _int_2, _int_3, _array_int_0);
    }

    _int_4 = 1;
    for (_int_5 = 0; _loop_3_4(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _int_5), _int_5 < _int_1; _int_5++)
    {
      scanf("%d ", &_array_int_1[_int_1 - _int_5]);
      _int_4 = _int_4 + 1;
      _scope_4_5(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _int_5, _array_int_1);
    }

    _int_6 = _int_0 + _int_1;
    printf("%d", _int_6);
    printf("\n");
    _int_9 = _int_7 + _int_8;
    _int_7 = 0, _int_8 = 0;
    for (_int_9 = 0; _loop_3_6(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _int_5, _array_int_1, _int_6, _int_9, _int_7, _int_8), _int_9 <= _int_6; _int_9++)
    {
      for (_int_7 = 0; _loop_5_7(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _int_5, _array_int_1, _int_6, _int_9, _int_7, _int_8), _int_7 <= _int_0; _int_7++)
      {
        for (_int_8 = 0; _loop_7_8(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _int_5, _array_int_1, _int_6, _int_9, _int_7, _int_8), _int_8 <= _int_1; _int_8++)
        {
          _array_int_2[_int_9] = _array_int_1[_int_8] * _array_int_0[_int_7];
          printf("%d ", _array_int_2[_int_9]);
          _scope_8_9(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _int_5, _array_int_1, _int_6, _int_9, _int_7, _int_8, _array_int_2);
        }

        _scope_6_10(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _int_5, _array_int_1, _int_6, _int_9, _int_7, _int_8, _array_int_2);
      }

      {
        _return_5_11(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _int_5, _array_int_1, _int_6, _int_9, _int_7, _int_8, _array_int_2);
        return 0;
      }
      _scope_4_12(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _int_5, _array_int_1, _int_6, _int_9, _int_7, _int_8, _array_int_2);
    }

    _scope_2_13(_int_0, _int_1, _int_2, _int_3, _array_int_0, _int_4, _int_5, _array_int_1, _int_6, _int_9, _int_7, _int_8, _array_int_2);
  }
}

