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
    int _int_3;
    scanf("%d", &_int_0);
    for (_int_1 = 0; _loop_3_2(_int_0, _int_1), _int_1 <= (_int_0 - 1); _int_1++)
    {
      scanf("%d", &_array_int_0[_int_1]);
      _scope_4_3(_int_0, _int_1, _array_int_0);
    }

    for (_int_2 = 0; _loop_3_4(_int_0, _int_1, _array_int_0, _int_2), _int_2 <= (_int_0 - 1); _int_2++)
    {
      printf("\n");
      {
        for (_int_3 = 0; _loop_6_5(_int_0, _int_1, _array_int_0, _int_2, _int_3), _int_3 <= _int_2; _int_3++)
          printf("%d", _array_int_0[(_int_0 - _int_3) - 1]);

        _scope_5_6(_int_0, _int_1, _array_int_0, _int_2, _int_3);
      }
      _scope_4_7(_int_0, _int_1, _array_int_0, _int_2, _int_3);
    }

    {
      _return_3_8(_int_0, _int_1, _array_int_0, _int_2, _int_3);
      return 0;
    }
    _scope_2_9(_int_0, _int_1, _array_int_0, _int_2, _int_3);
  }
}

