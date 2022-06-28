#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _array_int_0[50];
    int _array_int_1[50];
    int _int_2;
    int _int_6;
    int _int_7;
    scanf("%d", &_int_0);
    for (int i = 0; _loop_3_2(_int_0), i < _int_0; i++)
    {
      scanf("%d", &_array_int_0[i]);
      _scope_4_3(_int_0, _array_int_0);
    }

    scanf("%d", &_int_1);
    for (int i = 0; _loop_3_4(_int_0, _array_int_0, _int_1), i < _int_1; i++)
    {
      scanf("%d", &_array_int_1[i]);
      _scope_4_5(_int_0, _array_int_0, _int_1, _array_int_1);
    }

    for (_int_2 = 0; _loop_3_6(_int_0, _array_int_0, _int_1, _array_int_1, _int_2), _int_2 <= ((_int_0 - _int_1) + 1); _int_2++)
    {
      int _int_3 = 0;
      int _int_6 = _int_2;
      int _int_7 = 0;
      while (_loop_5_7(_int_0, _array_int_0, _int_1, _array_int_1, _int_2, _int_3, _int_6, _int_7), (_int_6 < (_int_2 + _int_1)) && (_int_7 <= (_int_1 - 1)))
      {
        if (_array_int_0[_int_6] == _array_int_1[_int_7])
        {
          _if_7_8(_int_0, _array_int_0, _int_1, _array_int_1, _int_2, _int_3, _int_6, _int_7);
          _int_3++;
        }

        _int_6++;
        _int_7++;
        _scope_6_9(_int_0, _array_int_0, _int_1, _array_int_1, _int_2, _int_3, _int_6, _int_7);
      }

      if (_int_3 == _int_1)
      {
        _if_5_10(_int_0, _array_int_0, _int_1, _array_int_1, _int_2, _int_3, _int_6, _int_7);
        {
          printf("YES");
          {
            _break_7_11(_int_0, _array_int_0, _int_1, _array_int_1, _int_2, _int_3, _int_6, _int_7);
            break;
          }
          _scope_6_12(_int_0, _array_int_0, _int_1, _array_int_1, _int_2, _int_3, _int_6, _int_7);
        }
      }
      else
      {
        _else_5_14(_int_0, _array_int_0, _int_1, _array_int_1, _int_2, _int_3, _int_6, _int_7);
        if ((_int_3 != _int_1) && (_array_int_0 == ((_int_0 - _int_1) + 1)))
        {
          _if_6_13(_int_0, _array_int_0, _int_1, _array_int_1, _int_2, _int_3, _int_6, _int_7);
          printf("NO");
        }

      }

      _scope_4_15(_int_0, _array_int_0, _int_1, _array_int_1, _int_2, _int_3, _int_6, _int_7);
    }

    {
      _return_3_16(_int_0, _array_int_0, _int_1, _array_int_1, _int_2);
      return 0;
    }
    _scope_2_17(_int_0, _array_int_0, _int_1, _array_int_1, _int_2);
  }
}

