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
    int _int_5 = 0;
    if (_int_1 > _int_4)
    {
      _if_3_2(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      {
        _int_4 = _int_1;
        _scope_4_3(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      }
    }

    if (_int_2 > _int_4)
    {
      _if_3_4(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      {
        _int_4 = _int_2;
        _scope_4_5(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      }
    }

    if (_int_3 > _int_4)
    {
      _if_3_6(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      {
        _int_4 = _int_3;
        _scope_4_7(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      }
    }

    if (_int_4 != _int_0)
    {
      _if_3_8(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      {
        _int_5 = _int_0;
        if ((_int_1 > _int_5) && (_int_1 != _int_4))
        {
          _if_5_9(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          {
            _int_5 = _int_1;
            _scope_6_10(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          }
        }

        if ((_int_2 > _int_5) && (_int_2 != _int_4))
        {
          _if_5_11(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          {
            _int_5 = _int_2;
            _scope_6_12(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          }
        }

        if ((_int_3 > _int_5) && (_int_3 != _int_4))
        {
          _if_5_13(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          _int_5 = _int_3;
        }

        _scope_4_14(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      }
    }
    else
    {
      _else_3_20(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      {
        _int_5 = _int_1;
        if ((_int_2 > _int_5) && (_int_2 != _int_4))
        {
          _if_5_15(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          {
            _int_5 = _int_2;
            _scope_6_16(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          }
        }

        if ((_int_3 > _int_5) && (_int_3 != _int_4))
        {
          _if_5_17(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          {
            _int_5 = _int_3;
            _scope_6_18(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          }
        }

        _scope_4_19(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      }
    }

    printf("The second largest number is %d", _int_5);
    {
      _return_3_21(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      return 0;
    }
    _scope_2_22(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
  }
}

