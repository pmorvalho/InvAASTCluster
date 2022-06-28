#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0);
int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_2;
    int _int_3;
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

    if (_int_1 == 2)
    {
      _if_3_5(_int_0, _int_1, _int_2);
      _int_3 = 1;
    }
    else
    {
      _else_3_6(_int_0, _int_1, _int_2, _int_3);
      _int_3 = 0;
    }

    {
      _return_3_7(_int_0, _int_1, _int_2, _int_3);
      return _int_3;
    }
    _scope_2_8(_int_0, _int_1, _int_2, _int_3);
  }
}

int main()
{
  _function_1_9();
  {
    int _int_1;
    int _int_0 = 0;
    int _int_2;
    scanf("%d", &_int_1);
    for (_int_2 = 2; _loop_3_10(_int_0, _int_1, _int_2), _int_2 <= (_int_1 - 2); _int_2++)
    {
      if (check_prime(_int_2) == 1)
      {
        _if_5_11(_int_0, _int_1, _int_2);
        {
          if (check_prime(_int_1 - _int_2) == 1)
          {
            _if_7_12(_int_0, _int_1, _int_2);
            _int_0 = 1;
          }

          _scope_6_13(_int_0, _int_1, _int_2);
        }
      }

      _scope_4_14(_int_0, _int_1, _int_2);
    }

    if (_int_0)
    {
      _if_3_15(_int_0, _int_1, _int_2);
      printf("yes");
    }
    else
    {
      _else_3_16(_int_0, _int_1, _int_2);
      printf("no");
    }

    {
      _return_3_17(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_18(_int_0, _int_1, _int_2);
  }
}

