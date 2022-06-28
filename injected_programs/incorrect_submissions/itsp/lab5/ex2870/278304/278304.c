#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0);
int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_1;
    int _int_2;
    int _int_3;
    for (_int_1 = _int_0; _loop_3_2(_int_0, _int_1), _int_1 >= _int_0; _int_1++)
    {
      for (_int_2 = 2; _loop_5_3(_int_0, _int_1, _int_2), _int_2 < (_int_1 / 2); _int_2++)
      {
        _int_3 = 1;
        if ((_int_1 % _int_2) == 0)
        {
          _if_7_4(_int_0, _int_1, _int_2, _int_3);
          {
            _int_3 = 1;
            {
              _break_9_5(_int_0, _int_1, _int_2, _int_3);
              break;
            }
            _scope_8_6(_int_0, _int_1, _int_2, _int_3);
          }
        }

        _scope_6_7(_int_0, _int_1, _int_2, _int_3);
      }

      if (_int_3 == 0)
      {
        _if_5_8(_int_0, _int_1, _int_2, _int_3);
        {
          _continue_6_9(_int_0, _int_1, _int_2, _int_3);
          continue;
        }
      }

      if ((_int_3 == 1) && (_int_1 > 1))
      {
        _if_5_10(_int_0, _int_1, _int_2, _int_3);
        {
          _return_6_11(_int_0, _int_1, _int_2, _int_3);
          return _int_1;
        }
      }

      _scope_4_12(_int_0, _int_1, _int_2, _int_3);
    }

    _scope_2_13(_int_0, _int_1, _int_2, _int_3);
  }
}

int main()
{
  _function_1_14();
  {
    int _int_0;
    int _int_1;
    scanf("%d", &_int_0);
    _int_1 = check_prime(_int_0);
    printf("%d", _int_1);
    {
      _return_3_15(_int_0, _int_1);
      return 0;
    }
    _scope_2_16(_int_0, _int_1);
  }
}

