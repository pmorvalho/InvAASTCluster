#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    float _float_0;
    float _float_1;
    scanf("%f %f", &_float_0, &_float_1);
    float _float_2 = ((1 / 2.0) * _float_0) * _float_1;
    float _float_3 = (((-1) / 2.0) * _float_0) * _float_1;
    printf("The area of (%.4f,%.4f), ", _float_0, _float_1);
    printf("(%.4f,0) and ", _float_0);
    if (_float_2 > 0)
    {
      _if_3_2(_float_0, _float_1, _float_2, _float_3);
      {
        printf("(0,%.4f) is %.4f.", _float_1, _float_2);
        _scope_4_3(_float_0, _float_1, _float_2, _float_3);
      }
    }
    else
    {
      _else_3_5(_float_0, _float_1, _float_2, _float_3);
      {
        printf("(0,%.4f) is %.4f.", _float_1, _float_3);
        _scope_4_4(_float_0, _float_1, _float_2, _float_3);
      }
    }

    {
      _return_3_6(_float_0, _float_1, _float_2, _float_3);
      return 0;
    }
    _scope_2_7(_float_0, _float_1, _float_2, _float_3);
  }
}

