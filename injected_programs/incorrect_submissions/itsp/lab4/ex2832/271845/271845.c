#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    scanf("%d", &_int_0);
    scanf("%d", &_int_1);
    scanf("%d", &_int_2);
    if ((((_int_0 + _int_1) < _int_2) || ((_int_1 + _int_2) < _int_0)) || ((_int_0 + _int_2) < _int_1))
    {
      _if_3_2(_int_0, _int_1, _int_2);
      printf("Invalid Triangle");
    }
    else
    {
      _else_3_7(_int_0, _int_1, _int_2);
      if ((((_int_2 * _int_2) == ((_int_0 * _int_0) + (_int_1 * _int_1))) || ((_int_1 * _int_1) == ((_int_0 * _int_0) + (_int_2 * _int_2)))) || ((_int_0 * _int_0) == ((_int_1 * _int_1) + (_int_2 * _int_2))))
      {
        _if_4_3(_int_0, _int_1, _int_2);
        printf("Right Triangle");
      }
      else
      {
        _else_4_6(_int_0, _int_1, _int_2);
        if ((((_int_2 * _int_2) > ((_int_0 * _int_0) + (_int_1 * _int_1))) || ((_int_1 * _int_1) > ((_int_0 * _int_0) + (_int_2 * _int_2)))) || ((_int_0 * _int_0) > ((_int_1 * _int_1) + (_int_2 * _int_2))))
        {
          _if_5_4(_int_0, _int_1, _int_2);
          printf("Obtuse Triangle");
        }
        else
        {
          _else_5_5(_int_0, _int_1, _int_2);
          printf("Acute Triangle");
        }

      }

    }

    {
      _return_3_8(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_9(_int_0, _int_1, _int_2);
  }
}

