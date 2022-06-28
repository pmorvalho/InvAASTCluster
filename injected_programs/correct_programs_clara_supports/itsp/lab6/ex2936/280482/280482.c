#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0 = 0;
    int _array_int_0[50];
    int _int_1 = 0;
    scanf("%d", &_int_0);
    for (int i = 0; _loop_3_2(_int_0, _int_1), i < _int_0; i++)
    {
      scanf("%d", &_array_int_0[i]);
      _scope_4_3(_int_0, _int_1, _array_int_0);
    }

    for (int i = 0; _loop_3_4(_int_0, _int_1, _array_int_0), i < _int_0; i++)
    {
      for (int j = i + 1; _loop_5_5(_int_0, _int_1, _array_int_0), j < _int_0; j++)
      {
        if (j > _int_0)
        {
          _if_7_6(_int_0, _int_1, _array_int_0);
          {
            {
              _break_9_7(_int_0, _int_1, _array_int_0);
              break;
            }
            _scope_8_8(_int_0, _int_1, _array_int_0);
          }
        }

        if (_array_int_0[i] == _array_int_0[j])
        {
          _if_7_9(_int_0, _int_1, _array_int_0);
          {
            _int_1 = _int_1 + 1;
            _scope_8_10(_int_0, _int_1, _array_int_0);
          }
        }

        _scope_6_11(_int_0, _int_1, _array_int_0);
      }

      _scope_4_12(_int_0, _int_1, _array_int_0);
    }

    if (_int_1 > 0)
    {
      _if_3_13(_int_0, _int_1, _array_int_0);
      {
        printf("YES");
        _scope_4_14(_int_0, _int_1, _array_int_0);
      }
    }
    else
    {
      _else_3_16(_int_0, _int_1, _array_int_0);
      {
        printf("NO");
        _scope_4_15(_int_0, _int_1, _array_int_0);
      }
    }

    {
      _return_3_17(_int_0, _int_1, _array_int_0);
      return 0;
    }
    _scope_2_18(_int_0, _int_1, _array_int_0);
  }
}

