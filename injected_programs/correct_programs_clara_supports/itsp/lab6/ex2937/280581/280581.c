#include "vars_info.h"
#include <stdio.h>

void merge_array(int _array_int_0[20], int _int_0, int _array_int_1[20], int _int_1)
{
  _function_1_1(_array_int_0, _int_0, _array_int_1, _int_1);
  {
    int _array_int_2[40];
    int _int_2 = _int_0 + _int_1;
    int _int_3 = 0;
    int _int_4 = 0;
    int _int_5 = 0;
    while (_loop_3_2(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5), (_int_4 < _int_0) && (_int_5 < _int_1))
    {
      if (_array_int_0[_int_4] < _array_int_1[_int_5])
      {
        _if_5_3(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5);
        {
          _array_int_2[_int_3] = _array_int_0[_int_4];
          _int_4 = _int_4 + 1;
          _int_3 = _int_3 + 1;
          _scope_6_4(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2);
        }
      }
      else
      {
        _else_5_6(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2);
        {
          _array_int_2[_int_3] = _array_int_1[_int_5];
          _int_5 = _int_5 + 1;
          _int_3 = _int_3 + 1;
          _scope_6_5(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2);
        }
      }

      _scope_4_7(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2);
    }

    if (_int_4 == _int_0)
    {
      _if_3_8(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2);
      {
        for (; _loop_5_9(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2), _int_3 < _int_2; _int_3++)
        {
          _array_int_2[_int_3] = _array_int_1[_int_5];
          _int_5 = _int_5 + 1;
          _scope_6_10(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2);
        }

        _scope_4_11(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2);
      }
    }

    if (_int_5 == _int_1)
    {
      _if_3_12(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2);
      {
        for (; _loop_5_13(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2), _int_3 < _int_2; _int_3++)
        {
          _array_int_2[_int_3] = _array_int_0[_int_4];
          _int_4 = _int_4 + 1;
          _scope_6_14(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2);
        }

        _scope_4_15(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2);
      }
    }

    for (_int_3 = 0; _loop_3_16(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2), _int_3 < _int_2; _int_3++)
    {
      printf("%d\n", _array_int_2[_int_3]);
      _scope_4_17(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2);
    }

    _scope_2_18(_array_int_0, _int_0, _array_int_1, _int_1, _int_2, _int_3, _int_4, _int_5, _array_int_2);
  }
}

int main()
{
  _function_1_19();
  {
    int _array_int_0[20];
    int _array_int_1[20];
    int C[40];
    int _int_0;
    int _int_2;
    int _int_1;
    scanf("%d", &_int_0);
    for (_int_1 = 0; _loop_3_20(_int_0, _int_1), _int_1 < _int_0; _int_1++)
    {
      scanf("%d", &_array_int_0[_int_1]);
      _scope_4_21(_int_0, _int_1, _array_int_0);
    }

    scanf("%d", &_int_2);
    for (_int_1 = 0; _loop_3_22(_int_0, _int_1, _array_int_0, _int_2), _int_1 < _int_2; _int_1++)
    {
      scanf("%d", &_array_int_1[_int_1]);
      _scope_4_23(_int_0, _int_1, _array_int_0, _int_2, _array_int_1);
    }

    merge_array(_array_int_0, _int_0, _array_int_1, _int_2);
    {
      _return_3_24(_int_0, _int_1, _array_int_0, _int_2, _array_int_1);
      return 0;
    }
    _scope_2_25(_int_0, _int_1, _array_int_0, _int_2, _array_int_1);
  }
}

