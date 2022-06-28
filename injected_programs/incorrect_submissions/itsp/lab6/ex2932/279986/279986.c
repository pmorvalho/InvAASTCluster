#include "vars_info.h"
#include <stdio.h>

void input(int [], int);
void assign(int [], int [], int);
void input(int _array_int_0[], int _int_0)
{
  _function_1_1(_array_int_0, _int_0);
  {
    int _int_1;
    for (_int_1 = 0; _loop_3_2(_array_int_0, _int_0, _int_1), _int_1 < _int_0; _int_1++)
      scanf("%d ", &_array_int_0[_int_1]);

    _scope_2_3(_array_int_0, _int_0, _int_1);
  }
}

void assign(int _array_int_0[], int _array_int_1[], int _int_0)
{
  _function_1_4(_array_int_0, _array_int_1, _int_0);
  {
    int _int_1 = 0;
    int _int_2;
    while (_loop_3_5(_array_int_0, _array_int_1, _int_0, _int_1), _int_1 < _int_0)
    {
      _array_int_0[_int_1] = _array_int_1[_int_1];
      _int_1++;
      _scope_4_6(_array_int_0, _array_int_1, _int_0, _int_1);
    }

    while (_loop_3_7(_array_int_0, _array_int_1, _int_0, _int_1), _int_1 <= 30)
    {
      _array_int_0[_int_1] = 0;
      for (_int_2 = 1; _loop_5_8(_array_int_0, _array_int_1, _int_0, _int_1, _int_2), _int_2 <= _int_0; _int_2++)
        _array_int_0[_int_1] += _array_int_0[_int_1 - _int_2];

      _int_1++;
      _scope_4_9(_array_int_0, _array_int_1, _int_0, _int_1, _int_2);
    }

    _scope_2_10(_array_int_0, _array_int_1, _int_0, _int_1, _int_2);
  }
}

int main()
{
  _function_1_11();
  {
    int _int_0;
    int _int_1;
    int _int_2[20];
    int _int_3[30];
    scanf("%d %d", &_int_0, &_int_1);
    input(_int_2, _int_1);
    assign(_int_3, _int_2, _int_0);
    printf("%d", _int_3[_int_1]);
    {
      _return_3_12(_int_0, _int_1, _int_2, _int_3);
      return 0;
    }
    _scope_2_13(_int_0, _int_1, _int_2, _int_3);
  }
}

