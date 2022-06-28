#include "vars_info.h"
#include <stdio.h>

int max(int _int_0, int _int_1)
{
  _function_1_1(_int_0, _int_1);
  {
    {
      _return_3_2(_int_0, _int_1);
      return (_int_0 > _int_1) ? (_int_0) : (_int_1);
    }
    _scope_2_3(_int_0, _int_1);
  }
}

int main()
{
  _function_1_4();
  {
    int _array_int_0[20];
    int _array_int_1[20];
    int _int_2;
    int _int_0 = 0;
    int _int_1 = 0;
    scanf("%d", &_int_2);
    for (_int_0 = 0; _loop_3_5(_int_0, _int_1, _int_2), _int_0 < _int_2; _int_0++)
    {
      scanf("%d", &_array_int_0[_int_0]);
      _scope_4_6(_int_0, _int_1, _int_2, _array_int_0);
    }

    for (_int_0 = 0; _loop_3_7(_int_0, _int_1, _int_2, _array_int_0), _int_0 < _int_2; _int_0++)
      _array_int_1[_int_0] = 1;

    int _int_3 = 1;
    for (_int_0 = 1; _loop_3_8(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3), _int_0 < _int_2; _int_0++)
    {
      for (_int_1 = 0; _loop_5_9(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3), _int_1 < _int_0; _int_1++)
      {
        if (((_array_int_1[_int_1] + 1) >= _int_3) && (_array_int_0[_int_0] > _array_int_0[_int_1]))
        {
          _if_7_10(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3);
          {
            _int_3 = _array_int_1[_int_1] + 1;
            _array_int_1[_int_0] = _array_int_1[_int_1] + 1;
            _scope_8_11(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3);
          }
        }

        _scope_6_12(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3);
      }

      _scope_4_13(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3);
    }

    printf("%d", _int_3);
    {
      _return_3_14(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3);
      return 0;
    }
    _scope_2_15(_int_0, _int_1, _int_2, _array_int_0, _array_int_1, _int_3);
  }
}

