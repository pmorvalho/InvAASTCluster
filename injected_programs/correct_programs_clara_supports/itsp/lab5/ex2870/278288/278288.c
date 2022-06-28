#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_2;
    int _int_1;
    _int_1 = 1;
    for (_int_2 = 2; _loop_3_2(_int_0, _int_1, _int_2), _int_2 <= (_int_0 / 2); _int_2++)
    {
      if ((_int_0 % _int_2) == 0)
      {
        _if_5_3(_int_0, _int_1, _int_2);
        {
          _int_1 = 0;
          {
            _break_7_4(_int_0, _int_1, _int_2);
            break;
          }
          _scope_6_5(_int_0, _int_1, _int_2);
        }
      }

      _scope_4_6(_int_0, _int_1, _int_2);
    }

    if (_int_0 == 1)
    {
      _if_3_7(_int_0, _int_1, _int_2);
      _int_1 = 0;
    }

    {
      _return_3_8(_int_0, _int_1, _int_2);
      return _int_1;
    }
    _scope_2_9(_int_0, _int_1, _int_2);
  }
}

int main()
{
  _function_1_10();
  {
    int _int_0;
    int _int_1;
    scanf("%d", &_int_0);
    _int_1 = _int_0;
    while (_loop_3_11(_int_0, _int_1), _int_1 >= _int_0)
    {
      if (check_prime(_int_1) == 1)
      {
        _if_5_12(_int_0, _int_1);
        {
          _break_6_13(_int_0, _int_1);
          break;
        }
      }

      _int_1++;
      _scope_4_14(_int_0, _int_1);
    }

    printf("%d", _int_1);
    {
      _return_3_15(_int_0, _int_1);
      return 0;
    }
    _scope_2_16(_int_0, _int_1);
  }
}

