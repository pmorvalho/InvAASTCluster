#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    scanf("%d", &_int_0);
    if ((_int_0 % 4) != 0)
    {
      _if_3_2(_int_0);
      {
        printf("Not Leap Year");
        _scope_4_3(_int_0);
      }
    }
    else
    {
      _else_3_11(_int_0);
      if ((_int_0 % 100) != 0)
      {
        _if_4_4(_int_0);
        {
          printf("Leap Year");
          _scope_5_5(_int_0);
        }
      }
      else
      {
        _else_4_10(_int_0);
        if ((_int_0 % 400) != 0)
        {
          _if_5_6(_int_0);
          {
            printf("Not Leap Year");
            _scope_6_7(_int_0);
          }
        }
        else
        {
          _else_5_9(_int_0);
          {
            printf("Leap Year");
            _scope_6_8(_int_0);
          }
        }

      }

    }

    {
      _return_3_12(_int_0);
      return 0;
    }
    _scope_2_13(_int_0);
  }
}

