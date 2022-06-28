#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_1;
    int _int_4;
    int _int_5;
    int _int_6;
    int _int_0;
    int _int_2;
    int _int_3;
    _int_0 = 0;
    _int_1 = 0;
    _int_2 = 0;
    _int_3 = 0;
    _int_4 = 1;
    scanf("%d", &_int_1);
    for (_int_4 = 1; _loop_3_2(_int_0, _int_1, _int_2, _int_3, _int_4), _int_4 <= _int_1; _int_4++)
    {
      for (_int_5 = 1; _loop_5_3(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5), _int_5 <= _int_1; _int_5++)
      {
        for (_int_6 = 1; _loop_7_4(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6), _int_6 <= _int_1; _int_6++)
        {
          if ((((_int_4 + _int_5) > _int_6) && ((_int_4 + _int_6) > _int_5)) && ((_int_5 + _int_6) > _int_4))
          {
            _if_9_5(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
            {
              _int_0++;
              if ((((_int_4 == _int_5) && (_int_5 != _int_6)) || ((_int_4 == _int_6) && (_int_6 != _int_5))) || ((_int_5 == _int_6) && (_int_6 != _int_4)))
              {
                _if_11_6(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
                _int_2++;
              }

              if (((_int_4 != _int_5) && (_int_5 != _int_6)) && (_int_6 != _int_4))
              {
                _if_11_7(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
                _int_3++;
              }

              _scope_10_8(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
            }
          }

          _scope_8_9(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
        }

        _scope_6_10(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
      }

      _scope_4_11(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
    }

    printf("Number of possible triangles is %d", (((_int_0 - _int_2) + (_int_2 / 3)) - _int_3) + (_int_3 / 6));
    {
      _return_3_12(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
      return 0;
    }
    _scope_2_13(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
  }
}

