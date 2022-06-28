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
    scanf("%f", &_float_0);
    scanf("%f", &_float_1);
    scanf("%f", &_float_2);
    scanf("%f", &_float_3);
    _float_4 = ((_float_0 * _float_1) * (_float_2 - _float_3)) / ((_float_1 * _float_2) - (_float_0 * _float_3));
    _float_5 = ((_float_2 * _float_3) * (_float_0 - _float_1)) / ((_float_0 * _float_3) - (_float_1 * _float_2));
    if ((_float_1 * _float_2) != (_float_0 * _float_3))
    {
      _if_3_2(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      {
        printf("(%0.3f,%0.3f)", _float_4, _float_5);
        _scope_4_3(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      }
    }
    else
    {
      _else_3_6(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      if ((_float_1 * _float_2) == (_float_0 * _float_3))
      {
        _if_4_4(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
        {
          printf("INF");
          _scope_5_5(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
        }
      }

    }

    {
      _return_3_7(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      return 0;
    }
    _scope_2_8(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
  }
}

