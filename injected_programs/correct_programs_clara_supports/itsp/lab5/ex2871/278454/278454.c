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
    int _int_4;
    int _int_5;
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
        _else_5_11(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
        {
          for (_int_5 = 1; _loop_7_6(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5), _int_5 <= _int_1; _int_5++)
          {
            if ((_int_5 == 1) || (_int_5 == _int_1))
            {
              _if_9_7(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
              printf("%d", _int_0);
            }
            else
            {
              _else_9_8(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
              printf(" ");
            }

            _scope_8_9(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          }

          _scope_6_10(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
        }
      }

      printf("\n");
      _scope_4_12(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
    }

    {
      _return_3_13(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      return 0;
    }
    _scope_2_14(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
  }
}

