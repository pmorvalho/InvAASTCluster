#include "vars_info.h"
#include <stdio.h>

int check_prime(int _int_0);
int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    scanf("%d", &_int_0);
    for (_int_1 = 2; _loop_3_2(_int_0, _int_1), _int_1 <= (_int_0 / 2); ++_int_1)
    {
      if (check_prime(_int_1) != 0)
      {
        _if_5_3(_int_0, _int_1);
        {
          if (check_prime(_int_0 - _int_1) != 0)
          {
            _if_7_4(_int_0, _int_1);
            {
              printf("Yes\n");
              {
                _return_9_5(_int_0, _int_1);
                return 0;
              }
              _scope_8_6(_int_0, _int_1);
            }
          }

          _scope_6_7(_int_0, _int_1);
        }
      }

      _scope_4_8(_int_0, _int_1);
    }

    printf("No\n");
    {
      _return_3_9(_int_0, _int_1);
      return 0;
    }
    _scope_2_10(_int_0, _int_1);
  }
}

int check_prime(int _int_0)
{
  _function_1_11(_int_0);
  {
    if (_int_0 == 1)
    {
      _if_3_12(_int_0);
      {
        _return_4_13(_int_0);
        return 1;
      }
    }

    int _int_2;
    int _int_1 = 1;
    for (_int_2 = 2; _loop_3_14(_int_0, _int_1, _int_2), _int_2 <= (_int_0 / 2); ++_int_2)
      if ((_int_0 % _int_2) == 0)
    {
      _if_4_15(_int_0, _int_1, _int_2);
      _int_1 = 0;
    }


    {
      _return_3_16(_int_0, _int_1, _int_2);
      return _int_1;
    }
    _scope_2_17(_int_0, _int_1, _int_2);
  }
}

