#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    scanf("%d %d %d", &_int_0, &_int_1, &_int_2);
    int _int_3;
    int _int_4;
    if (((_int_0 == 1) && (_int_1 == 1)) && (_int_2 == 1))
    {
      _if_3_2(_int_0, _int_1, _int_2);
      {
        printf("%d", 1);
        _scope_4_3(_int_0, _int_1, _int_2);
      }
    }
    else
    {
      _else_3_19(_int_0, _int_1, _int_2, _int_3, _int_4);
      {
        for (_int_3 = 1; _loop_5_4(_int_0, _int_1, _int_2, _int_3), _int_3 <= _int_2; _int_3++)
        {
          for (_int_4 = 1; _loop_7_5(_int_0, _int_1, _int_2, _int_3, _int_4), _int_4 <= _int_1; _int_4++)
          {
            if (_int_3 == 1)
            {
              _if_9_6(_int_0, _int_1, _int_2, _int_3, _int_4);
              {
                printf("%d", _int_0);
                _scope_10_7(_int_0, _int_1, _int_2, _int_3, _int_4);
              }
            }

            if ((_int_3 > 1) && (_int_3 < _int_2))
            {
              _if_9_8(_int_0, _int_1, _int_2, _int_3, _int_4);
              {
                if ((_int_4 == 1) || (_int_4 == _int_1))
                {
                  _if_11_9(_int_0, _int_1, _int_2, _int_3, _int_4);
                  {
                    printf("%d", _int_0);
                    _scope_12_10(_int_0, _int_1, _int_2, _int_3, _int_4);
                  }
                }
                else
                {
                  _else_11_12(_int_0, _int_1, _int_2, _int_3, _int_4);
                  {
                    printf(" ");
                    _scope_12_11(_int_0, _int_1, _int_2, _int_3, _int_4);
                  }
                }

                _scope_10_13(_int_0, _int_1, _int_2, _int_3, _int_4);
              }
            }

            if (_int_3 == _int_2)
            {
              _if_9_14(_int_0, _int_1, _int_2, _int_3, _int_4);
              {
                printf("%d", _int_0);
                _scope_10_15(_int_0, _int_1, _int_2, _int_3, _int_4);
              }
            }

            _scope_8_16(_int_0, _int_1, _int_2, _int_3, _int_4);
          }

          printf("\n");
          _scope_6_17(_int_0, _int_1, _int_2, _int_3, _int_4);
        }

        _scope_4_18(_int_0, _int_1, _int_2, _int_3, _int_4);
      }
    }

    {
      _return_3_20(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_21(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

