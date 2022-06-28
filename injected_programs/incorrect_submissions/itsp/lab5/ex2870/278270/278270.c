#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_2;
    int _int_1 = 0;
    for (_int_2 = 1; _loop_3_2(_int_0, _int_1, _int_2), _int_2 <= _int_0; _int_2++)
    {
      if ((_int_0 % _int_2) == 0)
      {
        _if_5_3(_int_0, _int_1, _int_2);
        _int_1++;
      }

      _scope_4_4(_int_0, _int_1, _int_2);
    }

    if (_int_1 > 2)
    {
      _if_3_5(_int_0, _int_1, _int_2);
      {
        _return_4_6(_int_0, _int_1, _int_2);
        return 1;
      }
    }
    else
    {
      _else_3_8(_int_0, _int_1, _int_2);
      {
        _return_4_7(_int_0, _int_1, _int_2);
        return 0;
      }
    }

    _scope_2_9(_int_0, _int_1, _int_2);
  }
}

int main()
{
  _function_1_10();
  {
    int _int_1;
    int _int_2;
    int _int_3;
    int _int_0 = 0;
    scanf("%d", &_int_1);
    _int_2 = check_prime(_int_1);
    if (_int_2 == 0)
    {
      _if_3_11(_int_0, _int_1, _int_2);
      printf("%d", _int_1);
    }
    else
    {
      _else_3_17(_int_0, _int_1, _int_2, _int_3);
      {
        for (_int_3 = _int_1 + 1; _loop_5_12(_int_0, _int_1, _int_2, _int_3), _int_3 <= (_int_1 + 20); _int_3++)
        {
          _int_2 = check_prime(_int_3);
          if (_int_2 == 0)
          {
            _if_7_13(_int_0, _int_1, _int_2, _int_3);
            {
              _break_8_14(_int_0, _int_1, _int_2, _int_3);
              break;
            }
          }

          _scope_6_15(_int_0, _int_1, _int_2, _int_3);
        }

        printf("%d", _int_3);
        _scope_4_16(_int_0, _int_1, _int_2, _int_3);
      }
    }

    {
      _return_3_18(_int_0, _int_1, _int_2, _int_3);
      return 0;
    }
    _scope_2_19(_int_0, _int_1, _int_2, _int_3);
  }
}

