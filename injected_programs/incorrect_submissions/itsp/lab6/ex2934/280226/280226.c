#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _array_int_0[5555];
    int _int_0;
    int _int_1;
    int _int_2;
    scanf("%d", &_int_0);
    for (_int_1 = 0; _loop_3_2(_int_0, _int_1), _int_1 <= (_int_0 - 1); _int_1++)
    {
      scanf("%d ", &_array_int_0[_int_1]);
      _scope_4_3(_int_0, _int_1, _array_int_0);
    }

    for (_int_2 = 1; _loop_3_4(_int_0, _int_1, _array_int_0, _int_2), _int_2 <= _int_0; _int_2++)
    {
      for (_int_1 = _int_0 - 1; _loop_5_5(_int_0, _int_1, _array_int_0, _int_2), _int_1 >= (_int_0 - _int_2); _int_1--)
      {
        printf("%d", _array_int_0[_int_1]);
        _scope_6_6(_int_0, _int_1, _array_int_0, _int_2);
      }

      printf("\n");
      _scope_4_7(_int_0, _int_1, _array_int_0, _int_2);
    }

    {
      _return_3_8(_int_0, _int_1, _array_int_0, _int_2);
      return 0;
    }
    _scope_2_9(_int_0, _int_1, _array_int_0, _int_2);
  }
}

