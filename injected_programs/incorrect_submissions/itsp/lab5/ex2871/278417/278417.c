#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    int _int_3;
    int _int_4;
    scanf("%d", &_int_0);
    scanf("%d", &_int_1);
    scanf("%d", &_int_2);
    for (_int_3 = 0; _loop_3_2(_int_0, _int_1, _int_2, _int_3), (_int_3 <= _int_2, _int_3++);)
    {
      for (_int_4 = 0; _loop_5_3(_int_0, _int_1, _int_2, _int_3, _int_4), (_int_4 <= _int_1, _int_4++);)
      {
        printf("%d", _int_0);
        _scope_6_4(_int_0, _int_1, _int_2, _int_3, _int_4);
      }

      _scope_4_5(_int_0, _int_1, _int_2, _int_3, _int_4);
    }

    {
      _return_3_6(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_7(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

