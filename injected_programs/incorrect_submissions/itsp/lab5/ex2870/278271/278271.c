#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0);
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
          _return_6_5(_int_0, _int_1);
          return 0;
        }
      }

      _scope_4_7(_int_0, _int_1);
    }

    {
      _return_3_8(_int_0, _int_1);
      return _int_0;
    }
    _scope_2_9(_int_0, _int_1);
  }
}

int main()
{
  _function_1_10();
  {
    int _int_0;
    int _int_1;
    scanf("%d", &_int_0);
    for (_int_1 = _int_0; _loop_3_11(_int_0, _int_1), _int_1 >= _int_0; _int_1++)
    {
      if (check_prime(_int_1))
      {
        _if_5_12(_int_0, _int_1);
        {
          {
            _break_7_13(_int_0, _int_1);
            break;
          }
          _scope_6_14(_int_0, _int_1);
        }
      }
      else
      {
        _else_5_17(_int_0, _int_1);
        {
          {
            _continue_7_15(_int_0, _int_1);
            continue;
          }
          _scope_6_16(_int_0, _int_1);
        }
      }

      _scope_4_18(_int_0, _int_1);
    }

    printf("%d", _int_1);
    {
      _return_3_19(_int_0, _int_1);
      return 0;
    }
    _scope_2_20(_int_0, _int_1);
  }
}

