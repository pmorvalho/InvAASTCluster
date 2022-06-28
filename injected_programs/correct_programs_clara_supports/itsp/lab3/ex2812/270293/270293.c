#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    float _float_0;
    scanf("%f", &_float_0);
    if (_float_0 == 0)
    {
      _if_3_2(_float_0);
      printf("input is zero");
    }
    else
    {
      _else_3_5(_float_0);
      if (_float_0 > 0)
      {
        _if_4_3(_float_0);
        printf("%.4f is positive", _float_0);
      }
      else
      {
        _else_4_4(_float_0);
        printf("%.4f is negative", _float_0);
      }

    }

    {
      _return_3_6(_float_0);
      return 0;
    }
    _scope_2_7(_float_0);
  }
}

