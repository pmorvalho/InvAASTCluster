#include "vars_info.h"
#include <stdio.h>

int incsubseq(int [], int, int);
int incsubseq(int _array_int_0[20], int _int_0, int _int_1)
{
  _function_1_1(_array_int_0, _int_0, _int_1);
  {
    _int_1 = 0;
    int _int_4;
    int k;
    int _int_3;
    int _int_2 = 1;
    _int_3 = _array_int_0[_int_1];
    for (_int_4 = _int_1 + 1; _loop_3_2(_array_int_0, _int_0, _int_1, _int_2, _int_3, _int_4), _int_4 < _int_0; _int_4++)
    {
      if (_array_int_0[_int_4] > _int_3)
      {
        _if_5_3(_array_int_0, _int_0, _int_1, _int_2, _int_3, _int_4);
        {
          _int_2++;
          _int_3 = _array_int_0[_int_4];
          _scope_6_4(_array_int_0, _int_0, _int_1, _int_2, _int_3, _int_4);
        }
      }

      _scope_4_5(_array_int_0, _int_0, _int_1, _int_2, _int_3, _int_4);
    }

    {
      _return_3_6(_array_int_0, _int_0, _int_1, _int_2, _int_3, _int_4);
      return _int_2;
    }
    _scope_2_7(_array_int_0, _int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

int main()
{
  _function_1_8();
  {
    int _array_int_0[20];
    int _int_1;
    int _int_2;
    int j;
    int _int_3;
    int _int_0 = 0;
    int tmp;
    scanf("%d", &_int_1);
    for (_int_2 = 0; _loop_3_9(_int_0, _int_1, _int_2), _int_2 < _int_1; _int_2++)
    {
      scanf("%d", &_array_int_0[_int_2]);
      _scope_4_10(_int_0, _int_1, _int_2, _array_int_0);
    }

    for (_int_2 = 0; _loop_3_11(_int_0, _int_1, _int_2, _array_int_0), _int_2 < _int_1; _int_2++)
    {
      _int_3 = incsubseq(_array_int_0, _int_1, _int_2);
      if (_int_3 > _int_0)
      {
        _if_5_12(_int_0, _int_1, _int_2, _array_int_0, _int_3);
        _int_0 = _int_3;
      }

      _scope_4_13(_int_0, _int_1, _int_2, _array_int_0, _int_3);
    }

    printf("%d", _int_0);
    {
      _return_3_14(_int_0, _int_1, _int_2, _array_int_0, _int_3);
      return 0;
    }
    _scope_2_15(_int_0, _int_1, _int_2, _array_int_0, _int_3);
  }
}

