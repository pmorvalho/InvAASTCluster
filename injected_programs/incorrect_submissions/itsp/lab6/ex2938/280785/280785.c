#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _array_int_0[20];
    int _int_0 = 0;
    int _int_2;
    int _int_3;
    int _int_1 = 0;
    int _int_4;
    scanf("%d\n", &_int_2);
    if (_int_2 <= 20)
    {
      _if_3_2(_int_0, _int_1, _int_2);
      {
        while (_loop_5_3(_int_0, _int_1, _int_2), _int_0 < _int_2)
        {
          scanf("%d", &_array_int_0[_int_0]);
          _int_0 = _int_0 + 1;
          _scope_6_4(_int_0, _int_1, _int_2, _array_int_0);
        }

        printf("\n");
        scanf("%d", &_int_3);
        for (_int_4 = 0; _loop_5_5(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4), _int_4 < (_int_2 - (_int_3 - 1)); _int_4++)
        {
          for (_int_0 = _int_4; _loop_7_6(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4), _int_0 < (_int_3 + _int_4); _int_0++)
          {
            _int_1 = _array_int_0[_int_0] + _int_1;
            _scope_8_7(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4);
          }

          printf("%d", _int_1);
          _scope_6_8(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4);
        }

        _scope_4_9(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4);
      }
    }

    {
      _return_3_10(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4);
      return 0;
    }
    _scope_2_11(_int_0, _int_1, _int_2, _array_int_0, _int_3, _int_4);
  }
}
