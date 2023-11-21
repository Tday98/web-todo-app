FILEPATH = "todos.txt"

def get_todos(filepath=FILEPATH):
    """Takes a filepath as input and reads the
    file returning a list object.
    """
    with open(filepath, 'r') as file_local:
        todos_local: list[str] = file_local.readlines()
    return todos_local


def write_todos(todos_arg, filepath=FILEPATH):
    """
    Takes a list object, filepath and writes to the file.
    :param todos_arg:
    :type filepath: object
    """
    with open(filepath, 'w') as file_local:
        file_local.writelines(todos_arg)