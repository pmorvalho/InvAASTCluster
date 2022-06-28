#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    scanf("%d%d%d", &_int_0, &_int_1, &_int_2);
    if ((((_int_0 + _int_1) < _int_2) || ((_int_0 + _int_2) < _int_1)) || ((_int_1 + _int_2) < _int_0))
    {
      _if_3_2(_int_0, _int_1, _int_2);
      printf("Invalid Triangle");
    }
    else
    {
      _else_3_9(_int_0, _int_1, _int_2);
      {
        if ((((_int_0 * _int_0) == ((_int_1 * _int_1) + (_int_2 * _int_2))) || ((_int_1 * _int_1) == ((_int_0 * _int_0) + (_int_2 * _int_2)))) || ((_int_2 * _int_2) == ((_int_0 * _int_0) + (_int_1 * _int_1))))
        {
          _if_5_3(_int_0, _int_1, _int_2);
          printf("Right Triangle");
        }
        else
        {
          _else_5_7(_int_0, _int_1, _int_2);
          {
            if ((((_int_0 * _int_0) > ((_int_1 * _int_1) + (_int_2 * _int_2))) || ((_int_1 * _int_1) > ((_int_0 * _int_0) + (_int_2 * _int_2)))) || ((_int_2 * _int_2) > ((_int_0 * _int_0) + (_int_1 * _int_1))))
            {
              _if_7_4(_int_0, _int_1, _int_2);
              printf("Obtuse Triangle");
            }
            else
            {
              _else_7_5(_int_0, _int_1, _int_2);
              printf("Acute Triangle");
            }

            _scope_6_6(_int_0, _int_1, _int_2);
          }
        }

        _scope_4_8(_int_0, _int_1, _int_2);
      }
    }

    {
      _return_3_10(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_11(_int_0, _int_1, _int_2);
  }
}

