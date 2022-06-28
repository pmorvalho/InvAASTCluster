#include "vars_info.h"
#include<stdio.h>
#include<math.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    int _int_3;
    int _int_4;
    scanf("%d", &_int_0);
    for (_int_1 = 1; _loop_3_2(_int_0, _int_1), _int_1 <= _int_0; _int_1++)
    {
      for (_int_2 = _int_1 - 1; _loop_5_3(_int_0, _int_1, _int_2), _int_2 > 0; _int_2--)
      {
        _int_3 = _int_0 - _int_2;
        printf("%d", _int_3);
        _scope_6_4(_int_0, _int_1, _int_2, _int_3);
      }

      for (_int_4 = (_int_0 - _int_1) + 1; _loop_5_5(_int_0, _int_1, _int_2, _int_3, _int_4), _int_4 > 0; _int_4--)
      {
        printf("%d", _int_0);
        _scope_6_6(_int_0, _int_1, _int_2, _int_3, _int_4);
      }

      printf("\n");
      _scope_4_7(_int_0, _int_1, _int_2, _int_3, _int_4);
    }

    {
      _return_3_8(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_9(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

