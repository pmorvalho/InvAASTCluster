#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    float _float_0;
    float _float_2;
    float _float_1;
    float _float_3;
    scanf("%f %f %f %f", &_float_0, &_float_1, &_float_2, &_float_3);
    float _float_4 = _float_0 / _float_1;
    float _float_5 = _float_2 / _float_3;
    float _float_6 = ((_float_1 - _float_3) * (_float_0 * _float_2)) / ((_float_1 * _float_2) - (_float_3 * _float_0));
    float _float_7 = ((_float_0 - _float_2) * (_float_1 * _float_3)) / ((_float_0 * _float_3) - (_float_2 * _float_1));
    if (_float_4 == _float_5)
    {
      _if_3_2(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
      {
        printf("INF\n");
        _scope_4_3(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
      }
    }
    else
    {
      _else_3_8(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
      if (_float_4 != _float_5)
      {
        _if_4_4(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
        {
          if (_float_6 == 0)
          {
            _if_6_5(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
            _float_6 = 0;
          }

          if (_float_7 == 0)
          {
            _if_6_6(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
            _float_7 = 0;
          }

          printf("(%.3f,%.3f)", _float_6, _float_7);
          _scope_5_7(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
        }
      }

    }

    {
      _return_3_9(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
      return 0;
    }
    _scope_2_10(_float_0, _float_1, _float_2, _float_3, _float_4, _float_5, _float_6, _float_7);
  }
}

