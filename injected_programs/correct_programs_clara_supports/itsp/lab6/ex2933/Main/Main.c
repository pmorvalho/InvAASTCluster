#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _array_int_0[20];
    int _int_0;
    int _array_int_1[20];
    int _int_2;
    int _int_1;
    int _int_4;
    int _int_3;
    scanf("%d", &_int_0);
    for (_int_1 = 0; _loop_3_2(_int_0, _int_1), _int_1 < _int_0; _int_1++)
    {
      scanf("%d", &_array_int_0[_int_1]);
      _scope_4_3(_int_0, _int_1, _array_int_0);
    }

    scanf("%d", &_int_2);
    for (_int_1 = 0; _loop_3_4(_int_0, _int_1, _array_int_0, _int_2), _int_1 < _int_2; _int_1++)
    {
      scanf("%d", &_array_int_1[_int_1]);
      _scope_4_5(_int_0, _int_1, _array_int_0, _int_2, _array_int_1);
    }

    for (_int_1 = 0; _loop_3_6(_int_0, _int_1, _array_int_0, _int_2, _array_int_1), _int_1 < (_int_0 - _int_2); _int_1++)
    {
      _int_3 = 1;
      for (_int_4 = 0; _loop_5_7(_int_0, _int_1, _array_int_0, _int_2, _array_int_1, _int_3, _int_4), _int_4 < _int_2; _int_4++)
      {
        if (_array_int_0[_int_1 + _int_4] != _array_int_1[_int_4])
        {
          _if_7_8(_int_0, _int_1, _array_int_0, _int_2, _array_int_1, _int_3, _int_4);
          {
            _int_3 = 0;
            _scope_8_9(_int_0, _int_1, _array_int_0, _int_2, _array_int_1, _int_3, _int_4);
          }
        }

        _scope_6_10(_int_0, _int_1, _array_int_0, _int_2, _array_int_1, _int_3, _int_4);
      }

      if (_int_3 == 1)
      {
        _if_5_11(_int_0, _int_1, _array_int_0, _int_2, _array_int_1, _int_3, _int_4);
        {
          printf("YES\n");
          {
            _return_7_12(_int_0, _int_1, _array_int_0, _int_2, _array_int_1, _int_3, _int_4);
            return 0;
          }
          _scope_6_13(_int_0, _int_1, _array_int_0, _int_2, _array_int_1, _int_3, _int_4);
        }
      }

      _scope_4_14(_int_0, _int_1, _array_int_0, _int_2, _array_int_1, _int_3, _int_4);
    }

    printf("NO\n");
    {
      _return_3_15(_int_0, _int_1, _array_int_0, _int_2, _array_int_1, _int_3, _int_4);
      return 0;
    }
    _scope_2_16(_int_0, _int_1, _array_int_0, _int_2, _array_int_1, _int_3, _int_4);
  }
}

