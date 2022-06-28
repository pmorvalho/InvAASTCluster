#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    float _float_0;
    float _float_1;
    float _float_2;
    float _float_3;
    float _float_4;
    float _float_5;
    float _float_6;
    float _float_7;
    scanf("%f %f %f %f %f %f", &_float_0, &_float_1, &_float_2, &_float_3, &_float_4, &_float_5);
    if (_float_2 != _float_0)
    {
      _if_3_2(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      {
        _float_6 = (_float_3 - _float_1) / (_float_2 - _float_0);
        _scope_4_3(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6);
      }
    }

    if (_float_2 != _float_4)
    {
      _if_3_4(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6);
      {
        _float_7 = (_float_5 - _float_3) / (_float_4 - _float_2);
        _scope_4_5(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
      }
    }

    if ((_float_0 == _float_2) && (_float_2 == _float_4))
    {
      _if_3_6(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
      {
        printf("All points are on the same line.");
        _scope_4_7(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
      }
    }
    else
    {
      _else_3_19(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
      if ((_float_0 == _float_2) && (_float_2 != _float_4))
      {
        _if_4_8(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
        {
          printf("All points are not on the same line.");
          _scope_5_9(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
        }
      }
      else
      {
        _else_4_18(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
        if ((_float_0 != _float_2) && (_float_2 == _float_4))
        {
          _if_5_10(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
          {
            printf("All points are not on the same line.");
            _scope_6_11(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
          }
        }
        else
        {
          _else_5_17(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
          {
            if (_float_6 == _float_7)
            {
              _if_7_12(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
              {
                printf("All points are on the same line.");
                _scope_8_13(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
              }
            }
            else
            {
              _else_7_15(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
              {
                printf("All points are not on the same line.");
                _scope_8_14(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
              }
            }

            _scope_6_16(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
          }
        }

      }

    }

    {
      _return_3_20(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
      return 0;
    }
    _scope_2_21(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
  }
}

