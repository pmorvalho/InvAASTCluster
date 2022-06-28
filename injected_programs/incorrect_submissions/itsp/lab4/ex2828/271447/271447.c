#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    char _char_0;
    scanf("%c", &_char_0);
    if (('a' <= _char_0) && (_char_0 <= 'z'))
    {
      _if_3_2(_char_0);
      {
        printf("Small Letter");
        _scope_4_3(_char_0);
      }
    }
    else
    {
      _else_3_6(_char_0);
      {
        if (('A' <= _char_0) && (_char_0 <= 'Z'))
        {
          _if_5_4(_char_0);
          ;
        }

        printf("Capital Letter");
        _scope_4_5(_char_0);
      }
    }

    {
      _return_3_7(_char_0);
      return 0;
    }
    _scope_2_8(_char_0);
  }
}

