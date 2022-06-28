#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    int _array_int_0[20];
    scanf("%d", &_int_0);
    for (int i = 0; _loop_3_2(_int_0), i < _int_0; i++)
    {
      scanf("%d", &_array_int_0[i]);
      _scope_4_3(_int_0, _array_int_0);
    }

    scanf("%d", &_int_1);
    for (int i = 0; _loop_3_4(_int_0, _array_int_0, _int_1), i <= (_int_0 - _int_1); i = i + 1)
    {
      _int_2 = 0;
      for (int j = i; _loop_5_5(_int_0, _array_int_0, _int_1, _int_2), j < (i + _int_1); j = j + 1)
      {
        _int_2 = _int_2 + _array_int_0[j];
        _scope_6_6(_int_0, _array_int_0, _int_1, _int_2);
      }

      printf("%d\n", _int_2);
      _scope_4_7(_int_0, _array_int_0, _int_1, _int_2);
    }

    {
      _return_3_8(_int_0, _array_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_9(_int_0, _array_int_0, _int_1, _int_2);
  }
}

