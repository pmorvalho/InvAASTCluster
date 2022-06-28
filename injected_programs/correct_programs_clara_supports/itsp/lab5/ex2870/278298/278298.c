#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_1;
    int _int_2;
    _int_1 = _int_0;
    _int_2 = 2;
    for (_int_2 = 2; _loop_3_2(_int_0, _int_1, _int_2), _int_2 < _int_1;)
    {
      if ((_int_1 % _int_2) != 0)
      {
        _if_5_3(_int_0, _int_1, _int_2);
        {
          _int_2 = _int_2 + 1;
          _scope_6_4(_int_0, _int_1, _int_2);
        }
      }
      else
      {
        _else_5_6(_int_0, _int_1, _int_2);
        {
          _int_1 = _int_1 + 1;
          _int_2 = 2;
          _scope_6_5(_int_0, _int_1, _int_2);
        }
      }

      _scope_4_7(_int_0, _int_1, _int_2);
    }

    {
      _return_3_8(_int_0, _int_1, _int_2);
      return _int_2;
    }
    _scope_2_9(_int_0, _int_1, _int_2);
  }
}

int main()
{
  _function_1_10();
  {
    int _int_0;
    scanf("%d", &_int_0);
    printf("%d", check_prime(_int_0));
    {
      _return_3_11(_int_0);
      return 0;
    }
    _scope_2_12(_int_0);
  }
}

