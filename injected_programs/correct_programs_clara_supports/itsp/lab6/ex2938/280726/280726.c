#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _array_int_0[20];
    int _int_0;
    int _int_1;
    scanf("%d", &_int_0);
    for (_int_1 = 0; _loop_3_2(_int_0, _int_1), _int_1 < _int_0; _int_1++)
    {
      scanf("%d", &_array_int_0[_int_1]);
      _scope_4_3(_int_0, _int_1, _array_int_0);
    }

    int _int_4;
    int _int_5;
    int _int_3;
    int _int_2;
    scanf("%d", &_int_2);
    for (_int_3 = 0; _loop_3_4(_int_0, _int_1, _array_int_0, _int_2, _int_3), _int_3 <= (_int_0 - _int_2); _int_3++)
    {
      _int_4 = 0;
      for (_int_5 = 0; _loop_5_5(_int_0, _int_1, _array_int_0, _int_2, _int_3, _int_4, _int_5), _int_5 < _int_2; _int_5 = _int_5 + 1)
      {
        _int_4 = _int_4 + _array_int_0[_int_3 + _int_5];
        _scope_6_6(_int_0, _int_1, _array_int_0, _int_2, _int_3, _int_4, _int_5);
      }

      printf("%d\n", _int_4);
      _scope_4_7(_int_0, _int_1, _array_int_0, _int_2, _int_3, _int_4, _int_5);
    }

    {
      _return_3_8(_int_0, _int_1, _array_int_0, _int_2, _int_3, _int_4, _int_5);
      return 0;
    }
    _scope_2_9(_int_0, _int_1, _array_int_0, _int_2, _int_3, _int_4, _int_5);
  }
}

