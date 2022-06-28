#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_1;
    int _int_2;
    _int_1 = 0;
    _int_2 = 1;
    for (_int_1 = 2; _loop_3_2(_int_0, _int_1, _int_2), _int_1 < _int_0; _int_1++)
    {
      if ((_int_0 % _int_1) == 0)
      {
        _if_5_3(_int_0, _int_1, _int_2);
        {
          _int_2 = 0;
          {
            _break_7_4(_int_0, _int_1, _int_2);
            break;
          }
          _scope_6_5(_int_0, _int_1, _int_2);
        }
      }

      _scope_4_6(_int_0, _int_1, _int_2);
    }

    {
      _return_3_7(_int_0, _int_1, _int_2);
      return _int_2;
    }
    _scope_2_8(_int_0, _int_1, _int_2);
  }
}

int main()
{
  _function_1_9();
  {
    int _int_1;
    int _int_0;
    scanf("%d", &_int_0);
    _int_1 = 0;
    if (_int_0 == 1)
    {
      _if_3_10(_int_0, _int_1);
      printf("2");
    }
    else
    {
      _else_3_17(_int_0, _int_1);
      {
        while (_loop_5_11(_int_0, _int_1), _int_1 == 0)
        {
          if (check_prime(_int_0))
          {
            _if_7_12(_int_0, _int_1);
            {
              printf("%d", _int_0);
              _int_1 = 1;
              _scope_8_13(_int_0, _int_1);
            }
          }
          else
          {
            _else_7_14(_int_0, _int_1);
            _int_0 = _int_0 + 1;
          }

          _scope_6_15(_int_0, _int_1);
        }

        _scope_4_16(_int_0, _int_1);
      }
    }

    {
      _return_3_18(_int_0, _int_1);
      return 0;
    }
    _scope_2_19(_int_0, _int_1);
  }
}

