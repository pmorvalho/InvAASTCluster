#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_2;
    int _int_1;
    int _int_3;
    int _int_0 = 0;
    scanf("%d", &_int_1);
    for (_int_2 = 1; _loop_3_2(_int_0, _int_1, _int_2), _int_2 <= _int_1; _int_2++)
    {
      for (_int_3 = 1; _loop_5_3(_int_0, _int_1, _int_2, _int_3), _int_3 <= _int_2; _int_3++)
        _int_0 = _int_0 + _int_3;

      _scope_4_4(_int_0, _int_1, _int_2, _int_3);
    }

    printf("%d", _int_0);
    {
      _return_3_5(_int_0, _int_1, _int_2, _int_3);
      return 0;
    }
    _scope_2_6(_int_0, _int_1, _int_2, _int_3);
  }
}

