#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_1 = 2;
    for (_int_1 = 2; _loop_3_2(_int_0, _int_1), _int_1 <= (_int_0 - 1); _int_1++)
    {
      if ((_int_0 % _int_1) == 0)
      {
        _if_5_3(_int_0, _int_1);
        {
          {
            _return_7_4(_int_0, _int_1);
            return 0;
          }
          _scope_6_5(_int_0, _int_1);
        }
      }

      _scope_4_6(_int_0, _int_1);
    }

    {
      {
        _return_4_7(_int_0, _int_1);
        return 1;
      }
      _scope_3_8(_int_0, _int_1);
    }
    _scope_2_9(_int_0, _int_1);
  }
}

int main()
{
  _function_1_10();
  {
    int _int_2;
    int _int_0;
    int _int_1;
    scanf("%d %d", &_int_0, &_int_1);
    for (_int_2 = _int_0; _loop_3_11(_int_0, _int_1, _int_2), _int_2 <= _int_1; _int_2++)
      if (check_prime(_int_2))
    {
      _if_4_12(_int_0, _int_1, _int_2);
      {
        printf("%d ", _int_2);
        _scope_5_13(_int_0, _int_1, _int_2);
      }
    }


    {
      _return_3_14(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_15(_int_0, _int_1, _int_2);
  }
}

