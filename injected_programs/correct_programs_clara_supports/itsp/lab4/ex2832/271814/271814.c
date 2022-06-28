#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    scanf("%d", &_int_0);
    scanf("%d", &_int_1);
    scanf("%d", &_int_2);
    if ((((_int_0 + _int_1) <= _int_2) || ((_int_1 + _int_2) <= _int_0)) || ((_int_2 + _int_0) <= _int_1))
    {
      _if_3_2(_int_0, _int_1, _int_2);
      printf("Invalid Triangle");
    }
    else
    {
      _else_3_22(_int_0, _int_1, _int_2);
      {
        if ((_int_2 >= _int_0) && (_int_2 >= _int_1))
        {
          _if_5_3(_int_0, _int_1, _int_2);
          if ((((_int_0 * _int_0) + (_int_1 * _int_1)) > (_int_2 * _int_2)) && ((_int_0 + _int_1) > _int_2))
          {
            _if_6_4(_int_0, _int_1, _int_2);
            printf("Acute Triangle");
          }
          else
          {
            _else_6_8(_int_0, _int_1, _int_2);
            if ((((_int_0 * _int_0) + (_int_1 * _int_1)) < (_int_2 * _int_2)) && ((_int_0 + _int_1) > _int_2))
            {
              _if_7_5(_int_0, _int_1, _int_2);
              printf("Obtuse Triangle");
            }
            else
            {
              _else_7_7(_int_0, _int_1, _int_2);
              if ((((_int_0 * _int_0) + (_int_1 * _int_1)) == (_int_2 * _int_2)) && ((_int_0 + _int_1) > _int_2))
              {
                _if_8_6(_int_0, _int_1, _int_2);
                printf("Right Triangle");
              }

            }

          }

        }

        if ((_int_0 >= _int_1) && (_int_0 >= _int_2))
        {
          _if_5_9(_int_0, _int_1, _int_2);
          if ((((_int_2 * _int_2) + (_int_1 * _int_1)) > (_int_0 * _int_0)) && ((_int_0 + _int_1) > _int_2))
          {
            _if_6_10(_int_0, _int_1, _int_2);
            printf("Acute Triangle");
          }
          else
          {
            _else_6_14(_int_0, _int_1, _int_2);
            if ((((_int_2 * _int_2) + (_int_1 * _int_1)) < (_int_0 * _int_0)) && ((_int_0 + _int_1) > _int_2))
            {
              _if_7_11(_int_0, _int_1, _int_2);
              printf("Obtuse Triangle");
            }
            else
            {
              _else_7_13(_int_0, _int_1, _int_2);
              if ((((_int_2 * _int_2) + (_int_1 * _int_1)) == (_int_0 * _int_0)) && ((_int_0 + _int_1) > _int_2))
              {
                _if_8_12(_int_0, _int_1, _int_2);
                printf("Right Triangle");
              }

            }

          }

        }

        if ((_int_1 >= _int_0) && (_int_1 >= _int_2))
        {
          _if_5_15(_int_0, _int_1, _int_2);
          if ((((_int_0 * _int_0) + (_int_2 * _int_2)) > (_int_1 * _int_1)) && ((_int_0 + _int_1) > _int_2))
          {
            _if_6_16(_int_0, _int_1, _int_2);
            printf("Acute Triangle");
          }
          else
          {
            _else_6_20(_int_0, _int_1, _int_2);
            if ((((_int_0 * _int_0) + (_int_2 * _int_2)) < (_int_1 * _int_1)) && ((_int_0 + _int_1) > _int_2))
            {
              _if_7_17(_int_0, _int_1, _int_2);
              printf("Obtuse Triangle");
            }
            else
            {
              _else_7_19(_int_0, _int_1, _int_2);
              if ((((_int_0 * _int_0) + (_int_2 * _int_2)) == (_int_1 * _int_1)) && ((_int_0 + _int_1) > _int_2))
              {
                _if_8_18(_int_0, _int_1, _int_2);
                printf("Right Triangle");
              }

            }

          }

        }

        _scope_4_21(_int_0, _int_1, _int_2);
      }
    }

    {
      _return_3_23(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_24(_int_0, _int_1, _int_2);
  }
}

