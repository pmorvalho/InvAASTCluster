#include "vars_info.h"
#include <stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_3[50];
    int _int_0;
    int _int_1;
    int _int_2;
    scanf("%d", &_int_0);
    for (_int_1 = 0; _loop_3_2(_int_0, _int_1), _int_1 < _int_0; _int_1++)
    {
      for (_int_2 = _int_1 + 1; _loop_5_3(_int_0, _int_1, _int_2), _int_2 < _int_0; _int_2++)
      {
        if (_int_3[_int_1] == _int_3[_int_2])
        {
          _if_7_4(_int_0, _int_1, _int_2);
          {
            printf("YES");
            {
              _return_9_5(_int_0, _int_1, _int_2);
              return 0;
            }
            _scope_8_6(_int_0, _int_1, _int_2);
          }
        }

        _scope_6_7(_int_0, _int_1, _int_2);
      }

      _scope_4_8(_int_0, _int_1, _int_2);
    }

    printf("NO");
    {
      _return_3_9(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_10(_int_0, _int_1, _int_2);
  }
}

