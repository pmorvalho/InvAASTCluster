#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    float _float_0;
    float _float_2;
    float _float_1;
    float _float_3;
    scanf("%f%f%f%f\n", &_float_0, &_float_1, &_float_2, &_float_3);
    float _float_4;
    float _float_5;
    _float_4 = ((_float_0 * _float_2) * (_float_1 - _float_3)) / ((_float_1 * _float_2) - (_float_0 * _float_3));
    _float_5 = ((_float_1 * _float_3) * (_float_0 - _float_2)) / ((_float_0 * _float_3) - (_float_1 * _float_2));
    if (((_float_0 * _float_3) - (_float_1 * _float_2)) == 0)
    {
      _if_3_2(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      printf("INF");
    }
    else
    {
      _else_3_3(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      printf("%.3f,%.3f", _float_4, _float_5);
    }

    {
      _return_3_4(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      return 0;
    }
    _scope_2_5(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
  }
}

