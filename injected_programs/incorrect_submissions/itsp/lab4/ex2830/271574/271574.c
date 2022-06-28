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
    int _int_4;
    scanf("%d %d %d %d", &_int_0, &_int_1, &_int_2, &_int_3);
    if (_int_1 < _int_0)
    {
      _if_3_2(_int_0, _int_1, _int_2, _int_3);
      {
        _int_4 = _int_0;
        _int_0 = _int_1;
        _int_1 = _int_4;
        _scope_4_3(_int_0, _int_1, _int_2, _int_3, _int_4);
      }
    }

    if (_int_2 < _int_1)
    {
      _if_3_4(_int_0, _int_1, _int_2, _int_3, _int_4);
      {
        _int_4 = _int_2;
        _int_2 = _int_1;
        _int_1 = _int_4;
        if (_int_1 < _int_0)
        {
          _if_5_5(_int_0, _int_1, _int_2, _int_3, _int_4);
          {
            _int_4 = _int_0;
            _int_0 = _int_1;
            _int_1 = _int_4;
            _scope_6_6(_int_0, _int_1, _int_2, _int_3, _int_4);
          }
        }

        _scope_4_7(_int_0, _int_1, _int_2, _int_3, _int_4);
      }
    }

    if (_int_3 < _int_2)
    {
      _if_3_8(_int_0, _int_1, _int_2, _int_3, _int_4);
      {
        _int_4 = _int_3;
        _int_3 = _int_2;
        _int_2 = _int_4;
        if (_int_2 < _int_1)
        {
          _if_5_9(_int_0, _int_1, _int_2, _int_3, _int_4);
          {
            _int_4 = _int_2;
            _int_2 = _int_1;
            _int_1 = _int_4;
            if (_int_1 < _int_0)
            {
              _if_7_10(_int_0, _int_1, _int_2, _int_3, _int_4);
              {
                _int_4 = _int_0;
                _int_0 = _int_1;
                _int_1 = _int_4;
                _scope_8_11(_int_0, _int_1, _int_2, _int_3, _int_4);
              }
            }

            _scope_6_12(_int_0, _int_1, _int_2, _int_3, _int_4);
          }
        }

        _scope_4_13(_int_0, _int_1, _int_2, _int_3, _int_4);
      }
    }

    printf("%d", _int_2);
    {
      _return_3_14(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_15(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

