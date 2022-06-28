#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _array_int_0[20];
    int _array_int_1[20];
    scanf("%d %d\n", &_int_0, &_int_1);
    for (int i = 1; _loop_3_2(_int_0, _int_1), i < (_int_0 + 1); i++)
    {
      scanf("%d ", &_array_int_0[i - 1]);
      _scope_4_3(_int_0, _int_1, _array_int_0);
    }

    scanf("\n");
    for (int j = 1; _loop_3_4(_int_0, _int_1, _array_int_0), j < (_int_1 + 1); j++)
    {
      scanf("%d", &_array_int_1[j - 1]);
      _scope_4_5(_int_0, _int_1, _array_int_0, _array_int_1);
    }

    printf("%d\n", _int_0 + _int_1);
    int _array_int_2[40];
    for (int q = 0; _loop_3_6(_int_0, _int_1, _array_int_0, _array_int_1), q < (_int_0 + _int_1); q++)
    {
      _array_int_2[q] = 0;
      _scope_4_7(_int_0, _int_1, _array_int_0, _array_int_1, _array_int_2);
    }

    for (int k = 0; _loop_3_8(_int_0, _int_1, _array_int_0, _array_int_1, _array_int_2), k < (_int_0 - 1); k++)
    {
      for (int l = 0; _loop_5_9(_int_0, _int_1, _array_int_0, _array_int_1, _array_int_2), l <= (_int_1 - 1); l++)
      {
        _array_int_2[k + l] = _array_int_2[k + l] + (_array_int_0[k] * _array_int_1[l]);
        _scope_6_10(_int_0, _int_1, _array_int_0, _array_int_1, _array_int_2);
      }

      _scope_4_11(_int_0, _int_1, _array_int_0, _array_int_1, _array_int_2);
    }

    for (int z = 0; _loop_3_12(_int_0, _int_1, _array_int_0, _array_int_1, _array_int_2), z < (_int_0 + _int_1); z++)
    {
      printf("%d ", _array_int_2[z]);
      _scope_4_13(_int_0, _int_1, _array_int_0, _array_int_1, _array_int_2);
    }

    {
      _return_3_14(_int_0, _int_1, _array_int_0, _array_int_1, _array_int_2);
      return 0;
    }
    _scope_2_15(_int_0, _int_1, _array_int_0, _array_int_1, _array_int_2);
  }
}

