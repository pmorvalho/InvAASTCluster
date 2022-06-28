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
    float _float_3;
    float _float_4;
    _float_2 = _float_1;
    _float_3 = _float_0;
    _float_4 = (1.0000 / 2) * fabs(_float_2 * _float_3);
    printf("The area of (%.4f,%.4f), (%.4f,0) and (0,%.4f) is %.4f.", _float_0, _float_1, _float_0, _float_1, _float_4);
    {
      _return_3_2(_float_0, _float_1, _float_2, _float_3, _float_4);
      return 0;
    }
    _scope_2_3(_float_0, _float_1, _float_2, _float_3, _float_4);
  }
}

