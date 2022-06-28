#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    for (int j = 2; _loop_3_2(_int_0), j < _int_0; j++)
    {
      if ((_int_0 % j) == 0)
      {
        _if_5_3(_int_0);
        {
          {
            _break_7_4(_int_0);
            break;
          }
          _scope_6_5(_int_0);
        }
      }

      if ((_int_0 % j) != 0)
      {
        _if_5_6(_int_0);
        {
          if (j == (_int_0 - 1))
          {
            _if_7_7(_int_0);
            {
              printf("%d ", _int_0);
              _scope_8_8(_int_0);
            }
          }

          _scope_6_9(_int_0);
        }
      }

      _scope_4_10(_int_0);
    }

    _scope_2_11(_int_0);
  }
}

int main()
{
  _function_1_12();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    int j;
    scanf("%d %d", &_int_0, &_int_1);
    if (_int_0 <= 2)
    {
      _if_3_13(_int_0, _int_1);
      {
        printf("%d", _int_0);
        _scope_4_14(_int_0, _int_1);
      }
    }

    for (_int_2 = _int_0; _loop_3_15(_int_0, _int_1, _int_2), _int_2 <= _int_1; _int_2++)
    {
      check_prime(_int_2);
      _scope_4_16(_int_0, _int_1, _int_2);
    }

    {
      _return_3_17(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_18(_int_0, _int_1, _int_2);
  }
}

