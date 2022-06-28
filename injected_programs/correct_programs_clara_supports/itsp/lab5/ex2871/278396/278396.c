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
    int _int_4;
    int _int_3;
    for (_int_3 = 1; _loop_3_2(_int_0, _int_1, _int_2, _int_3), _int_3 <= _int_2; _int_3++)
    {
      for (_int_4 = 1; _loop_5_3(_int_0, _int_1, _int_2, _int_3, _int_4), _int_4 <= _int_1; _int_4++)
      {
        if ((_int_3 == 1) || (_int_3 == _int_2))
        {
          _if_7_4(_int_0, _int_1, _int_2, _int_3, _int_4);
          {
            if (_int_4 != _int_1)
            {
              _if_9_5(_int_0, _int_1, _int_2, _int_3, _int_4);
              {
                printf("%d", _int_0);
                _scope_10_6(_int_0, _int_1, _int_2, _int_3, _int_4);
              }
            }
            else
            {
              _else_9_8(_int_0, _int_1, _int_2, _int_3, _int_4);
              {
                printf("%d", _int_0);
                printf("\n");
                _scope_10_7(_int_0, _int_1, _int_2, _int_3, _int_4);
              }
            }

            _scope_8_9(_int_0, _int_1, _int_2, _int_3, _int_4);
          }
        }
        else
        {
          _else_7_18(_int_0, _int_1, _int_2, _int_3, _int_4);
          {
            if (_int_4 == 1)
            {
              _if_9_10(_int_0, _int_1, _int_2, _int_3, _int_4);
              {
                printf("%d", _int_0);
                _scope_10_11(_int_0, _int_1, _int_2, _int_3, _int_4);
              }
            }
            else
            {
              _else_9_16(_int_0, _int_1, _int_2, _int_3, _int_4);
              if (_int_4 == _int_1)
              {
                _if_10_12(_int_0, _int_1, _int_2, _int_3, _int_4);
                {
                  printf("%d", _int_0);
                  printf("\n");
                  _scope_11_13(_int_0, _int_1, _int_2, _int_3, _int_4);
                }
              }
              else
              {
                _else_10_15(_int_0, _int_1, _int_2, _int_3, _int_4);
                {
                  printf(" ");
                  _scope_11_14(_int_0, _int_1, _int_2, _int_3, _int_4);
                }
              }

            }

            _scope_8_17(_int_0, _int_1, _int_2, _int_3, _int_4);
          }
        }

        _scope_6_19(_int_0, _int_1, _int_2, _int_3, _int_4);
      }

      _scope_4_20(_int_0, _int_1, _int_2, _int_3, _int_4);
    }

    {
      _return_3_21(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_22(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

