#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    float _float_0;
    float _float_2;
    float _float_4;
    float _float_1;
    float _float_3;
    float _float_5;
    scanf("%f %f %f %f %f %f", &_float_0, &_float_1, &_float_2, &_float_3, &_float_4, &_float_5);
    float _float_6 = _float_3 - _float_1;
    float _float_7 = _float_5 - _float_1;
    float _float_8 = _float_2 - _float_0;
    float _float_9 = _float_4 - _float_0;
    if ((_float_8 != 0) && (_float_9 != 0))
    {
      _if_3_2(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7, _float_8, _float_9);
      {
        float _float_10 = _float_6 / _float_8;
        float _float_11 = _float_7 / _float_9;
        if (_float_10 == _float_11)
        {
          _if_5_3(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7, _float_8, _float_9, _float_10, _float_11);
          printf("All the points are on same line.");
        }
        else
        {
          _else_5_4(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7, _float_8, _float_9, _float_10, _float_11);
          printf("All the points are not on same line.");
        }

        _scope_4_5(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7, _float_8, _float_9, _float_10, _float_11);
      }
    }
    else
    {
      _else_3_8(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7, _float_8, _float_9);
      if ((_float_8 == 0) && (_float_9 == 0))
      {
        _if_4_6(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7, _float_8, _float_9);
        printf("All the points are on same line.");
      }
      else
      {
        _else_4_7(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7, _float_8, _float_9);
        printf("All the points are not on same line.");
      }

    }

    {
      _return_3_9(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7, _float_8, _float_9);
      return 0;
    }
    _scope_2_10(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7, _float_8, _float_9);
  }
}

