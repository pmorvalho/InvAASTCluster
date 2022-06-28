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
    if (_int_0 > _int_2)
    {
      _if_3_2(_int_0, _int_1, _int_2);
      {
        _int_3 = _int_2;
        _int_2 = _int_0;
        _int_0 = _int_3;
        _scope_4_3(_int_0, _int_1, _int_2, _int_3);
      }
    }

    if (_int_1 > _int_2)
    {
      _if_3_4(_int_0, _int_1, _int_2, _int_3);
      {
        _int_3 = _int_2;
        _int_2 = _int_1;
        _int_1 = _int_3;
        _scope_4_5(_int_0, _int_1, _int_2, _int_3);
      }
    }

    if ((((_int_0 + _int_1) > _int_2) && ((_int_1 + _int_2) > _int_0)) && ((_int_2 + _int_0) > _int_1))
    {
      _if_3_6(_int_0, _int_1, _int_2, _int_3);
      {
        if (((_int_0 * _int_0) + (_int_1 * _int_1)) == (_int_2 * _int_2))
        {
          _if_5_7(_int_0, _int_1, _int_2, _int_3);
          printf("Right Triangle");
        }
        else
        {
          _else_5_11(_int_0, _int_1, _int_2, _int_3);
          if (((_int_0 * _int_0) + (_int_1 * _int_1)) < (_int_2 * _int_2))
          {
            _if_6_8(_int_0, _int_1, _int_2, _int_3);
            printf("Obtuse Triangle");
          }
          else
          {
            _else_6_10(_int_0, _int_1, _int_2, _int_3);
            if (((_int_0 * _int_0) + (_int_1 * _int_1)) > (_int_2 * _int_2))
            {
              _if_7_9(_int_0, _int_1, _int_2, _int_3);
              printf("Acute Triangle");
            }

          }

        }

        _scope_4_12(_int_0, _int_1, _int_2, _int_3);
      }
    }
    else
    {
      _else_3_13(_int_0, _int_1, _int_2, _int_3);
      printf("Invalid Triangle");
    }

    {
      _return_3_14(_int_0, _int_1, _int_2, _int_3);
      return 0;
    }
    _scope_2_15(_int_0, _int_1, _int_2, _int_3);
  }
}

