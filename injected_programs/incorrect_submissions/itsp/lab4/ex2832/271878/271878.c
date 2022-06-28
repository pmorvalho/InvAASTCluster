#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    scanf("%d %d %d", &_int_0, &_int_1, &_int_2);
    int _int_3;
    int _int_4;
    int _int_5;
    if ((_int_0 > _int_1) && (_int_0 > _int_2))
    {
      _if_3_2(_int_0, _int_1, _int_2);
      _int_3 = _int_0;
    }

    if ((_int_2 > _int_1) && (_int_2 > _int_0))
    {
      _if_3_3(_int_0, _int_1, _int_2, _int_3);
      _int_3 = _int_2;
    }

    if ((_int_1 > _int_2) && (_int_1 > _int_0))
    {
      _if_3_4(_int_0, _int_1, _int_2, _int_3);
      _int_3 = _int_1;
    }

    if ((_int_0 < _int_1) && (_int_0 < _int_2))
    {
      _if_3_5(_int_0, _int_1, _int_2, _int_3);
      _int_4 = _int_0;
    }

    if ((_int_2 < _int_1) && (_int_2 < _int_0))
    {
      _if_3_6(_int_0, _int_1, _int_2, _int_3, _int_4);
      _int_4 = _int_2;
    }

    if ((_int_1 < _int_2) && (_int_1 < _int_0))
    {
      _if_3_7(_int_0, _int_1, _int_2, _int_3, _int_4);
      _int_4 = _int_1;
    }

    if ((_int_0 != _int_4) && (_int_0 != _int_3))
    {
      _if_3_8(_int_0, _int_1, _int_2, _int_3, _int_4);
      _int_5 = _int_0;
    }

    if ((_int_1 != _int_4) && (_int_1 != _int_3))
    {
      _if_3_9(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      _int_5 = _int_1;
    }
    else
    {
      _else_3_10(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      _int_5 = _int_2;
    }

    if ((_int_4 + _int_5) > _int_3)
    {
      _if_3_11(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      {
        int _int_6 = ((_int_4 * _int_4) + (_int_5 * _int_5)) - (_int_3 * _int_3);
        if (_int_6 == 0)
        {
          _if_5_12(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
          printf("Right Triangle");
        }

        if (_int_6 > 0)
        {
          _if_5_13(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
          printf("Acute Triangle");
        }

        if (_int_6 < 0)
        {
          _if_5_14(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
          printf("Obtuse Triangle");
        }

        _scope_4_15(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
      }
    }
    else
    {
      _else_3_16(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      printf("Invalid Triangle");
    }

    {
      _return_3_17(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      return 0;
    }
    _scope_2_18(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
  }
}

