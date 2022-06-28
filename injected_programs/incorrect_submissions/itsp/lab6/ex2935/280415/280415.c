#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _array_int_0[20];
    int _array_int_1[20];
    int _int_0;
    int _int_1;
    int _int_2;
    int _int_3;
    int _int_4;
    int _int_5;
    int _int_6;
    scanf("%d %d", &_int_0, &_int_1);
    printf("%d", _int_0 + _int_1);
    for (_int_2 = 0; _loop_3_2(_int_0, _int_1, _int_2), _int_2 <= _int_0; _int_2++)
    {
      scanf("%d ", &_array_int_0[_int_2]);
      if (_int_2 == _int_0)
      {
        _if_5_3(_int_0, _int_1, _int_2, _array_int_0);
        {
          printf("\n");
          _scope_6_4(_int_0, _int_1, _int_2, _array_int_0);
        }
      }
      else
      {
        _else_5_7(_int_0, _int_1, _int_2, _array_int_0);
        {
          {
            _continue_7_5(_int_0, _int_1, _int_2, _array_int_0);
            continue;
          }
          _scope_6_6(_int_0, _int_1, _int_2, _array_int_0);
        }
      }

      _scope_4_8(_int_0, _int_1, _int_2, _array_int_0);
    }

    for (_int_3 = 0; _loop_3_9(_int_0, _int_1, _int_2, _array_int_0, _int_3), _int_3 <= _int_1; _int_3++)
    {
      scanf("%d ", &_array_int_1[_int_3]);
      if (_int_3 == _int_1)
      {
        _if_5_10(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1);
        {
          printf("\n");
          _scope_6_11(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1);
        }
      }
      else
      {
        _else_5_14(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1);
        {
          {
            _continue_7_12(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1);
            continue;
          }
          _scope_6_13(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1);
        }
      }

      _scope_4_15(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1);
    }

    for (_int_4 = 0; _loop_3_16(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1, _int_4), _int_4 <= (_int_0 + _int_1); _int_4++)
    {
      _int_5 = 0;
      for (_int_6 = 0; _loop_5_17(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1, _int_4, _int_5, _int_6), _int_6 <= _int_4; _int_6++)
      {
        if (((_int_4 - _int_6) <= _int_0) && (_int_6 <= _int_1))
        {
          _if_7_18(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1, _int_4, _int_5, _int_6);
          {
            _int_5 = (_array_int_0[_int_4 - _int_6] * _array_int_1[_int_6]) + _int_5;
            printf("%d ", _int_5);
            _scope_8_19(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1, _int_4, _int_5, _int_6);
          }
        }

        _scope_6_20(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1, _int_4, _int_5, _int_6);
      }

      _scope_4_21(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1, _int_4, _int_5, _int_6);
    }

    {
      _return_3_22(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1, _int_4, _int_5, _int_6);
      return 0;
    }
    _scope_2_23(_int_0, _int_1, _int_2, _array_int_0, _int_3, _array_int_1, _int_4, _int_5, _int_6);
  }
}

