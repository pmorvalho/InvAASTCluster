#include "vars_info.h"
#include <stdio.h>

int _array_int_2[30];
int _array_int_0[15];
int _array_int_1[15];
int multiply_poly(int _int_0, int _int_1);
int print_poly(int _int_0);
int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    scanf("%d %d", &_int_0, &_int_1);
    int _int_2;
    for (_int_2 = 0; _loop_3_2(_int_0, _int_1, _int_2), _int_2 <= _int_0; _int_2++)
    {
      scanf("%d ", &_array_int_0[_int_2]);
      _scope_4_3(_int_0, _int_1, _int_2, _array_int_0);
    }

    for (_int_2 = 0; _loop_3_4(_int_0, _int_1, _int_2, _array_int_0), _int_2 <= _int_1; _int_2++)
    {
      scanf("%d ", &_array_int_1[_int_2]);
      _scope_4_5(_int_0, _int_1, _int_2, _array_int_0, _array_int_1);
    }

    multiply_poly(_int_0, _int_1);
    print_poly(_int_0 + _int_1);
    {
      _return_3_6(_int_0, _int_1, _int_2, _array_int_0, _array_int_1);
      return 0;
    }
    _scope_2_7(_int_0, _int_1, _int_2, _array_int_0, _array_int_1);
  }
}

int multiply_poly(int _int_0, int _int_1)
{
  _function_1_8(_array_int_0, _array_int_1, _int_0, _int_1);
  {
    int _int_2;
    int _int_3;
    for (_int_2 = 0; _loop_3_9(_array_int_0, _array_int_1, _int_0, _int_1, _int_2), _int_2 < 30; _int_2++)
      _array_int_2[_int_2] = 0;

    for (_int_2 = 0; _loop_3_10(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _array_int_2), _int_2 <= _int_0; _int_2++)
    {
      for (_int_3 = 0; _loop_5_11(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _array_int_2, _int_3), _int_3 <= _int_1; _int_3++)
      {
        _array_int_2[_int_2 + _int_3] = _array_int_2[_int_2 + _int_3] + (_array_int_0[_int_2] * _array_int_1[_int_3]);
        _scope_6_12(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _array_int_2, _int_3);
      }

      _scope_4_13(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _array_int_2, _int_3);
    }

    {
      _return_3_14(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _array_int_2, _int_3);
      return 0;
    }
    _scope_2_15(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _array_int_2, _int_3);
  }
}

int print_poly(int _int_0)
{
  _function_1_16(_array_int_0, _array_int_1, _array_int_2, _int_0);
  {
    int _int_1;
    for (_int_1 = _int_0; _loop_3_17(_array_int_0, _array_int_1, _array_int_2, _int_0, _int_1), _int_1 >= 0; _int_1--)
      printf("%d ", _array_int_2[_int_1]);

    {
      _return_3_18(_array_int_0, _array_int_1, _array_int_2, _int_0, _int_1);
      return 0;
    }
    _scope_2_19(_array_int_0, _array_int_1, _array_int_2, _int_0, _int_1);
  }
}

