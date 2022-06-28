#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    scanf("%d", &_int_0);
    if ((_int_0 % 400) == 0)
    {
      _if_3_2(_int_0);
      printf("Leap Year\n");
    }
    else
    {
      _else_3_7(_int_0);
      if ((_int_0 % 100) == 0)
      {
        _if_4_3(_int_0);
        printf("Not Leap Year\n");
      }
      else
      {
        _else_4_6(_int_0);
        if ((_int_0 % 4) == 0)
        {
          _if_5_4(_int_0);
          printf("Leap Year\n");
        }
        else
        {
          _else_5_5(_int_0);
          printf("Not Leap year\n");
        }

      }

    }

    {
      _return_3_8(_int_0);
      return 0;
    }
    _scope_2_9(_int_0);
  }
}

