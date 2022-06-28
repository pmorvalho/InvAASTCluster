#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    if (_int_0 == 1)
    {
      _if_3_2(_int_0);
      {
        _return_4_3(_int_0);
        return 0;
      }
    }

    int _int_2;
    int _int_1 = 0;
    for (_int_2 = 2; _loop_3_4(_int_0, _int_1, _int_2), _int_2 < _int_0; _int_2++)
    {
      if ((_int_0 % _int_2) == 0)
      {
        _if_5_5(_int_0, _int_1, _int_2);
        {
          _return_6_6(_int_0, _int_1, _int_2);
          return 0;
        }
      }

      _scope_4_7(_int_0, _int_1, _int_2);
    }

    {
      _return_3_8(_int_0, _int_1, _int_2);
      return _int_0;
    }
    _scope_2_9(_int_0, _int_1, _int_2);
  }
}

int main()
{
  _function_1_10();
  {
    int _int_3;
    int _int_5;
    int _int_2;
    int _int_4;
    int _int_0 = 0;
    int d;
    int _int_1 = 0;
    scanf("%d", &_int_2);
    _int_3 = check_prime(_int_2);
    if (_int_3 == 0)
    {
      _if_3_11(_int_0, _int_1, _int_2, _int_3);
      {
        for (_int_4 = _int_2 + 1; _loop_5_12(_int_0, _int_1, _int_2, _int_3, _int_4), 1; _int_4++)
        {
          _int_5 = check_prime(_int_4);
          if (_int_5 != 0)
          {
            _if_7_13(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
            {
              printf("%d", _int_5);
              {
                _break_9_14(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
                break;
              }
              _scope_8_15(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
            }
          }

          _scope_6_16(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
        }

        _scope_4_17(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      }
    }
    else
    {
      _else_3_18(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      printf("%d", _int_3);
    }

    {
      _return_3_19(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      return 0;
    }
    _scope_2_20(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
  }
}

