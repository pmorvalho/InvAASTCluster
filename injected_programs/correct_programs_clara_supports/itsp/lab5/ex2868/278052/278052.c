#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_1 = 0;
    for (int l = 1; _loop_3_2(_int_0, _int_1), l <= _int_0; l++)
    {
      if ((_int_0 % l) == 0)
      {
        _if_5_3(_int_0, _int_1);
        _int_1++;
      }

      _scope_4_4(_int_0, _int_1);
    }

    if (_int_1 == 2)
    {
      _if_3_5(_int_0, _int_1);
      {
        {
          _return_5_6(_int_0, _int_1);
          return 1;
        }
        _scope_4_7(_int_0, _int_1);
      }
    }
    else
    {
      _else_3_10(_int_0, _int_1);
      {
        {
          _return_5_8(_int_0, _int_1);
          return 0;
        }
        _scope_4_9(_int_0, _int_1);
      }
    }

    _scope_2_11(_int_0, _int_1);
  }
}

int main()
{
  _function_1_12();
  {
    int _int_1;
    int _int_3;
    int _int_4;
    int _int_2;
    int _int_0 = 0;
    scanf("%d", &_int_1);
    for (_int_2 = 2; _loop_3_13(_int_0, _int_1, _int_2), _int_2 <= _int_1; _int_2++)
    {
      _int_3 = check_prime(_int_2);
      _int_4 = check_prime(_int_2 + 2);
      if (((_int_3 == 1) && (_int_4 == 1)) && ((_int_2 + 2) <= _int_1))
      {
        _if_5_14(_int_0, _int_1, _int_2, _int_3, _int_4);
        {
          _int_0++;
          _scope_6_15(_int_0, _int_1, _int_2, _int_3, _int_4);
        }
      }

      _scope_4_16(_int_0, _int_1, _int_2, _int_3, _int_4);
    }

    printf("%d", _int_0);
    {
      _return_3_17(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_18(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

