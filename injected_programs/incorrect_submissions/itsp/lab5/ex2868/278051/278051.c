#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0);
int main()
{
  _function_1_1();
  {
    int _int_1;
    int _int_0;
    int _int_2;
    for (int i = 2; _loop_3_2(), i <= (_int_0 / 2); i = i + 1)
    {
      if ((_int_0 % i) == 0)
      {
        _if_5_3();
        {
          _int_1 = 1;
          {
            _break_7_4(_int_1);
            break;
          }
          _scope_6_5(_int_1);
        }
      }
      else
      {
        _else_5_6(_int_1);
        _int_1 = 0;
      }

      _scope_4_7(_int_1);
    }

    if (_int_1 == 1)
    {
      _if_3_8(_int_1);
      {
        {
          _return_5_9(_int_1);
          return 1;
        }
        _scope_4_10(_int_1);
      }
    }
    else
    {
      _else_3_13(_int_1);
      {
        {
          _return_5_11(_int_1);
          return 0;
        }
        _scope_4_12(_int_1);
      }
    }

    scanf("%d", &_int_2);
    int _int_3 = 0;
    int _int_4;
    for (_int_4 = 3; _loop_3_14(_int_1, _int_2, _int_3, _int_4), _int_4 <= (_int_2 - 2); _int_4 = _int_4 + 2)
    {
      if ((check_prime(_int_4) == 0) && (check_prime(_int_4 + 2) == 0))
      {
        _if_5_15(_int_1, _int_2, _int_3, _int_4);
        {
          _int_3 = _int_3 + 1;
          _scope_6_16(_int_1, _int_2, _int_3, _int_4);
        }
      }

      _scope_4_17(_int_1, _int_2, _int_3, _int_4);
    }

    printf("%d", _int_3);
    {
      _return_3_18(_int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_19(_int_1, _int_2, _int_3, _int_4);
  }
}

