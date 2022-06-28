#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    float _float_0;
    float _float_1;
    float _float_2;
    scanf("%f %f", &_float_0, &_float_1);
    _float_2 = (.5 * _float_0) * _float_1;
    if (_float_2 > 0)
    {
      _if_3_2(_float_0, _float_1, _float_2);
      printf("The area of (%.4f,%.4f),(%.4f,0) and (0,%.4f) is %.4f.", _float_0, _float_1, _float_0, _float_1, _float_2);
    }
    else
    {
      _else_3_3(_float_0, _float_1, _float_2);
      printf("The area of (%.4f,%.4f),(%.4f,0) and (0,%.4f) is %.4f.", _float_0, _float_1, _float_0, _float_1, -_float_2);
    }

    {
      _return_3_4(_float_0, _float_1, _float_2);
      return 0;
    }
    _scope_2_5(_float_0, _float_1, _float_2);
  }
}

