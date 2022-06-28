#include "vars_info.h"
#include <stdio.h>

int _int_2;
int max(int _array_int_0[], int _int_0)
{
  _function_1_1(_array_int_0, _int_0);
  {
    int _int_1 = _array_int_0[0];
    for (_int_2 = 1; _loop_3_2(_array_int_0, _int_0, _int_1, _int_2), _int_2 < _int_0; _int_2++)
    {
      if (_int_1 < _array_int_0[_int_2])
      {
        _if_5_3(_array_int_0, _int_0, _int_1, _int_2);
        {
          _int_1 = _array_int_0[_int_2];
          _scope_6_4(_array_int_0, _int_0, _int_1, _int_2);
        }
      }

      _scope_4_5(_array_int_0, _int_0, _int_1, _int_2);
    }

    {
      _return_3_6(_array_int_0, _int_0, _int_1, _int_2);
      return _int_1;
    }
    _scope_2_7(_array_int_0, _int_0, _int_1, _int_2);
  }
}

int main()
{
  _function_1_8(_int_2);
  {
    int _int_1;
    int _int_4;
    int _int_3;
    int _int_5;
    int _int_7;
    int _int_2;
    int _array_int_1[20];
    int _array_int_0[20];
    scanf("%d", &_int_1);
    for (_int_2 = 0; _loop_3_9(_int_2, _int_1, _int_2), _int_2 < _int_1; _int_2++)
    {
      _array_int_0[_int_2] = 0;
      _scope_4_10(_int_2, _int_1, _int_2, _array_int_0);
    }

    for (_int_3 = 0; _loop_3_11(_int_2, _int_1, _int_2, _array_int_0, _int_3), _int_3 < _int_1; _int_3++)
    {
      scanf("%d", &_int_4);
      _array_int_1[_int_3] = _int_4;
      _scope_4_12(_int_2, _int_1, _int_2, _array_int_0, _int_3, _int_4, _array_int_1);
    }

    for (_int_5 = 0; _loop_3_13(_int_2, _int_1, _int_2, _array_int_0, _int_3, _int_4, _array_int_1, _int_5), _int_5 < (_int_1 - 1); _int_5++)
    {
      int _int_6 = _array_int_1[_int_5];
      for (_int_7 = _int_5 + 1; _loop_5_14(_int_2, _int_1, _int_2, _array_int_0, _int_3, _int_4, _array_int_1, _int_5, _int_6, _int_7), _int_7 < _int_1; _int_7++)
      {
        if (_int_6 < _array_int_1[_int_7])
        {
          _if_7_15(_int_2, _int_1, _int_2, _array_int_0, _int_3, _int_4, _array_int_1, _int_5, _int_6, _int_7);
          {
            _array_int_0[_int_5]++;
            _int_6 = _array_int_1[_int_7];
            _scope_8_16(_int_2, _int_1, _int_2, _array_int_0, _int_3, _int_4, _array_int_1, _int_5, _int_6, _int_7);
          }
        }

        _scope_6_17(_int_2, _int_1, _int_2, _array_int_0, _int_3, _int_4, _array_int_1, _int_5, _int_6, _int_7);
      }

      _scope_4_18(_int_2, _int_1, _int_2, _array_int_0, _int_3, _int_4, _array_int_1, _int_5, _int_6, _int_7);
    }

    printf("%d", max(_array_int_0, _int_1) + 1);
    {
      _return_3_19(_int_2, _int_1, _int_2, _array_int_0, _int_3, _int_4, _array_int_1, _int_5, _int_7);
      return 0;
    }
    _scope_2_20(_int_2, _int_1, _int_2, _array_int_0, _int_3, _int_4, _array_int_1, _int_5, _int_7);
  }
}

