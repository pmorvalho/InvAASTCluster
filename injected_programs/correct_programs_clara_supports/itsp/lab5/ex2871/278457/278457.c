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
    int _int_3;
    int _int_4;
    for (_int_3 = 1; _loop_3_2(_int_0, _int_1, _int_2, _int_3), _int_3 <= _int_2; _int_3++)
    {
      for (_int_4 = 1; _loop_5_3(_int_0, _int_1, _int_2, _int_3, _int_4), _int_4 <= _int_1; _int_4++)
      {
        if ((_int_4 == 1) || (_int_4 == _int_1))
        {
          _if_7_4(_int_0, _int_1, _int_2, _int_3, _int_4);
          {
            printf("%d", _int_0);
            _scope_8_5(_int_0, _int_1, _int_2, _int_3, _int_4);
          }
        }
        else
        {
          _else_7_11(_int_0, _int_1, _int_2, _int_3, _int_4);
          {
            if ((_int_3 == 1) || (_int_3 == _int_2))
            {
              _if_9_6(_int_0, _int_1, _int_2, _int_3, _int_4);
              {
                printf("%d", _int_0);
                _scope_10_7(_int_0, _int_1, _int_2, _int_3, _int_4);
              }
            }
            else
            {
              _else_9_9(_int_0, _int_1, _int_2, _int_3, _int_4);
              {
                printf(" ");
                _scope_10_8(_int_0, _int_1, _int_2, _int_3, _int_4);
              }
            }

            _scope_8_10(_int_0, _int_1, _int_2, _int_3, _int_4);
          }
        }

        _scope_6_12(_int_0, _int_1, _int_2, _int_3, _int_4);
      }

      printf("\n");
      _scope_4_13(_int_0, _int_1, _int_2, _int_3, _int_4);
    }

    {
      _return_3_14(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_15(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

