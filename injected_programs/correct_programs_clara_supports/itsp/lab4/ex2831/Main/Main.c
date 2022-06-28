#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_1;
    int _int_0 = 0;
    int _int_2;
    scanf("%d", &_int_1);
    _int_2 = _int_1;
    while (_loop_3_2(_int_0, _int_1, _int_2), _int_1 > 0)
    {
      _int_0 = _int_0 * 10;
      _int_0 = _int_0 + (_int_1 % 10);
      _int_1 /= 10;
      _scope_4_3(_int_0, _int_1, _int_2);
    }

    printf("Reverse of %d is %d", _int_2, _int_0);
    _scope_2_4(_int_0, _int_1, _int_2);
  }
}

