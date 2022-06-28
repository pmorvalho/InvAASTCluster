#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    float _float_0;
    scanf("%f\n", &_float_0);
    if (_float_0 < 0)
    {
      _if_3_2(_float_0);
      {
        printf("%.4f is negative\n", _float_0);
        _scope_4_3(_float_0);
      }
    }
    else
    {
      _else_3_9(_float_0);
      {
        if (_float_0 > 0)
        {
          _if_5_4(_float_0);
          {
            printf("%.4f is positive\n", _float_0);
            _scope_6_5(_float_0);
          }
        }
        else
        {
          _else_5_7(_float_0);
          {
            printf("input is zero\n");
            _scope_6_6(_float_0);
          }
        }

        _scope_4_8(_float_0);
      }
    }

    {
      _return_3_10(_float_0);
      return 0;
    }
    _scope_2_11(_float_0);
  }
}

