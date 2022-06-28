#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_1;
    for (_int_1 = 2; _loop_3_2(_int_0, _int_1), _int_1 < _int_0; _int_1++)
    {
      if ((_int_0 % _int_1) != 0)
      {
        _if_5_3(_int_0, _int_1);
        {
          _continue_6_4(_int_0, _int_1);
          continue;
        }
      }
      else
      {
        _else_5_6(_int_0, _int_1);
        {
          _break_6_5(_int_0, _int_1);
          break;
        }
      }

      _scope_4_7(_int_0, _int_1);
    }

    _int_1 = _int_1 - 1;
    if ((_int_0 % _int_1) != 0)
    {
      _if_3_8(_int_0, _int_1);
      {
        _return_4_9(_int_0, _int_1);
        return 1;
      }
    }
    else
    {
      _else_3_11(_int_0, _int_1);
      {
        _return_4_10(_int_0, _int_1);
        return 0;
      }
    }

    _scope_2_12(_int_0, _int_1);
  }
}

int check_sum_of_primes(int _int_0)
{
  _function_1_13(_int_0);
  {
    int _int_1;
    int _int_2;
    for (_int_1 = 2; _loop_3_14(_int_0, _int_1), _int_1 < _int_0; _int_1++)
    {
      _int_2 = _int_0 - _int_1;
      if (check_prime(_int_1) && check_prime(_int_2))
      {
        _if_5_15(_int_0, _int_1, _int_2);
        {
          _return_6_16(_int_0, _int_1, _int_2);
          return 1;
        }
      }
      else
      {
        _else_5_18(_int_0, _int_1, _int_2);
        {
          _continue_6_17(_int_0, _int_1, _int_2);
          continue;
        }
      }

      _scope_4_19(_int_0, _int_1, _int_2);
    }

    {
      _return_3_20(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_21(_int_0, _int_1, _int_2);
  }
}

int main()
{
  _function_1_22();
  {
    int _int_0;
    scanf("%d", &_int_0);
    if (check_sum_of_primes(_int_0))
    {
      _if_3_23(_int_0);
      {
        printf("Yes");
        _scope_4_24(_int_0);
      }
    }
    else
    {
      _else_3_26(_int_0);
      {
        printf("No");
        _scope_4_25(_int_0);
      }
    }

    {
      _return_3_27(_int_0);
      return 0;
    }
    _scope_2_28(_int_0);
  }
}

