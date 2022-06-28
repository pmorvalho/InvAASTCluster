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
    if ((((_int_0 + _int_1) > _int_2) && ((_int_1 + _int_2) > _int_0)) && ((_int_0 + _int_2) > _int_1))
    {
      _if_3_2(_int_0, _int_1, _int_2);
      {
        if ((((((_int_0 * _int_0) + (_int_1 * _int_1)) - (_int_2 * _int_2)) == 0) || ((((_int_1 * _int_1) + (_int_2 * _int_2)) - (_int_0 * _int_0)) == 0)) || ((((_int_0 * _int_0) + (_int_2 * _int_2)) - (_int_1 * _int_1)) == 0))
        {
          _if_5_3(_int_0, _int_1, _int_2);
          {
            printf("Right Triangle");
            _scope_6_4(_int_0, _int_1, _int_2);
          }
        }
        else
        {
          _else_5_10(_int_0, _int_1, _int_2);
          if ((((((_int_0 * _int_0) + (_int_1 * _int_1)) - (_int_2 * _int_2)) > 0) && ((((_int_1 * _int_1) + (_int_2 * _int_2)) - (_int_0 * _int_0)) > 0)) && ((((_int_0 * _int_0) + (_int_2 * _int_2)) - (_int_1 * _int_1)) > 0))
          {
            _if_6_5(_int_0, _int_1, _int_2);
            {
              printf("Acute Triangle");
              _scope_7_6(_int_0, _int_1, _int_2);
            }
          }
          else
          {
            _else_6_9(_int_0, _int_1, _int_2);
            if ((((((_int_0 * _int_0) + (_int_1 * _int_1)) - (_int_2 * _int_2)) < 0) || (((_int_1 * _int_1) + (_int_2 * _int_2)) < (_int_0 * _int_0))) || (((_int_0 * _int_0) + (_int_2 * _int_2)) < (_int_1 * _int_1)))
            {
              _if_7_7(_int_0, _int_1, _int_2);
              {
                printf("Obtuse Triangle");
                _scope_8_8(_int_0, _int_1, _int_2);
              }
            }

          }

        }

        _scope_4_11(_int_0, _int_1, _int_2);
      }
    }
    else
    {
      _else_3_13(_int_0, _int_1, _int_2);
      {
        printf("Invalid Triangle");
        _scope_4_12(_int_0, _int_1, _int_2);
      }
    }

    {
      _return_3_14(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_15(_int_0, _int_1, _int_2);
  }
}

