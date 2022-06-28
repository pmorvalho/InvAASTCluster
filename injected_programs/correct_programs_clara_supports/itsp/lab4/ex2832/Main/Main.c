#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    int _int_3;
    scanf("%d%d%d", &_int_0, &_int_1, &_int_2);
    if (_int_0 > _int_2)
    {
      _if_3_2(_int_0, _int_1, _int_2);
      {
        _int_3 = _int_2;
        _int_2 = _int_0;
        _int_0 = _int_3;
        _scope_4_3(_int_0, _int_1, _int_2, _int_3);
      }
    }

    if (_int_1 > _int_2)
    {
      _if_3_4(_int_0, _int_1, _int_2, _int_3);
      {
        _int_3 = _int_2;
        _int_2 = _int_1;
        _int_1 = _int_3;
        _scope_4_5(_int_0, _int_1, _int_2, _int_3);
      }
    }

    if ((((_int_0 + _int_1) <= _int_2) || ((_int_1 + _int_2) <= _int_0)) || ((_int_0 + _int_2) <= _int_1))
    {
      _if_3_6(_int_0, _int_1, _int_2, _int_3);
      printf("Invalid Triangle");
    }
    else
    {
      _else_3_11(_int_0, _int_1, _int_2, _int_3);
      if ((_int_2 * _int_2) > ((_int_0 * _int_0) + (_int_1 * _int_1)))
      {
        _if_4_7(_int_0, _int_1, _int_2, _int_3);
        printf("Obtuse Triangle");
      }
      else
      {
        _else_4_10(_int_0, _int_1, _int_2, _int_3);
        if ((_int_2 * _int_2) < ((_int_0 * _int_0) + (_int_1 * _int_1)))
        {
          _if_5_8(_int_0, _int_1, _int_2, _int_3);
          printf("Acute Triangle");
        }
        else
        {
          _else_5_9(_int_0, _int_1, _int_2, _int_3);
          printf("Right Triangle");
        }

      }

    }

    {
      _return_3_12(_int_0, _int_1, _int_2, _int_3);
      return 0;
    }
    _scope_2_13(_int_0, _int_1, _int_2, _int_3);
  }
}

