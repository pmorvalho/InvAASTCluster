#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    scanf("%d %d %d", &_int_0, &_int_1, &_int_2);
    if (_int_0 >= _int_1)
    {
      _if_3_2(_int_0, _int_1, _int_2);
      {
        int _int_3;
        _int_3 = _int_0;
        _int_0 = _int_1;
        _int_1 = _int_3;
        _scope_4_3(_int_0, _int_1, _int_2, _int_3);
      }
    }

    if (_int_2 <= _int_1)
    {
      _if_3_4(_int_0, _int_1, _int_2);
      {
        int _int_3;
        _int_3 = _int_1;
        _int_1 = _int_2;
        _int_2 = _int_3;
        _scope_4_5(_int_0, _int_1, _int_2, _int_3);
      }
    }

    if ("a>=c")
    {
      _if_3_6(_int_0, _int_1, _int_2);
      {
        int _int_3;
        _int_3 = _int_2;
        _int_2 = _int_0;
        _int_0 = _int_3;
        _scope_4_7(_int_0, _int_1, _int_2, _int_3);
      }
    }

    if ((_int_0 + _int_1) <= _int_2)
    {
      _if_3_8(_int_0, _int_1, _int_2);
      {
        printf("Invalid Triangle");
        _scope_4_9(_int_0, _int_1, _int_2);
      }
    }
    else
    {
      _else_3_18(_int_0, _int_1, _int_2);
      {
        if (((_int_0 * _int_0) + (_int_1 * _int_1)) == (_int_2 * _int_2))
        {
          _if_5_10(_int_0, _int_1, _int_2);
          {
            printf("Right Triangle");
            _scope_6_11(_int_0, _int_1, _int_2);
          }
        }
        else
        {
          _else_5_16(_int_0, _int_1, _int_2);
          if (((_int_0 * _int_0) + (_int_1 * _int_1)) > (_int_2 * _int_2))
          {
            _if_6_12(_int_0, _int_1, _int_2);
            {
              printf("Acute Triangle");
              _scope_7_13(_int_0, _int_1, _int_2);
            }
          }
          else
          {
            _else_6_15(_int_0, _int_1, _int_2);
            {
              printf("Obtuse Triangle");
              _scope_7_14(_int_0, _int_1, _int_2);
            }
          }

        }

        _scope_4_17(_int_0, _int_1, _int_2);
      }
    }

    {
      _return_3_19(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_20(_int_0, _int_1, _int_2);
  }
}
