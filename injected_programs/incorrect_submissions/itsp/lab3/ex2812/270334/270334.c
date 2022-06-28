#include "vars_info.h"
#include<stdio.h>
#include<math.h>

int main()
{
  _function_1_1();
  {
    float _float_1;
    float _float_0 = 0;
    scanf("%f", &_float_1);
    if (_float_1 < _float_0)
    {
      _if_3_2(_float_0, _float_1);
      {
        printf("%f is negative", _float_1);
        _scope_4_3(_float_0, _float_1);
      }
    }

    if (_float_1 > _float_0)
    {
      _if_3_4(_float_0, _float_1);
      {
        printf("%f is positive", _float_1);
        _scope_4_5(_float_0, _float_1);
      }
    }

    if (_float_1 == _float_0)
    {
      _if_3_6(_float_0, _float_1);
      {
        printf("%f is zero", _float_1);
        _scope_4_7(_float_0, _float_1);
      }
    }

    {
      _return_3_8(_float_0, _float_1);
      return 0;
    }
    _scope_2_9(_float_0, _float_1);
  }
}

