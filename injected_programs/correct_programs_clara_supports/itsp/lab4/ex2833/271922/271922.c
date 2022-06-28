#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_1;
    int _int_0 = 0;
    scanf("%d", &_int_1);
    for (int c = 1; _loop_3_2(_int_0, _int_1), c <= _int_1; c++)
    {
      for (int b = c; _loop_5_3(_int_0, _int_1), b >= 1; b--)
      {
        for (int a = b; _loop_7_4(_int_0, _int_1), a >= 1; a--)
        {
          if ((a + b) > c)
          {
            _if_9_5(_int_0, _int_1);
            {
              _int_0 = _int_0 + 1;
              _scope_10_6(_int_0, _int_1);
            }
          }

          _scope_8_7(_int_0, _int_1);
        }

        _scope_6_8(_int_0, _int_1);
      }

      _scope_4_9(_int_0, _int_1);
    }

    printf("Number of possible triangles is %d", _int_0);
    {
      _return_3_10(_int_0, _int_1);
      return 0;
    }
    _scope_2_11(_int_0, _int_1);
  }
}

