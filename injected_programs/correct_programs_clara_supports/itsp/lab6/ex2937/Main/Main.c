#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_3;
    int _int_5;
    int _array_int_0[20];
    int _array_int_1[20];
    int _array_int_2[2 * 20];
    int _int_0 = 0;
    int _int_1 = 0;
    int _int_2 = 0;
    int _int_4;
    scanf("%d", &_int_3);
    for (_int_4 = 0; _loop_3_2(_int_0, _int_1, _int_2, _int_3, _int_4), _int_4 < _int_3; _int_4++)
    {
      scanf("%d", &_array_int_0[_int_4]);
      _scope_4_3(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0);
    }

    scanf("%d", &_int_5);
    for (_int_4 = 0; _loop_3_4(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5), _int_4 < _int_5; _int_4++)
    {
      scanf("%d", &_array_int_1[_int_4]);
      _scope_4_5(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1);
    }

    while (_loop_3_6(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1), _int_2 < (_int_3 + _int_5))
    {
      if (_int_0 >= _int_3)
      {
        _if_5_7(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1);
        {
          _array_int_2[_int_2] = _array_int_1[_int_1];
          _int_1++;
          _int_2++;
          _scope_6_8(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
        }
      }
      else
      {
        _else_5_17(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
        if (_int_1 >= _int_5)
        {
          _if_6_9(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
          {
            _array_int_2[_int_2] = _array_int_0[_int_0];
            _int_0++;
            _int_2++;
            _scope_7_10(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
          }
        }
        else
        {
          _else_6_16(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
          {
            if (_array_int_0[_int_0] < _array_int_1[_int_1])
            {
              _if_8_11(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
              {
                _array_int_2[_int_2] = _array_int_0[_int_0];
                _int_0++;
                _int_2++;
                _scope_9_12(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
              }
            }
            else
            {
              _else_8_14(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
              {
                _array_int_2[_int_2] = _array_int_1[_int_1];
                _int_1++;
                _int_2++;
                _scope_9_13(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
              }
            }

            _scope_7_15(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
          }
        }

      }

      _scope_4_18(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
    }

    for (_int_4 = 0; _loop_3_19(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2), _int_4 < (_int_3 + _int_5); _int_4++)
    {
      printf("%d\n", _array_int_2[_int_4]);
      _scope_4_20(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
    }

    {
      _return_3_21(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
      return 0;
    }
    _scope_2_22(_int_0, _int_1, _int_2, _int_3, _int_4, _array_int_0, _int_5, _array_int_1, _array_int_2);
  }
}

