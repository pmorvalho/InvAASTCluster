#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    char _char_0;
    scanf("%c", &_char_0);
    if ((_char_0 <= 'Z') && (_char_0 >= 'A'))
    {
      _if_3_2(_char_0);
      printf("Capital letter");
    }

    if ((_char_0 <= 'z') && (_char_0 >= 'a'))
    {
      _if_3_3(_char_0);
      printf("Small Letter");
    }

    if ((_char_0 >= '1') && (_char_0 <= '9'))
    {
      _if_3_4(_char_0);
      printf("Digit");
    }

    {
      _return_3_5(_char_0);
      return 0;
    }
    _scope_2_6(_char_0);
  }
}

