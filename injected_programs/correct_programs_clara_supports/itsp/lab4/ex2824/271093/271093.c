#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    scanf("%d", &_int_0);
    if ((_int_0 % 4) == 0)
    {
      _if_3_2(_int_0);
      {
        if ((_int_0 % 100) == 0)
        {
          _if_5_3(_int_0);
          if ((_int_0 % 400) == 0)
          {
            _if_6_4(_int_0);
            printf("Leap Year");
          }
          else
          {
            _else_6_5(_int_0);
            printf("Not Leap Year");
          }

        }
        else
        {
          _else_5_6(_int_0);
          printf("Leap Year");
        }

        _scope_4_7(_int_0);
      }
    }
    else
    {
      _else_3_8(_int_0);
      printf("Not Leap Year");
    }

    {
      _return_3_9(_int_0);
      return 0;
    }
    _scope_2_10(_int_0);
  }
}

