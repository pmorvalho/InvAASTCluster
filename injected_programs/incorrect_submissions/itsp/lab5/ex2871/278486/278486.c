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
          _int_0++;
          _int_1 = 2;
          _scope_6_4(_int_0, _int_1);
        }
      }
      else
      {
        _else_5_7(_int_0, _int_1);
        {
          {
            _continue_7_5(_int_0, _int_1);
            continue;
          }
          _scope_6_6(_int_0, _int_1);
        }
      }

      _scope_4_8(_int_0, _int_1);
    }

    printf("%d", _int_0);
    _scope_2_9(_int_0, _int_1);
  }
}

int main()
{
  _function_1_10();
  {
    int _int_0;
    scanf("%d", &_int_0);
    check_prime(_int_0);
    {
      _return_3_11(_int_0);
      return 0;
    }
    _scope_2_12(_int_0);
  }
}

