#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_1;
    int _int_0 = 0;
    scanf("%d", &_int_1);
    do
    {
      _int_0 = _int_0 * 10;
      _int_0 = _int_0 + (_int_1 % 10);
      _int_1 = _int_1 / 10;
      _scope_4_3(_int_0, _int_1);
    }
    while (_loop_3_2(_int_0, _int_1), _int_1 != 0);
    printf("%d", _int_0);
    {
      _return_3_4(_int_0, _int_1);
      return 0;
    }
    _scope_2_5(_int_0, _int_1);
  }
}

