#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_1;
    int _int_2;
    int _int_3;
    int _int_0 = 1;
    scanf("%d\n", &_int_1);
    int _array_int_0[50];
    for (_int_2 = 0; _loop_3_2(_int_0, _int_1, _int_2), _int_2 < _int_1; _int_2++)
      scanf("%d ", &_array_int_0[_int_2]);

    for (_int_2 = 0; _loop_3_3(_int_0, _int_1, _int_2, _array_int_0), _int_2 < (_int_1 - 1); _int_2++)
    {
      for (_int_3 = _int_2; _loop_5_4(_int_0, _int_1, _int_2, _array_int_0, _int_3), _int_3 < _int_1; _int_3++)
      {
        if (_array_int_0[_int_2] == _array_int_0[_int_3])
        {
          _if_7_5(_int_0, _int_1, _int_2, _array_int_0, _int_3);
          {
            _int_0 = 0;
            {
              _break_9_6(_int_0, _int_1, _int_2, _array_int_0, _int_3);
              break;
            }
            _scope_8_7(_int_0, _int_1, _int_2, _array_int_0, _int_3);
          }
        }

        _scope_6_8(_int_0, _int_1, _int_2, _array_int_0, _int_3);
      }

      if (!_int_0)
      {
        _if_5_9(_int_0, _int_1, _int_2, _array_int_0, _int_3);
        {
          _break_6_10(_int_0, _int_1, _int_2, _array_int_0, _int_3);
          break;
        }
      }

      _scope_4_11(_int_0, _int_1, _int_2, _array_int_0, _int_3);
    }

    if (!_int_0)
    {
      _if_3_12(_int_0, _int_1, _int_2, _array_int_0, _int_3);
      printf("YES");
    }
    else
    {
      _else_3_13(_int_0, _int_1, _int_2, _array_int_0, _int_3);
      printf("NO");
    }

    {
      _return_3_14(_int_0, _int_1, _int_2, _array_int_0, _int_3);
      return 0;
    }
    _scope_2_15(_int_0, _int_1, _int_2, _array_int_0, _int_3);
  }
}

