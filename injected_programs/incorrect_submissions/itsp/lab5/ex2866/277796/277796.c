#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_1 = 0;
    for (int i = 2; _loop_3_2(_int_0, _int_1), i <= _int_0; i++)
      if ((_int_0 % i) == 0)
    {
      _if_4_3(_int_0, _int_1);
      _int_1++;
    }


    if (_int_1 == 1)
    {
      _if_3_4(_int_0, _int_1);
      {
        _return_4_5(_int_0, _int_1);
        return _int_0;
      }
    }

    {
      _return_3_6(_int_0, _int_1);
      return 1;
    }
    _scope_2_7(_int_0, _int_1);
  }
}

int main()
{
  _function_1_8();
  {
    int _int_0;
    int j;
    scanf("%d", &_int_0);
    for (int i = 2; _loop_3_9(_int_0), i <= ((_int_0 - 2) / 2); i++)
    {
      if ((check_prime(i) != 1) && (check_prime(_int_0 - i) != 1))
      {
        _if_5_10(_int_0);
        printf("Yes");
      }
      else
      {
        _else_5_11(_int_0);
        printf("No");
      }

      _scope_4_12(_int_0);
    }

    {
      _return_3_13(_int_0);
      return 0;
    }
    _scope_2_14(_int_0);
  }
}

