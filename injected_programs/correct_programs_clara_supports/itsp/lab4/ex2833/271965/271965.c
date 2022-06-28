#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_1;
    int _int_2;
    int _int_3;
    int _int_4;
    int _int_0;
    _int_0 = 0;
    scanf("%d", &_int_1);
    for (_int_2 = 1; _loop_3_2(_int_0, _int_1, _int_2), _int_2 <= _int_1; _int_2 = _int_2 + 1)
    {
      for (_int_3 = _int_2; _loop_5_3(_int_0, _int_1, _int_2, _int_3), _int_3 <= _int_1; _int_3 = _int_3 + 1)
      {
        for (_int_4 = _int_3; _loop_7_4(_int_0, _int_1, _int_2, _int_3, _int_4), _int_4 <= _int_1; _int_4 = _int_4 + 1)
        {
          if ((((_int_2 + _int_3) > _int_4) && ((_int_3 + _int_4) > _int_2)) && ((_int_4 + _int_2) > _int_3))
          {
            _if_9_5(_int_0, _int_1, _int_2, _int_3, _int_4);
            {
              _int_0 = _int_0 + 1;
              _scope_10_6(_int_0, _int_1, _int_2, _int_3, _int_4);
            }
          }

          _scope_8_7(_int_0, _int_1, _int_2, _int_3, _int_4);
        }

        _scope_6_8(_int_0, _int_1, _int_2, _int_3, _int_4);
      }

      _scope_4_9(_int_0, _int_1, _int_2, _int_3, _int_4);
    }

    printf("Number of possible triangles is %d", _int_0);
    {
      _return_3_10(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_11(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

