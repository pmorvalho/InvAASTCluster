#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_3;
    int _int_1 = 2;
    int _int_2 = 0;
    if ((_int_0 == 1) || (_int_0 == 2))
    {
      _if_3_2(_int_0, _int_1, _int_2);
      {
        {
          _return_5_3(_int_0, _int_1, _int_2);
          return 2;
        }
        _scope_4_4(_int_0, _int_1, _int_2);
      }
    }
    else
    {
      _else_3_17(_int_0, _int_1, _int_2, _int_3);
      {
        while (_loop_5_5(_int_0, _int_1, _int_2), _int_2 == 0)
        {
          for (_int_3 = 2; _loop_7_6(_int_0, _int_1, _int_2, _int_3), _int_3 <= (_int_0 - 1); _int_3++)
          {
            if ((_int_0 % _int_3) != 0)
            {
              _if_9_7(_int_0, _int_1, _int_2, _int_3);
              {
                _int_1++;
                _scope_10_8(_int_0, _int_1, _int_2, _int_3);
              }
            }

            _scope_8_9(_int_0, _int_1, _int_2, _int_3);
          }

          if (_int_1 == _int_0)
          {
            _if_7_10(_int_0, _int_1, _int_2, _int_3);
            {
              _int_2 = _int_0;
              _scope_8_11(_int_0, _int_1, _int_2, _int_3);
            }
          }
          else
          {
            _else_7_13(_int_0, _int_1, _int_2, _int_3);
            {
              _int_0++;
              _scope_8_12(_int_0, _int_1, _int_2, _int_3);
            }
          }

          _scope_6_14(_int_0, _int_1, _int_2, _int_3);
        }

        {
          _return_5_15(_int_0, _int_1, _int_2, _int_3);
          return _int_2;
        }
        _scope_4_16(_int_0, _int_1, _int_2, _int_3);
      }
    }

    _scope_2_18(_int_0, _int_1, _int_2, _int_3);
  }
}

int main()
{
  _function_1_19();
  {
    int _int_0;
    scanf("%d", &_int_0);
    int _int_1 = check_prime(_int_0);
    printf("%d", _int_1);
    {
      _return_3_20(_int_0, _int_1);
      return 0;
    }
    _scope_2_21(_int_0, _int_1);
  }
}

