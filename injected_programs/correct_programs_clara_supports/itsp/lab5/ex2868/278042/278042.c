#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_3;
    int _int_1 = 0;
    int _int_2 = 0;
    for (_int_3 = 2; _loop_3_2(_int_0, _int_1, _int_2, _int_3), _int_3 < _int_0; _int_3++)
    {
      if ((_int_0 % _int_3) == 0)
      {
        _if_5_3(_int_0, _int_1, _int_2, _int_3);
        {
          {
            _break_7_4(_int_0, _int_1, _int_2, _int_3);
            break;
          }
          _scope_6_5(_int_0, _int_1, _int_2, _int_3);
        }
      }
      else
      {
        _else_5_7(_int_0, _int_1, _int_2, _int_3);
        {
          _int_1 = _int_1 + 1;
          _scope_6_6(_int_0, _int_1, _int_2, _int_3);
        }
      }

      _scope_4_8(_int_0, _int_1, _int_2, _int_3);
    }

    if (_int_1 == (_int_0 - 2))
    {
      _if_3_9(_int_0, _int_1, _int_2, _int_3);
      {
        _int_2 = 1;
        _scope_4_10(_int_0, _int_1, _int_2, _int_3);
      }
    }

    {
      _return_3_11(_int_0, _int_1, _int_2, _int_3);
      return _int_2;
    }
    _scope_2_12(_int_0, _int_1, _int_2, _int_3);
  }
}

int main()
{
  _function_1_13();
  {
    int _int_1;
    int _int_2;
    int _int_3;
    int _int_4;
    int _int_0 = 0;
    scanf("%d", &_int_1);
    for (_int_2 = 2; _loop_3_14(_int_0, _int_1, _int_2), _int_2 < _int_1; _int_2++)
    {
      _int_3 = check_prime(_int_2);
      if ((_int_2 + 2) <= _int_1)
      {
        _if_5_15(_int_0, _int_1, _int_2, _int_3);
        {
          _int_4 = check_prime(_int_2 + 2);
          _scope_6_16(_int_0, _int_1, _int_2, _int_3, _int_4);
        }
      }

      if ((_int_3 == 1) && (_int_4 == 1))
      {
        _if_5_17(_int_0, _int_1, _int_2, _int_3, _int_4);
        {
          _int_0 = _int_0 + 1;
          _scope_6_18(_int_0, _int_1, _int_2, _int_3, _int_4);
        }
      }

      _scope_4_19(_int_0, _int_1, _int_2, _int_3, _int_4);
    }

    printf("%d", _int_0);
    {
      _return_3_20(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_21(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

