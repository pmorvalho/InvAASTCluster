#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_1;
    int _int_3;
    int _int_2;
    int _int_0 = 0;
    scanf("%d", &_int_1);
    _int_2 = _int_1;
    while (_loop_3_2(_int_0, _int_1, _int_2), _int_1 > 0)
    {
      _int_3 = _int_1 % 10;
      _int_0 = (_int_0 * 10) + _int_3;
      _int_1 = _int_1 / 10;
      _scope_4_3(_int_0, _int_1, _int_2, _int_3);
    }

    printf("Reverse of %d is %d", _int_2, _int_0);
    {
      _return_3_4(_int_0, _int_1, _int_2, _int_3);
      return 0;
    }
    _scope_2_5(_int_0, _int_1, _int_2, _int_3);
  }
}

