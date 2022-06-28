#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    scanf("%d", &_int_0);
    if (((_int_0 % 4) == 0) && ((_int_0 % 100) != 0))
    {
      _if_3_2(_int_0);
      {
        printf("Leap Year");
        {
          _return_5_3(_int_0);
          return 0;
        }
        _scope_4_4(_int_0);
      }
    }

    if ((((_int_0 % 4) == 0) && ((_int_0 % 100) == 0)) && ((_int_0 % 400) == 0))
    {
      _if_3_5(_int_0);
      printf("Leap Year");
    }
    else
    {
      _else_3_6(_int_0);
      printf("Not Leap Year");
    }

    {
      _return_3_7(_int_0);
      return 0;
    }
    _scope_2_8(_int_0);
  }
}

