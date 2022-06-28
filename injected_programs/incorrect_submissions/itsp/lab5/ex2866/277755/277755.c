#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_1 = 2;
    int _int_2 = 0;
    while (_loop_3_2(_int_0, _int_1, _int_2), _int_1 < _int_0)
    {
      if ((_int_0 % _int_1) == 0)
      {
        _if_5_3(_int_0, _int_1, _int_2);
        _int_2 = _int_2 + 1;
      }

      _int_1 = _int_1 + 1;
      _scope_4_4(_int_0, _int_1, _int_2);
    }

    if (_int_2 > 0)
    {
      _if_3_5(_int_0, _int_1, _int_2);
      {
        _return_4_6(_int_0, _int_1, _int_2);
        return 0;
      }
    }
    else
    {
      _else_3_8(_int_0, _int_1, _int_2);
      {
        _return_4_7(_int_0, _int_1, _int_2);
        return 1;
      }
    }

    _scope_2_9(_int_0, _int_1, _int_2);
  }
}

int main()
{
  _function_1_10();
  {
    int _int_2;
    int _int_0 = 2;
    int _int_1 = 0;
    scanf("%d", &_int_2);
    for (_int_0; _loop_3_11(_int_0, _int_1, _int_2), _int_0 < _int_2; _int_0++)
    {
      if ((check_prime(_int_0) == 1) && (check_prime(_int_2 - _int_0) == 1))
      {
        _if_5_12(_int_0, _int_1, _int_2);
        {
          printf("Yes");
          {
            _break_7_13(_int_0, _int_1, _int_2);
            break;
          }
          _scope_6_14(_int_0, _int_1, _int_2);
        }
      }

      _int_1 = _int_1 + 1;
      _scope_4_15(_int_0, _int_1, _int_2);
    }

    if (_int_1 > 0)
    {
      _if_3_16(_int_0, _int_1, _int_2);
      printf("No");
    }

    {
      _return_3_17(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_18(_int_0, _int_1, _int_2);
  }
}

