#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    scanf("%d", &_int_0);
    for (int i = 1; _loop_3_2(_int_0), i <= _int_0; i++)
    {
      for (int k = 5; _loop_5_3(_int_0), k >= 1; k--)
      {
        if (k == i)
        {
          _if_7_4(_int_0);
          {
            printf("*");
            _scope_8_5(_int_0);
          }
        }
        else
        {
          _else_7_7(_int_0);
          {
            printf("%d", k);
            _scope_8_6(_int_0);
          }
        }

        _scope_6_8(_int_0);
      }

      printf("\n");
      _scope_4_9(_int_0);
    }

    {
      _return_3_10(_int_0);
      return 0;
    }
    _scope_2_11(_int_0);
  }
}

