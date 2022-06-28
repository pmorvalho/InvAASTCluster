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
    scanf("%f%f%f%f%f", &_float_0, &_float_1, &_float_2, &_float_3, &_float_4);
    if (((((_float_3 - _float_0) * (_float_3 - _float_0)) + ((_float_4 - _float_1) * (_float_4 - _float_1))) - (_float_2 * _float_2)) < 0)
    {
      _if_3_2(_float_0, _float_1, _float_2, _float_3, _float_4);
      printf("Point is inside the Circle.");
    }
    else
    {
      _else_3_3(_float_0, _float_1, _float_2, _float_3, _float_4);
      printf("Point is outside the Circle.");
    }

    {
      _return_3_4(_float_0, _float_1, _float_2, _float_3, _float_4);
      return 0;
    }
    _scope_2_5(_float_0, _float_1, _float_2, _float_3, _float_4);
  }
}

