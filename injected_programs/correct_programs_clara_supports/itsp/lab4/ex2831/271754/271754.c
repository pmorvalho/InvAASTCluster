#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_5;
    int _int_4;
    int _int_3;
    int _int_2;
    int _int_1;
    scanf("%d", &_int_0);
    _int_1 = _int_0 % 10;
    _int_2 = ((_int_0 % 100) - _int_1) / 10;
    _int_3 = (((_int_0 % 1000) - _int_1) - (_int_2 * 10)) / 100;
    _int_4 = ((((_int_0 % 10000) - _int_1) - (_int_2 * 10)) - (_int_3 * 100)) / 1000;
    _int_5 = _int_0 / 10000;
    if (_int_0 >= 10000)
    {
      _if_3_2(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      printf("Reverse of %d is %d%d%d%d%d", _int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
    }
    else
    {
      _else_3_11(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      if ((_int_0 > 1000) && (_int_0 < 9999))
      {
        _if_4_3(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
        printf("Reverse of %d is %d%d%d%d", _int_0, _int_1, _int_2, _int_3, _int_4);
      }
      else
      {
        _else_4_10(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
        if ((_int_0 > 100) && (_int_0 < 999))
        {
          _if_5_4(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          printf("Reverse of %d is %d%d%d", _int_0, _int_1, _int_2, _int_3);
        }
        else
        {
          _else_5_9(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          if ((_int_0 > 10) && (_int_0 < 99))
          {
            _if_6_5(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
            printf("Reverse of %d is %d%d", _int_0, _int_1, _int_2);
          }
          else
          {
            _else_6_8(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
            if ((((_int_0 == 10000) || (_int_0 == 1000)) || (_int_0 == 100)) || (_int_0 == 10))
            {
              _if_7_6(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
              printf("Reverse of %d is 1", _int_0);
            }
            else
            {
              _else_7_7(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
              printf("Reverse of %d is %d", _int_0, _int_1);
            }

          }

        }

      }

    }

    {
      _return_3_12(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      return 0;
    }
    _scope_2_13(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
  }
}

