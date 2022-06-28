#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_2;
    int _int_1;
    int _int_0 = 0;
    scanf("%d", &_int_1);
    for (_int_2 = 0; _loop_3_2(_int_0, _int_1, _int_2), _int_2 <= _int_1; _int_2 = _int_2 + 1)
      ;

    _int_0 = _int_0 + ((_int_2 * (_int_2 + 1)) / 2);
    printf("%d", _int_0);
    {
      _return_3_3(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_4(_int_0, _int_1, _int_2);
  }
}

