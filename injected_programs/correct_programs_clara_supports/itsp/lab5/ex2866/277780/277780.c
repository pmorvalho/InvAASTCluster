#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_1;
    for (_int_1 = 2; _loop_3_2(_int_0, _int_1), _int_1 < _int_0; _int_1++)
    {
      if ((_int_0 % _int_1) == 0)
      {
        _if_5_3(_int_0, _int_1);
        {
          _return_6_4(_int_0, _int_1);
          return 0;
        }
      }

      _scope_4_5(_int_0, _int_1);
    }

    {
      _return_3_6(_int_0, _int_1);
      return 1;
    }
    _scope_2_7(_int_0, _int_1);
  }
}

int main()
{
  _function_1_8();
  {
    int _int_2;
    int _int_1;
    int _int_0 = 0;
    scanf("%d", &_int_1);
    for (_int_2 = 2; _loop_3_9(_int_0, _int_1, _int_2), _int_2 < _int_1; _int_2++)
    {
      if (check_prime(_int_2) && check_prime(_int_1 - _int_2))
      {
        _if_5_10(_int_0, _int_1, _int_2);
        {
          _int_0 = 1;
          printf("Yes");
          {
            _break_7_11(_int_0, _int_1, _int_2);
            break;
          }
          _scope_6_12(_int_0, _int_1, _int_2);
        }
      }

      _scope_4_13(_int_0, _int_1, _int_2);
    }

    if (_int_0 == 0)
    {
      _if_3_14(_int_0, _int_1, _int_2);
      printf("No");
    }

    _scope_2_15(_int_0, _int_1, _int_2);
  }
}

