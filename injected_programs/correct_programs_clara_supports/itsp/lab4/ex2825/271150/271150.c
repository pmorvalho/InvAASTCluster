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
    {
      if ((((_float_3 - _float_0) * (_float_3 - _float_0)) + ((_float_4 - _float_1) * (_float_4 - _float_1))) == (_float_2 * _float_2))
      {
        _if_4_2(_float_0, _float_1, _float_2, _float_3, _float_4);
        {
          printf("Point is on the Circle.");
          _scope_5_3(_float_0, _float_1, _float_2, _float_3, _float_4);
        }
      }
      else
      {
        _else_4_8(_float_0, _float_1, _float_2, _float_3, _float_4);
        if ((((_float_3 - _float_0) * (_float_3 - _float_0)) + ((_float_4 - _float_1) * (_float_4 - _float_1))) > (_float_2 * _float_2))
        {
          _if_5_4(_float_0, _float_1, _float_2, _float_3, _float_4);
          {
            printf("Point is outside the Circle.");
            _scope_6_5(_float_0, _float_1, _float_2, _float_3, _float_4);
          }
        }
        else
        {
          _else_5_7(_float_0, _float_1, _float_2, _float_3, _float_4);
          {
            printf("Point is inside the Circle.");
            _scope_6_6(_float_0, _float_1, _float_2, _float_3, _float_4);
          }
        }

      }

      _scope_3_9(_float_0, _float_1, _float_2, _float_3, _float_4);
    }
    {
      _return_3_10(_float_0, _float_1, _float_2, _float_3, _float_4);
      return 0;
    }
    _scope_2_11(_float_0, _float_1, _float_2, _float_3, _float_4);
  }
}

