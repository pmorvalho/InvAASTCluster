#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_1;
    int _int_0 = 0;
    float _float_0 = 1;
    float _float_1 = 1;
    float _float_2 = 1;
    float _float_3;
    float _float_4;
    float _float_5;
    scanf("%d", &_int_1);
    for (_float_0 = 1; _loop_3_2(_int_0, _float_0, _float_1, _float_2, _int_1), _float_0 <= _int_1; _float_0++)
    {
      for (_float_1 = 1; _loop_5_3(_int_0, _float_0, _float_1, _float_2, _int_1), _float_1 <= _float_0; _float_1++)
      {
        for (_float_2 = 1; _loop_7_4(_int_0, _float_0, _float_1, _float_2, _int_1), _float_2 <= _float_1; _float_2++)
        {
          _float_3 = (((_float_0 * _float_0) + (_float_1 * _float_1)) - (_float_2 * _float_2)) / ((2 * _float_0) * _float_1);
          _float_4 = (((_float_0 * _float_0) + (_float_2 * _float_2)) - (_float_1 * _float_1)) / ((2 * _float_0) * _float_2);
          _float_5 = (((_float_1 * _float_1) + (_float_2 * _float_2)) - (_float_0 * _float_0)) / ((2 * _float_1) * _float_2);
          if (((((((((_float_3 < 1) && (_float_3 > (-1))) && (_float_4 < 1)) && (_float_4 > (-1))) && (_float_5 < 1)) && (_float_5 > (-1))) && (_float_0 >= _float_1)) && (_float_1 >= _float_2)) && (_float_0 >= _float_2))
          {
            _if_9_5(_int_0, _float_0, _float_1, _float_2, _int_1, _float_3, _float_4, _float_5);
            if (((((((((_float_3 < 0) && (_float_4 > 0)) && (_float_5 > 0)) || (((_float_4 < 0) && (_float_3 > 0)) && (_float_5 > 0))) || (((_float_5 < 0) && (_float_3 > 0)) && (_float_4 > 0))) || (((_float_3 > 0) && (_float_4 > 0)) && (_float_5 > 0))) || (_float_3 = (0 && (_float_4 != 0)) && (_float_5 != 0))) || (_float_4 = (0 && (_float_3 != 0)) && (_float_5 != 0))) || (_float_5 = (0 && (_float_3 != 0)) && (_float_4 != 0)))
            {
              _if_10_6(_int_0, _float_0, _float_1, _float_2, _int_1, _float_3, _float_4, _float_5);
              _int_0 = _int_0 + 1;
            }

          }

          _scope_8_7(_int_0, _float_0, _float_1, _float_2, _int_1, _float_3, _float_4, _float_5);
        }

        _scope_6_8(_int_0, _float_0, _float_1, _float_2, _int_1, _float_3, _float_4, _float_5);
      }

      _scope_4_9(_int_0, _float_0, _float_1, _float_2, _int_1, _float_3, _float_4, _float_5);
    }

    printf("Number of possible triangles is %d", _int_0);
    {
      _return_3_10(_int_0, _float_0, _float_1, _float_2, _int_1, _float_3, _float_4, _float_5);
      return 0;
    }
    _scope_2_11(_int_0, _float_0, _float_1, _float_2, _int_1, _float_3, _float_4, _float_5);
  }
}

