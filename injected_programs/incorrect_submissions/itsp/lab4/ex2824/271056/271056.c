#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    int _int_3;
    _int_1 = _int_0 % 4;
    _int_2 = _int_0 % 100;
    _int_3 = _int_0 % 400;
    if (_int_1 == 0)
    {
      _if_3_2(_int_1, _int_2, _int_3);
      {
        if (_int_2 == 0)
        {
          _if_5_3(_int_1, _int_2, _int_3);
          {
            if (_int_3 == 0)
            {
              _if_7_4(_int_1, _int_2, _int_3);
              printf("Leap Year");
            }
            else
            {
              _else_7_5(_int_1, _int_2, _int_3);
              printf("Not Leap Year");
            }

            _scope_6_6(_int_1, _int_2, _int_3);
          }
        }
        else
        {
          _else_5_7(_int_1, _int_2, _int_3);
          printf("Leap Year");
        }

        _scope_4_8(_int_1, _int_2, _int_3);
      }
    }
    else
    {
      _else_3_9(_int_1, _int_2, _int_3);
      printf("Not Leap Year");
    }

    {
      _return_3_10(_int_1, _int_2, _int_3);
      return 0;
    }
    _scope_2_11(_int_1, _int_2, _int_3);
  }
}

