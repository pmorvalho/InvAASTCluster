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
    int _int_4;
    scanf("%d%d%d", &_int_0, &_int_1, &_int_2);
    if ((_int_2 >= 2) && (_int_1 >= 2))
    {
      _if_3_2(_int_0, _int_1, _int_2);
      {
        int _int_3;
        int _int_4;
        int _int_5;
        for (_int_3 = 1; _loop_5_3(_int_0, _int_1, _int_2, _int_3), _int_3 <= _int_1; _int_3++)
        {
          printf("%d", _int_0);
          _scope_6_4(_int_0, _int_1, _int_2, _int_3);
        }

        printf("\n");
        for (_int_4 = 1; _loop_5_5(_int_0, _int_1, _int_2, _int_3, _int_4), _int_4 <= (_int_2 - 2); _int_4++)
        {
          printf("%d", _int_0);
          for (_int_5 = 1; _loop_7_6(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5), _int_5 <= (_int_1 - 2); _int_5++)
          {
            printf(" ");
            _scope_8_7(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          }

          printf("%d\n", _int_0);
          _scope_6_8(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
        }

        for (_int_3 = 1; _loop_5_9(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5), _int_3 <= _int_1; _int_3++)
        {
          printf("%d", _int_0);
          _scope_6_10(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
        }

        _scope_4_11(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      }
    }
    else
    {
      _else_3_24(_int_0, _int_1, _int_2, _int_3, _int_4);
      if (_int_2 == 1)
      {
        _if_4_12(_int_0, _int_1, _int_2);
        {
          for (_int_3 = 1; _loop_6_13(_int_0, _int_1, _int_2, _int_3), _int_3 <= _int_1; _int_3++)
          {
            printf("%d", _int_0);
            _scope_7_14(_int_0, _int_1, _int_2, _int_3);
          }

          _scope_5_15(_int_0, _int_1, _int_2, _int_3);
        }
      }
      else
      {
        _else_4_23(_int_0, _int_1, _int_2, _int_3, _int_4);
        if (_int_1 == 1)
        {
          _if_5_16(_int_0, _int_1, _int_2, _int_3);
          {
            for (_int_4 = 1; _loop_7_17(_int_0, _int_1, _int_2, _int_3, _int_4), _int_4 <= _int_2; _int_4++)
            {
              printf("%d\n", _int_0);
              _scope_8_18(_int_0, _int_1, _int_2, _int_3, _int_4);
            }

            _scope_6_19(_int_0, _int_1, _int_2, _int_3, _int_4);
          }
        }
        else
        {
          _else_5_22(_int_0, _int_1, _int_2, _int_3, _int_4);
          if ((_int_2 == 1) && (_int_1 == 1))
          {
            _if_6_20(_int_0, _int_1, _int_2, _int_3, _int_4);
            {
              printf("%d", _int_0);
              _scope_7_21(_int_0, _int_1, _int_2, _int_3, _int_4);
            }
          }

        }

      }

    }

    {
      _return_3_25(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_26(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

