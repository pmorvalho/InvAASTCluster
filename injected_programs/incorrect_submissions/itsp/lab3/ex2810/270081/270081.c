#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    float _float_0;
    float _float_1;
    scanf("%f%f", &_float_0, &_float_1);
    float _float_2;
    _float_2 = (_float_0 * _float_1) / 2;
    if (_float_2 >= 0)
    {
      _if_3_2(_float_0, _float_1, _float_2);
      {
        printf("The area of (%6.4f, %6.4f), (%6.4f,0) and (0,%6.4f) is %6.4f.", _float_0, _float_1, _float_0, _float_1, _float_2);
        _scope_4_3(_float_0, _float_1, _float_2);
      }
    }
    else
    {
      _else_3_5(_float_0, _float_1, _float_2);
      {
        printf("The area of (%6.4f, %6.4f), (%6.4f,0) and (0,%6.4f) is %6.4f.", _float_0, _float_1, _float_0, _float_1, _float_2 - (_float_2 * 2));
        _scope_4_4(_float_0, _float_1, _float_2);
      }
    }

    {
      _return_3_6(_float_0, _float_1, _float_2);
      return 0;
    }
    _scope_2_7(_float_0, _float_1, _float_2);
  }
}

