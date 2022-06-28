#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_1;
    int _int_0 = 0;
    scanf("%d", &_int_1);
    for (int i = 1; _loop_3_2(_int_0, _int_1), i <= _int_1; i++)
    {
      for (int j = 1; _loop_5_3(_int_0, _int_1), j <= i; j++)
      {
        for (int k = 1; _loop_7_4(_int_0, _int_1), k <= j; k++)
        {
          if ((j + k) > i)
          {
            _if_9_5(_int_0, _int_1);
            {
              _int_0 = _int_0 + 1;
              _scope_10_6(_int_0, _int_1);
            }
          }
          else
          {
            _else_9_9(_int_0, _int_1);
            {
              {
                _break_11_7(_int_0, _int_1);
                break;
              }
              _scope_10_8(_int_0, _int_1);
            }
          }

          _scope_8_10(_int_0, _int_1);
        }

        _scope_6_11(_int_0, _int_1);
      }

      _scope_4_12(_int_0, _int_1);
    }

    printf("Number of possible triangles is %d", _int_0);
    {
      _return_3_13(_int_0, _int_1);
      return 0;
    }
    _scope_2_14(_int_0, _int_1);
  }
}

