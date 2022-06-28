#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    int _int_3;
    scanf("%d %d %d %d", &_int_0, &_int_1, &_int_2, &_int_3);
    int _int_4 = _int_0;
    int _int_5 = _int_2;
    int _int_6;
    if (_int_1 > _int_0)
    {
      _if_3_2(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      {
        _int_4 = _int_1;
        _int_1 = _int_0;
        _scope_4_3(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      }
    }

    if (_int_3 > _int_5)
    {
      _if_3_4(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      {
        _int_5 = _int_3;
        _int_3 = _int_2;
        _scope_4_5(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      }
    }

    if ((_int_4 > _int_5) && (_int_1 > _int_5))
    {
      _if_3_6(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      _int_6 = _int_1;
    }

    printf("The second largest number is %d", _int_6);
    {
      _return_3_7(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
      return 0;
    }
    _scope_2_8(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
  }
}

