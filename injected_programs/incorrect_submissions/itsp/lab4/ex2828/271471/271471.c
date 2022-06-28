#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    char _char_0;
    scanf("%c", _char_0);
    if ((97 <= _char_0) && (_char_0 <= 122))
    {
      _if_3_2(_char_0);
      printf("Small Letter");
    }

    if ((65 <= _char_0) && (_char_0 <= 90))
    {
      _if_3_3(_char_0);
      printf("Capital Letter");
    }

    if ((48 <= _char_0) && (_char_0 <= 57))
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

