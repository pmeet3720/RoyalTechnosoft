"""
*            * * * * *               *       * * * * *
* *            * * * *             * *       * * * *
* * *            * * *           * * *       * * *
* * * *            * *         * * * *       * *
* * * * *            *       * * * * *       *
"""


# number triangle
n = int(input("enter number of rows: "))


# for i in range(1,n+1):
#     for k in range(n,i,-1):
#         print(' ',end=' ')
#     for j in range(1,i+1):
#         print('*',end=' ')
#     print()

# for i in range(1,n+1):
#     for k in range(1,i):
#         print(' ',end=' ')
#     for j in range(n,i-1,-1):
#         print('*',end=' ')
#     print()


"""  pyramid traingle pattern  """

"""
    *
   * *
  * * *
 * * * *
* * * * * 
 * * * *
  * * *
   * *
    *
"""

for i in range(1,n):
    for k in range(n,i,-1):
        print(' ',end='')
    for j in range(1,i+1):
        print('*',end=' ')
    print()

for i in range(1,n+1):
    for k in range(1,i):
        print(' ',end='')
    for j in range(n,i-1,-1):
        print('*',end=' ')
    print()
