#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_3;
    int _int_4;
    int _int_0;
    int _int_1;
    int _int_2;
    scanf("%d%d%d", &_int_0, &_int_1, &_int_2);
    for (_int_3 = 1; _loop_3_2(_int_0, _int_1, _int_2, _int_3), _int_3 <= _int_2; _int_3++)
    {
      if ((_int_3 == 1) || (_int_3 == _int_2))
      {
        _if_5_3(_int_0, _int_1, _int_2, _int_3);
        {
          for (_int_4 = 1; _loop_7_4(_int_0, _int_1, _int_2, _int_3, _int_4), _int_4 <= _int_1; _int_4++)
            printf("%d", _int_0);

          _scope_6_5(_int_0, _int_1, _int_2, _int_3, _int_4);
        }
      }
      else
      {
        _else_5_10(_int_0, _int_1, _int_2, _int_3, _int_4);
        {
          for (_int_4 = 1; _loop_7_6(_int_0, _int_1, _int_2, _int_3, _int_4), _int_4 <= _int_1; _int_4++)
            if ((_int_4 % 2) == 0)
          {
            _if_8_7(_int_0, _int_1, _int_2, _int_3, _int_4);
            printf(" ");
          }
          else
          {
            _else_8_8(_int_0, _int_1, _int_2, _int_3, _int_4);
            printf("%d", _int_0);
          }


          _scope_6_9(_int_0, _int_1, _int_2, _int_3, _int_4);
        }
      }

      printf("\n");
      _scope_4_11(_int_0, _int_1, _int_2, _int_3, _int_4);
    }

    {
      _return_3_12(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_13(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

