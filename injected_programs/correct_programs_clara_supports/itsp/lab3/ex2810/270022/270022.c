#include "vars_info.h"
#include<stdio.h>
#include<math.h>

int main()
{
  _function_1_1();
  {
    float _float_0;
    float _float_1;
    float _float_2;
    scanf("%f", &_float_0);
    printf(" ");
    scanf("%f", &_float_1);
    _float_2 = fabs((_float_0 * _float_1) / 2);
    printf("The area of (%.4f,%.4f), (%.4f,0) and (0,%.4f) is %.4f.", _float_0, _float_1, _float_0, _float_1, _float_2);
    {
      _return_3_2(_float_0, _float_1, _float_2);
      return 0;
    }
    _scope_2_3(_float_0, _float_1, _float_2);
  }
}

