#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_2;
    int _int_3;
    int _int_5;
    int _int_1;
    int _int_0 = 0;
    int _int_4;
    scanf("%d", &_int_1);
    int _array_int_0[20];
    for (_int_2 = 0; _loop_3_2(_int_0, _int_1, _int_2), _int_2 <= (_int_1 - 1); _int_2++)
    {
      scanf("%d", &_array_int_0[_int_2]);
      _scope_4_3(_int_0, _int_1, _int_2, _array_int_0);
    }

    scanf("%d", &_int_3);
    for (_int_4 = 0; _loop_3_4(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4), _int_4 <= (_int_1 - _int_3); _int_4++)
    {
      {
        for (_int_5 = _int_4; _loop_6_5(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4, _int_5), _int_5 <= ((_int_4 + _int_3) - 1); _int_5++)
        {
          _int_0 = _int_0 + _array_int_0[_int_5];
          _scope_7_6(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4, _int_5);
        }

        _scope_5_7(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4, _int_5);
      }
      {
        printf("%d\n", _int_0);
        _scope_5_8(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4, _int_5);
      }
      _int_0 = 0;
      _scope_4_9(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4, _int_5);
    }

    {
      _return_3_10(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4, _int_5);
      return 0;
    }
    _scope_2_11(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4, _int_5);
  }
}

