#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0);
int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_2;
    scanf("%d", &_int_0);
    int _int_1 = 1;
    _int_2 = _int_0;
    while (_loop_3_2(_int_0, _int_1, _int_2), _int_1)
    {
      if (!check_prime(_int_2))
      {
        _if_5_3(_int_0, _int_1, _int_2);
        _int_1 = 0;
      }
      else
      {
        _else_5_5(_int_0, _int_1, _int_2);
        {
          _int_2++;
          _scope_6_4(_int_0, _int_1, _int_2);
        }
      }

      _scope_4_6(_int_0, _int_1, _int_2);
    }

    printf("%d\n", _int_2);
    {
      _return_3_7(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_8(_int_0, _int_1, _int_2);
  }
}

int check_prime(int _int_0)
{
  _function_1_9(_int_0);
  {
    if (_int_0 == 1)
    {
      _if_3_10(_int_0);
      {
        _return_4_11(_int_0);
        return 1;
      }
    }

    int _int_2;
    int _int_1 = 0;
    for (_int_2 = 2; _loop_3_12(_int_0, _int_1, _int_2), _int_2 <= (_int_0 / 2); ++_int_2)
    {
      if ((_int_0 % _int_2) == 0)
      {
        _if_5_13(_int_0, _int_1, _int_2);
        {
          _int_1 = 1;
          {
            _break_7_14(_int_0, _int_1, _int_2);
            break;
          }
          _scope_6_15(_int_0, _int_1, _int_2);
        }
      }

      _scope_4_16(_int_0, _int_1, _int_2);
    }

    {
      _return_3_17(_int_0, _int_1, _int_2);
      return _int_1;
    }
    _scope_2_18(_int_0, _int_1, _int_2);
  }
}

