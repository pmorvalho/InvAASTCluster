#include "vars_info.h"
#include<stdio.h>
#include<math.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    scanf("%d%d%d\n", &_int_0, &_int_1, &_int_2);
    float _float_0;
    float _float_1;
    float _float_2;
    _float_0 = ((((_int_1 * _int_1) + (_int_2 * _int_2)) - (_int_0 * _int_0)) * 1.0) / ((2 * _int_1) * _int_2);
    _float_1 = ((((_int_0 * _int_0) + (_int_2 * _int_2)) - (_int_1 * _int_1)) * 1.0) / ((2 * _int_0) * _int_2);
    _float_2 = ((((_int_1 * _int_1) + (_int_0 * _int_0)) - (_int_2 * _int_2)) * 1.0) / ((2 * _int_1) * _int_0);
    if ((((_int_0 + _int_1) > _int_2) && ((_int_1 + _int_2) > _int_0)) && ((_int_2 + _int_0) > _int_1))
    {
      _if_3_2(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
      {
        if (((_float_0 < 0.0) || (_float_1 < 0.0)) || (_float_2 < 0.0))
        {
          _if_5_3(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
          {
            printf("Obtuse Triangle\n");
            _scope_6_4(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
          }
        }
        else
        {
          _else_5_12(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
          {
            if (((_float_0 == 0.0) || (_float_1 == 0.0)) || (_float_2 == 0.0))
            {
              _if_7_5(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
              {
                printf("Right Triangle\n");
                _scope_8_6(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
              }
            }
            else
            {
              _else_7_10(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
              {
                if (((_float_0 > 0.0) && (_float_1 > 0.0)) && (_float_2 > 0.0))
                {
                  _if_9_7(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
                  {
                    printf("Acute Triangle\n");
                    _scope_10_8(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
                  }
                }

                _scope_8_9(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
              }
            }

            _scope_6_11(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
          }
        }

        _scope_4_13(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
      }
    }
    else
    {
      _else_3_15(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
      {
        printf("Invalid Triangle\n");
        _scope_4_14(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
      }
    }

    {
      _return_3_16(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
      return 0;
    }
    _scope_2_17(_int_0, _int_1, _int_2, _float_0, _float_1, _float_2);
  }
}

