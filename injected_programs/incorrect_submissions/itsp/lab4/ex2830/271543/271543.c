#include "vars_info.h"
#include<stdio.h>

int main()
{
  _function_1_1();
  {
    int _int_0;
    int _int_1;
    int _int_4;
    int _int_6;
    int _int_2;
    int _int_3;
    int _int_5;
    scanf("%d", &_int_0);
    scanf("%d", &_int_1);
    if (_int_0 > _int_1)
    {
      _if_3_2(_int_0, _int_1);
      {
        _int_2 = _int_0;
        _int_3 = _int_1;
        _scope_4_3(_int_0, _int_1, _int_2, _int_3);
      }
    }
    else
    {
      _else_3_5(_int_0, _int_1, _int_2, _int_3);
      {
        _int_2 = _int_1;
        _int_3 = _int_0;
        _scope_4_4(_int_0, _int_1, _int_2, _int_3);
      }
    }

    scanf("%d", &_int_4);
    if (_int_4 > _int_3)
    {
      _if_3_6(_int_0, _int_1, _int_2, _int_3, _int_4);
      {
        if (_int_4 > _int_2)
        {
          _if_5_7(_int_0, _int_1, _int_2, _int_3, _int_4);
          {
            _int_5 = _int_3;
            _int_3 = _int_2;
            _int_2 = _int_4;
            _scope_6_8(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          }
        }
        else
        {
          _else_5_10(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          {
            _int_5 = _int_3;
            _int_3 = _int_4;
            _scope_6_9(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
          }
        }

        _scope_4_11(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      }
    }
    else
    {
      _else_3_13(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      {
        _int_5 = _int_4;
        _scope_4_12(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5);
      }
    }

    scanf("%d", &_int_6);
    if (_int_6 > _int_3)
    {
      _if_3_14(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
      {
        if (_int_6 > _int_2)
        {
          _if_5_15(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
          {
            _int_3 = _int_2;
            _scope_6_16(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
          }
        }
        else
        {
          _else_5_18(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
          {
            _int_3 = _int_6;
            _scope_6_17(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
          }
        }

        _scope_4_19(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
      }
    }

    printf("%d", _int_3);
    {
      _return_3_20(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
      return 0;
    }
    _scope_2_21(_int_0, _int_1, _int_2, _int_3, _int_4, _int_5, _int_6);
  }
}

