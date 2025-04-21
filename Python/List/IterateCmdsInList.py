"""Consider a list (list = []). You can perform the following commands:

insert i e: Insert integer  at position .
print: Print the list.
remove e: Delete the first occurrence of integer .
append e: Insert integer  at the end of the list.
sort: Sort the list.
pop: Pop the last element from the list.
reverse: Reverse the list.

Initialize your list and read in the value of  followed by  lines of commands where each command will be of the  types listed above. Iterate through each command in order and perform the corresponding operation on your list."""

"""
sample input:
12
insert 0 5
insert 1 10
insert 0 6
print
remove 6
append 9
append 1
sort
print
pop
reverse
print

output:
[6, 5, 10]
[1, 5, 9, 10]
[9, 5, 1]
"""
if __name__ == '__main__':
    N = int(input())
    my_list = []

    for _ in range(N):
        command = input().strip().split()
        cmd = command[0]

        if cmd == 'insert':
            i, e = int(command[1]), int(command[2])
            my_list.insert(i, e)
        elif cmd == 'print':
            print(my_list)
        elif cmd == 'remove':
            e = int(command[1])
            my_list.remove(e)
        elif cmd == 'append':
            e = int(command[1])
            my_list.append(e)
        elif cmd == 'sort':
            my_list.sort()
        elif cmd == 'pop':
            my_list.pop()
        elif cmd == 'reverse':
            my_list.reverse()

print(my_list)
