#include "vars_info.h"
#include <stdio.h>

void input(int [], int);
int check(int [], int [], int, int);
void input(int _array_int_0[], int _int_0)
{
  _function_1_1(_array_int_0, _int_0);
  {
    int _int_1 = 0;
    while (_loop_3_2(_array_int_0, _int_0, _int_1), _int_1 < _int_0)
    {
      scanf("%d", &_array_int_0[_int_1]);
      _int_1++;
      _scope_4_3(_array_int_0, _int_0, _int_1);
    }

    _scope_2_4(_array_int_0, _int_0, _int_1);
  }
}

int check(int _array_int_0[], int _array_int_1[], int _int_0, int _int_1)
{
  _function_1_5(_array_int_0, _array_int_1, _int_0, _int_1);
  {
    int _int_4;
    int _int_2 = 0;
    int _int_3 = -1;
    for (_int_4 = 0; _loop_3_6(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _int_3, _int_4), _int_4 < _int_0; _int_4++)
    {
      if (_array_int_0[_int_4] == _array_int_1[_int_2])
      {
        _if_5_7(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _int_3, _int_4);
        {
          _int_3 = 1;
          _int_4++;
          _int_2++;
          while (_loop_7_8(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _int_3, _int_4), (_int_4 < _int_0) && (_int_2 < _int_1))
          {
            if (_array_int_0[_int_4] != _array_int_1[_int_2])
            {
              _if_9_9(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _int_3, _int_4);
              {
                _int_3 = -1;
                _int_4--;
                _int_2 = 0;
                {
                  _break_11_10(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _int_3, _int_4);
                  break;
                }
                _scope_10_11(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _int_3, _int_4);
              }
            }

            _int_4++;
            _int_2++;
            _scope_8_12(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _int_3, _int_4);
          }

          _scope_6_13(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _int_3, _int_4);
        }
      }

      _scope_4_14(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _int_3, _int_4);
    }

    {
      _return_3_15(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _int_3, _int_4);
      return _int_3;
    }
    _scope_2_16(_array_int_0, _array_int_1, _int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

int main()
{
  _function_1_17();
  {
    int _int_0;
    int _int_1[20];
    int _int_2;
    int _int_3[20];
    int _int_4;
    scanf("%d", &_int_0);
    input(_int_1, _int_0);
    scanf("%d", &_int_2);
    input(_int_3, _int_2);
    _int_4 = check(_int_1, _int_3, _int_0, _int_2);
    if (_int_4 == 1)
    {
      _if_3_18(_int_0, _int_1, _int_2, _int_3, _int_4);
      printf("YES\n");
    }
    else
    {
      _else_3_20(_int_0, _int_1, _int_2, _int_3, _int_4);
      if (_int_4 == (-1))
      {
        _if_4_19(_int_0, _int_1, _int_2, _int_3, _int_4);
        printf("NO\n");
      }

    }

    {
      _return_3_21(_int_0, _int_1, _int_2, _int_3, _int_4);
      return 0;
    }
    _scope_2_22(_int_0, _int_1, _int_2, _int_3, _int_4);
  }
}

