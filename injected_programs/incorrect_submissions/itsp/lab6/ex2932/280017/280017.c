#include "vars_info.h"
#include <stdio.h>

void read_into_array(int _array_int_0[], int _int_0)
{
  _function_1_1(_array_int_0, _int_0);
  {
    int _int_1;
    for (_int_1 = 0; _loop_3_2(_array_int_0, _int_0, _int_1), _int_1 < _int_0; _int_1++)
    {
      scanf("%d", &_array_int_0[_int_1]);
      _scope_4_3(_array_int_0, _int_0, _int_1);
    }

    _scope_2_4(_array_int_0, _int_0, _int_1);
  }
}

void extension(int _array_int_0[], int _int_0, int _int_1)
{
  _function_1_5(_array_int_0, _int_0, _int_1);
  {
    int _int_3;
    int _int_2 = _int_1;
    while (_loop_3_6(_array_int_0, _int_0, _int_1, _int_2), _int_2 <= _int_0)
    {
      _array_int_0[_int_2] = 0;
      for (_int_3 = 1; _loop_5_7(_array_int_0, _int_0, _int_1, _int_2, _int_3), _int_3 <= _int_1; _int_3++)
      {
        _array_int_0[_int_2] += _array_int_0[_int_2 - _int_3];
        _scope_6_8(_array_int_0, _int_0, _int_1, _int_2, _int_3);
      }

      _scope_4_9(_array_int_0, _int_0, _int_1, _int_2, _int_3);
    }

    _scope_2_10(_array_int_0, _int_0, _int_1, _int_2, _int_3);
  }
}

int main()
{
  _function_1_11();
  {
    int _int_0;
    int _int_1;
    int _int_2[30];
    scanf("%d %d", &_int_0, &_int_1);
    read_into_array(_int_2, _int_0);
    extension(_int_2, _int_1, _int_0);
    printf("%d", _int_2[_int_1]);
    _scope_2_12(_int_0, _int_1, _int_2);
  }
}

