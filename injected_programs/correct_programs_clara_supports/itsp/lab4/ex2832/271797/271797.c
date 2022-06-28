#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    int _int_3;
    scanf("%d%d%d", &_int_0, &_int_1, &_int_2);
    if (_int_0 <= _int_1)
    {
      _if_3_2(_int_0, _int_1, _int_2);
      {
        if (_int_1 >= _int_2)
        {
          _if_5_3(_int_0, _int_1, _int_2);
          {
            _int_3 = _int_1;
            _scope_6_4(_int_0, _int_1, _int_2, _int_3);
          }
        }
        else
        {
          _else_5_6(_int_0, _int_1, _int_2, _int_3);
          {
            _int_3 = _int_2;
            _scope_6_5(_int_0, _int_1, _int_2, _int_3);
          }
        }

        _scope_4_7(_int_0, _int_1, _int_2, _int_3);
      }
    }
    else
    {
      _else_3_13(_int_0, _int_1, _int_2, _int_3);
      {
        if (_int_0 <= _int_2)
        {
          _if_5_8(_int_0, _int_1, _int_2, _int_3);
          {
            _int_3 = _int_0;
            _scope_6_9(_int_0, _int_1, _int_2, _int_3);
          }
        }
        else
        {
          _else_5_11(_int_0, _int_1, _int_2, _int_3);
          {
            _int_3 = _int_2;
            _scope_6_10(_int_0, _int_1, _int_2, _int_3);
          }
        }

        _scope_4_12(_int_0, _int_1, _int_2, _int_3);
      }
    }

    if ((((_int_0 + _int_1) + _int_2) - (2 * _int_3)) <= 0)
    {
      _if_3_14(_int_0, _int_1, _int_2, _int_3);
      {
        printf("Invalid Triangle");
        _scope_4_15(_int_0, _int_1, _int_2, _int_3);
      }
    }
    else
    {
      _else_3_26(_int_0, _int_1, _int_2, _int_3);
      if ((((_int_0 + _int_1) + _int_2) - (2 * _int_3)) >= 0)
      {
        _if_4_16(_int_0, _int_1, _int_2, _int_3);
        {
          if ((((_int_0 * _int_0) + (_int_1 * _int_1)) + (_int_2 * _int_2)) == ((2 * _int_3) * _int_3))
          {
            _if_6_17(_int_0, _int_1, _int_2, _int_3);
            {
              printf("Right Triangle");
              _scope_7_18(_int_0, _int_1, _int_2, _int_3);
            }
          }
          else
          {
            _else_6_24(_int_0, _int_1, _int_2, _int_3);
            if ((((_int_0 * _int_0) + (_int_1 * _int_1)) + (_int_2 * _int_2)) >= ((2 * _int_3) * _int_3))
            {
              _if_7_19(_int_0, _int_1, _int_2, _int_3);
              {
                printf("Acute Triangle");
                _scope_8_20(_int_0, _int_1, _int_2, _int_3);
              }
            }
            else
            {
              _else_7_23(_int_0, _int_1, _int_2, _int_3);
              if ((((_int_0 * _int_0) + (_int_1 * _int_1)) + (_int_2 * _int_2)) <= ((2 * _int_3) * _int_3))
              {
                _if_8_21(_int_0, _int_1, _int_2, _int_3);
                {
                  printf("Obtuse Triangle");
                  _scope_9_22(_int_0, _int_1, _int_2, _int_3);
                }
              }

            }

          }

          _scope_5_25(_int_0, _int_1, _int_2, _int_3);
        }
      }

    }

    {
      _return_3_27(_int_0, _int_1, _int_2, _int_3);
      return 0;
    }
    _scope_2_28(_int_0, _int_1, _int_2, _int_3);
  }
}

