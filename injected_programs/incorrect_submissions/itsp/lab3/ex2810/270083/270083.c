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
    scanf("%f%f", &_float_0, &_float_1);
    _float_2 = abs((0.5 * _float_0) * _float_1);
    printf("The area of (%6.4f,%6.4f), (%6.4f,0) and (0,%6.4f) is %6.4f.", _float_0, _float_1, _float_0, _float_1, _float_2);
    {
      _return_3_2(_float_0, _float_1, _float_2);
      return 0;
    }
    _scope_2_3(_float_0, _float_1, _float_2);
  }
}

