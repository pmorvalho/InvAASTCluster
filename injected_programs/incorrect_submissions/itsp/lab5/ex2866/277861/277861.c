#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_1 = 2;
    int _int_2;
    scanf("%d", &_int_2);
    while (_loop_3_2(_int_0, _int_1, _int_2), _int_1 <= (_int_0 - 1))
    {
      if ((_int_2 % _int_1) == 0)
      {
        _if_5_3(_int_0, _int_1, _int_2);
        {
          _return_6_4(_int_0, _int_1, _int_2);
          return 0;
        }
      }

      _int_1 = _int_1 + 1;
      _scope_4_5(_int_0, _int_1, _int_2);
    }

    {
      _return_3_6(_int_0, _int_1, _int_2);
      return 1;
    }
    _scope_2_7(_int_0, _int_1, _int_2);
  }
}

int main()
{
  _function_1_8();
  {
    int _int_1;
    int _int_0 = 0;
    scanf("%d", &_int_1);
    for (int x = 2; _loop_3_9(_int_0, _int_1), x <= (_int_1 - 2); x++)
    {
      if (check_prime(x) && check_prime(_int_1 - x))
      {
        _if_5_10(_int_0, _int_1);
        {
          printf("Yes");
          _int_0 = 1;
          {
            _break_7_11(_int_0, _int_1);
            break;
          }
          _scope_6_12(_int_0, _int_1);
        }
      }

      _scope_4_13(_int_0, _int_1);
    }

    if (_int_0 == 0)
    {
      _if_3_14(_int_0, _int_1);
      {
        printf("No");
        _scope_4_15(_int_0, _int_1);
      }
    }

    _scope_2_16(_int_0, _int_1);
  }
}

