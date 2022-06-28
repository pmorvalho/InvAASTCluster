#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_1 = 2;
    int _int_2;
    while (_loop_3_2(_int_0, _int_1), _int_1 <= (_int_0 / 2))
    {
      _int_2 = _int_0 % _int_1;
      if (_int_2 == 0)
      {
        _if_5_3(_int_0, _int_1, _int_2);
        {
          _return_6_4(_int_0, _int_1, _int_2);
          return 0;
        }
      }
      else
      {
        _else_5_5(_int_0, _int_1, _int_2);
        _int_1 = _int_1 + 1;
      }

      _scope_4_6(_int_0, _int_1, _int_2);
    }

    {
      _return_3_7(_int_0, _int_1, _int_2);
      return 1;
    }
    _scope_2_8(_int_0, _int_1, _int_2);
  }
}

int main()
{
  _function_1_9();
  {
    int _int_2;
    int _int_3;
    int _int_4;
    int _int_0 = 2;
    int _int_1 = 0;
    scanf("%d", &_int_2);
    while (_loop_3_10(_int_0, _int_1, _int_2), _int_0 <= (_int_2 - 2))
    {
      _int_3 = check_prime(_int_0);
      _int_4 = check_prime(_int_2 - _int_0);
      if ((_int_3 == 1) && (_int_4 == 1))
      {
        _if_5_11(_int_0, _int_1, _int_2, _int_3, _int_4);
        {
          _int_1 = 1;
          printf("Yes");
          {
            _break_7_12(_int_0, _int_1, _int_2, _int_3, _int_4);
            break;
          }
          _scope_6_13(_int_0, _int_1, _int_2, _int_3, _int_4);
        }
      }

      _int_0 = _int_0 + 1;
      _scope_4_14(_int_0, _int_1, _int_2, _int_3, _int_4);
    }

    if (_int_1 == 0)
    {
      _if_3_15(_int_0, _int_1, _int_2, _int_3, _int_4);
      printf("No");
    }

    {
      _return_3_16(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_17(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

