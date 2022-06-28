#include "vars_info.h"
#include <stdio.h>

void print_array(int _array_int_0[], int _int_0)
{
  _function_1_1(_array_int_0, _int_0);
  {
    int _int_1;
    int _int_2;
    for (_int_1 = 1; _loop_3_2(_array_int_0, _int_0, _int_1), _int_1 <= _int_0; _int_1++)
    {
      for (_int_2 = 0; _loop_5_3(_array_int_0, _int_0, _int_1, _int_2), _int_2 < _int_1; _int_2++)
        printf("%d ", _array_int_0[_int_2]);

      printf("\n");
      _scope_4_4(_array_int_0, _int_0, _int_1, _int_2);
    }

    _scope_2_5(_array_int_0, _int_0, _int_1, _int_2);
  }
}

int main()
{
  _function_1_6();
  {
    int _int_1;
    int _array_int_0[100];
    int _int_0;
    scanf("%d \n", &_int_0);
    for (_int_1 = 0; _loop_3_7(_int_0, _int_1), _int_1 < _int_0; _int_1++)
      scanf("%d ", &_array_int_0[_int_1]);

    print_array(_array_int_0, _int_0);
    {
      _return_3_8(_int_0, _int_1, _array_int_0);
      return 0;
    }
    _scope_2_9(_int_0, _int_1, _array_int_0);
  }
}

