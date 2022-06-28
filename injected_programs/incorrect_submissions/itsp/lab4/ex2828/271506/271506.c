#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    char _char_0;
    scanf("%c", &_char_0);
    if (('x' >= 65) && ('x' <= 90))
    {
      _if_3_2(_char_0);
      {
        printf("Capital Letter");
        _scope_4_3(_char_0);
      }
    }
    else
    {
      _else_3_9(_char_0);
      if (('x' >= 48) && ('x' <= 57))
      {
        _if_4_4(_char_0);
        {
          printf("Digit");
          _scope_5_5(_char_0);
        }
      }
      else
      {
        _else_4_8(_char_0);
        if (('x' >= 97) && ('x' <= 122))
        {
          _if_5_6(_char_0);
          {
            printf("Small Letter");
            _scope_6_7(_char_0);
          }
        }

      }

    }

    {
      _return_3_10(_char_0);
      return 0;
    }
    _scope_2_11(_char_0);
  }
}

