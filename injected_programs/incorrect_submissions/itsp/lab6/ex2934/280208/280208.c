#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_1;
    int _int_0;
    int _int_2;
    int _int_3;
    int x;
    int _array_int_0[5555];
    int _array_int_1[5555];
    scanf("%d", &_int_0);
    for (_int_1 = 0; _loop_3_2(_int_0, _int_1), _int_1 <= (_int_0 - 1); _int_1++)
    {
      scanf("%d", &_int_2);
      _array_int_0[_int_1] = _int_2;
      _scope_4_3(_int_0, _int_1, _int_2, _array_int_0);
    }

    for (_int_1 = 0; _loop_3_4(_int_0, _int_1, _int_2, _array_int_0), _int_1 < _int_0; _int_1++)
    {
      _array_int_1[_int_1] = _array_int_0[(_int_0 - 1) - _int_1];
      _scope_4_5(_int_0, _int_1, _int_2, _array_int_0, _array_int_1);
    }

    for (_int_1 = 0; _loop_3_6(_int_0, _int_1, _int_2, _array_int_0, _array_int_1), _int_1 < _int_0; _int_1++)
    {
      for (_int_3 = 0; _loop_5_7(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3), _int_3 <= _int_1; _int_3++)
      {
        printf(" %d", _array_int_1[_int_3]);
        _scope_6_8(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3);
      }

      printf("\n");
      _scope_4_9(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3);
    }

    {
      _return_3_10(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3);
      return 0;
    }
    _scope_2_11(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3);
  }
}

