#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0);
int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    if (_int_0 == 1)
    {
      _if_3_2(_int_0);
      {
        {
          _return_5_3(_int_0);
          return 0;
        }
        _scope_4_4(_int_0);
      }
    }

    int _int_1;
    for (_int_1 = 2; _loop_3_5(_int_0, _int_1), _int_1 < _int_0; _int_1++)
    {
      if ((_int_0 % _int_1) != 0)
      {
        _if_5_6(_int_0, _int_1);
        {
          _continue_6_7(_int_0, _int_1);
          continue;
        }
      }
      else
      {
        _else_5_9(_int_0, _int_1);
        {
          _return_6_8(_int_0, _int_1);
          return 0;
        }
      }

      _scope_4_10(_int_0, _int_1);
    }

    {
      _return_3_11(_int_0, _int_1);
      return _int_0;
    }
    _scope_2_12(_int_0, _int_1);
  }
}

int main()
{
  _function_1_13();
  {
    int _int_0;
    int _int_1;
    scanf("%d", &_int_0);
    for (_int_1 = _int_0; _loop_3_14(_int_0, _int_1), _int_1 >= _int_0; _int_1++)
    {
      if (check_prime(_int_1))
      {
        _if_5_15(_int_0, _int_1);
        {
          {
            _break_7_16(_int_0, _int_1);
            break;
          }
          _scope_6_17(_int_0, _int_1);
        }
      }
      else
      {
        _else_5_20(_int_0, _int_1);
        {
          {
            _continue_7_18(_int_0, _int_1);
            continue;
          }
          _scope_6_19(_int_0, _int_1);
        }
      }

      _scope_4_21(_int_0, _int_1);
    }

    printf("%d", _int_1);
    {
      _return_3_22(_int_0, _int_1);
      return 0;
    }
    _scope_2_23(_int_0, _int_1);
  }
}

