#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_2;
    int _int_3;
    int _int_0;
    int _int_1;
    _int_1 = _int_0;
    scanf("%d%d%d", &_int_2, &_int_3, &_int_0);
    if ((_int_2 >= _int_0) && (_int_2 >= _int_3))
    {
      _if_3_2(_int_1, _int_2, _int_3, _int_0);
      {
        _int_0 = _int_2;
        _int_2 = _int_3;
        _int_3 = _int_1;
        _scope_4_3(_int_1, _int_2, _int_3, _int_0);
      }
    }
    else
    {
      _else_3_6(_int_1, _int_2, _int_3, _int_0);
      if ((_int_3 >= _int_0) && (_int_3 >= _int_2))
      {
        _if_4_4(_int_1, _int_2, _int_3, _int_0);
        {
          _int_0 = _int_3;
          _int_3 = _int_2;
          _int_2 = _int_1;
          _scope_5_5(_int_1, _int_2, _int_3, _int_0);
        }
      }

    }

    if ((((_int_2 + _int_3) > _int_0) && ((_int_3 + _int_0) > _int_2)) && ((_int_0 + _int_2) > _int_3))
    {
      _if_3_7(_int_1, _int_2, _int_3, _int_0);
      {
        if (((_int_2 * _int_2) + (_int_3 * _int_3)) > (_int_0 * _int_0))
        {
          _if_5_8(_int_1, _int_2, _int_3, _int_0);
          {
            printf("Acute Triangle");
            _scope_6_9(_int_1, _int_2, _int_3, _int_0);
          }
        }
        else
        {
          _else_5_14(_int_1, _int_2, _int_3, _int_0);
          if (((_int_2 * _int_2) + (_int_3 * _int_3)) == (_int_0 * _int_0))
          {
            _if_6_10(_int_1, _int_2, _int_3, _int_0);
            {
              printf("Right Triangle");
              _scope_7_11(_int_1, _int_2, _int_3, _int_0);
            }
          }
          else
          {
            _else_6_13(_int_1, _int_2, _int_3, _int_0);
            {
              printf("Obtuse Triangle");
              _scope_7_12(_int_1, _int_2, _int_3, _int_0);
            }
          }

        }

        _scope_4_15(_int_1, _int_2, _int_3, _int_0);
      }
    }
    else
    {
      _else_3_17(_int_1, _int_2, _int_3, _int_0);
      {
        printf("Invalid Triangle");
        _scope_4_16(_int_1, _int_2, _int_3, _int_0);
      }
    }

    {
      _return_3_18(_int_1, _int_2, _int_3, _int_0);
      return 0;
    }
    _scope_2_19(_int_1, _int_2, _int_3, _int_0);
  }
}

