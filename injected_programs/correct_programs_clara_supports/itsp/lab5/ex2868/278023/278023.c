#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_1;
    for (_int_1 = 2; _loop_3_2(_int_0, _int_1), _int_1 <= (_int_0 - 1); _int_1++)
    {
      if ((_int_0 % _int_1) == 0)
      {
        _if_5_3(_int_0, _int_1);
        {
          {
            _return_7_4(_int_0, _int_1);
            return 0;
          }
          _scope_6_5(_int_0, _int_1);
        }
      }
      else
      {
        _else_5_7(_int_0, _int_1);
        {
          _continue_6_6(_int_0, _int_1);
          continue;
        }
      }

      _scope_4_8(_int_0, _int_1);
    }

    {
      _return_3_9(_int_0, _int_1);
      return 1;
    }
    _scope_2_10(_int_0, _int_1);
  }
}

int main()
{
  _function_1_11();
  {
    int _int_0;
    int _int_2;
    scanf("%d", &_int_0);
    int _int_1 = 0;
    for (_int_2 = 2; _loop_3_12(_int_0, _int_1, _int_2), _int_2 <= (_int_0 - 2); _int_2++)
    {
      if (check_prime(_int_2) && (check_prime(_int_2 + 2) == 1))
      {
        _if_5_13(_int_0, _int_1, _int_2);
        {
          _int_1++;
          _scope_6_14(_int_0, _int_1, _int_2);
        }
      }
      else
      {
        _else_5_16(_int_0, _int_1, _int_2);
        {
          _continue_6_15(_int_0, _int_1, _int_2);
          continue;
        }
      }

      _scope_4_17(_int_0, _int_1, _int_2);
    }

    printf("%d", _int_1);
    {
      _return_3_18(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_19(_int_0, _int_1, _int_2);
  }
}

