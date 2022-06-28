#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_4[50];
    while (_loop_3_2(), _int_0 <= 50)
    {
      scanf("%d", &_int_0);
      _scope_4_3(_int_0);
    }

    int _int_1 = 0;
    int _int_2;
    int _int_3;
    for (_int_2 = 0; _loop_3_4(_int_0, _int_1, _int_2), _int_2 <= (_int_0 - 1); _int_2++)
    {
      for (_int_3 = 0; _loop_5_5(_int_0, _int_1, _int_2, _int_3), _int_3 <= (_int_0 - 1); _int_3++)
      {
        if ((_int_4[_int_2] == _int_4[_int_3]) && (_int_2 != _int_3))
        {
          _if_7_6(_int_0, _int_1, _int_2, _int_3);
          {
            _int_1 = 1;
            _scope_8_7(_int_0, _int_1, _int_2, _int_3);
          }
        }

        _scope_6_8(_int_0, _int_1, _int_2, _int_3);
      }

      _scope_4_9(_int_0, _int_1, _int_2, _int_3);
    }

    if (_int_1 == 1)
    {
      _if_3_10(_int_0, _int_1, _int_2, _int_3);
      {
        printf("YES");
        _scope_4_11(_int_0, _int_1, _int_2, _int_3);
      }
    }
    else
    {
      _else_3_13(_int_0, _int_1, _int_2, _int_3);
      {
        printf("NO");
        _scope_4_12(_int_0, _int_1, _int_2, _int_3);
      }
    }

    {
      _return_3_14(_int_0, _int_1, _int_2, _int_3);
      return 0;
    }
    _scope_2_15(_int_0, _int_1, _int_2, _int_3);
  }
}

