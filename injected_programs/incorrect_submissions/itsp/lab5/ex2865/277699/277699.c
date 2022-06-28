#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    for (_int_0 = 1; _loop_3_2(_int_0), _int_0 <= 5; _int_0++)
    {
      for (_int_1 = 5; _loop_5_3(_int_0, _int_1), _int_1 >= 1; _int_1--)
      {
        if (_int_0 == _int_1)
        {
          _if_7_4(_int_0, _int_1);
          printf("*");
        }
        else
        {
          _else_7_5(_int_0, _int_1);
          printf("%d", _int_1);
        }

        _scope_6_6(_int_0, _int_1);
      }

      printf("\n");
      _scope_4_7(_int_0, _int_1);
    }

    {
      _return_3_8(_int_0, _int_1);
      return 0;
    }
    _scope_2_9(_int_0, _int_1);
  }
}

