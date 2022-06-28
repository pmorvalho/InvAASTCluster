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
    scanf("%f %f %f %f", &_float_0, &_float_1, &_float_2, &_float_3);
    _float_4 = (_float_0 * _float_3) - (_float_2 * _float_1);
    if (_float_4 == 0)
    {
      _if_3_2(_float_0, _float_1, _float_2, _float_3, _float_4);
      printf("INF\n");
    }
    else
    {
      _else_3_4(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6);
      {
        _float_5 = (_float_3 - _float_1) / _float_4;
        _float_6 = (_float_0 - _float_2) / _float_4;
        printf("(%.3f,%.3f)\n", _float_5, _float_6);
        _scope_4_3(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6);
      }
    }

    {
      _return_3_5(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6);
      return 0;
    }
    _scope_2_6(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6);
  }
}

