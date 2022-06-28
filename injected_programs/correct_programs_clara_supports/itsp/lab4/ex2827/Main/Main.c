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
    float _float_7;
    scanf("%f%f%f%f%f%f", &_float_0, &_float_1, &_float_2, &_float_3, &_float_4, &_float_5);
    if (_float_0 == _float_2)
    {
      _if_3_2(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      {
        if (_float_4 == _float_0)
        {
          _if_5_3(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
          printf("All the points are on same line.");
        }
        else
        {
          _else_5_4(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
          printf("All the points are not on same line.");
        }

        _scope_4_5(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5);
      }
    }
    else
    {
      _else_3_9(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
      {
        _float_6 = (_float_3 - _float_1) / (_float_2 - _float_0);
        _float_7 = (_float_5 - _float_1) - (_float_6 * (_float_4 - _float_0));
        if (_float_7 == 0)
        {
          _if_5_6(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
          printf("All the points are on same line.");
        }
        else
        {
          _else_5_7(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
          printf("All the points are not on same line.");
        }

        _scope_4_8(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
      }
    }

    {
      _return_3_10(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
      return 0;
    }
    _scope_2_11(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
  }
}

