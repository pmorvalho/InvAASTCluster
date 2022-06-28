#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    scanf("%d ", &_int_0);
    int _int_1;
    scanf("%d\n", &_int_1);
    int _int_2;
    int _array_int_0[20];
    for (_int_2 = 0; _loop_3_2(_int_0, _int_1, _int_2), _int_2 < (_int_0 - 1); _int_2 = _int_2 + 1)
      scanf("%d", &_array_int_0[_int_2]);

    int _array_int_1[30];
    for (_int_2 = 0; _loop_3_3(_int_0, _int_1, _int_2, _array_int_0), (_int_2 >= 0) && (_int_2 < _int_0); _int_2 = _int_2 + 1)
    {
      _array_int_1[_int_2] = _array_int_0[_int_2];
      _scope_4_4(_int_0, _int_1, _int_2, _array_int_0, _array_int_1);
    }

    for (_int_2 = _int_0; _loop_3_5(_int_0, _int_1, _int_2, _array_int_0, _array_int_1), _int_2 <= _int_1; _int_2 = _int_2 + 1)
    {
      int _int_3;
      _int_3 = 0;
      int _int_4;
      _int_4 = _int_2 - _int_0;
      int _int_5;
      for (_int_5 = _int_2 - 1; _loop_5_6(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3, _int_4, _int_5), _int_5 >= _int_4; _int_5--)
        _int_3 = _int_3 + _array_int_1[_int_5];

      _array_int_1[_int_2] = _int_3;
      _scope_4_7(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3, _int_4, _int_5);
    }

    printf("%d", _array_int_1[_int_1]);
    {
      _return_3_8(_int_0, _int_1, _int_2, _array_int_0, _array_int_1);
      return 0;
    }
    _scope_2_9(_int_0, _int_1, _int_2, _array_int_0, _array_int_1);
  }
}

