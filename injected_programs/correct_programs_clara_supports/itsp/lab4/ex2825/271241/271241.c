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
    scanf("%f %f %f %f %f", &_float_0, &_float_1, &_float_2, &_float_3, &_float_4);
    float _float_5 = ((_float_0 - _float_3) * (_float_0 - _float_3)) + ((_float_1 - _float_4) * (_float_1 - _float_4));
    if (_float_5 < (_float_2 * _float_2))
    {
      _if_3_2(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      {
        printf("Point is inside the Circle.");
        _scope_4_3(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      }
    }
    else
    {
      _else_3_8(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      if (_float_5 > (_float_2 * _float_2))
      {
        _if_4_4(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
        {
          printf("Point is outside the Circle.");
          _scope_5_5(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
        }
      }
      else
      {
        _else_4_7(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
        {
          printf("Point is on the Circle.");
          _scope_5_6(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
        }
      }

    }

    {
      _return_3_9(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      return 0;
    }
    _scope_2_10(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
  }
}

