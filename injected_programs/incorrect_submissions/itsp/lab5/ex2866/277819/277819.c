#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_2;
    int _int_1;
    _int_1 = 2;
    if (_int_0 == 2)
    {
      _if_3_2(_int_0, _int_1);
      {
        _return_4_3(_int_0, _int_1);
        return 1;
      }
    }

    while (_loop_3_4(_int_0, _int_1), _int_1 < _int_0)
    {
      _int_2 = _int_0 % _int_1;
      if (_int_2 == 0)
      {
        _if_5_5(_int_0, _int_1, _int_2);
        {
          _return_6_6(_int_0, _int_1, _int_2);
          return 0;
        }
      }

      _int_1 = _int_1 + 1;
      _scope_4_7(_int_0, _int_1, _int_2);
    }

    {
      _return_3_8(_int_0, _int_1, _int_2);
      return 1;
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
    int _int_2;
    int _int_3;
    for (_int_1 = 2; _loop_3_11(_int_0, _int_1), _int_1 < _int_0; _int_1++)
    {
      _int_2 = check_prime(_int_1);
      _int_3 = check_prime(_int_0 - _int_1);
      _scope_4_12(_int_0, _int_1, _int_2, _int_3);
    }

    if ((_int_2 == 1) && (_int_3 == 1))
    {
      _if_3_13(_int_0, _int_1, _int_2, _int_3);
      {
        printf("Yes");
        _scope_4_14(_int_0, _int_1, _int_2, _int_3);
      }
    }
    else
    {
      _else_3_16(_int_0, _int_1, _int_2, _int_3);
      {
        printf("No");
        _scope_4_15(_int_0, _int_1, _int_2, _int_3);
      }
    }

    {
      _return_3_17(_int_0, _int_1, _int_2, _int_3);
      return 0;
    }
    _scope_2_18(_int_0, _int_1, _int_2, _int_3);
  }
}

