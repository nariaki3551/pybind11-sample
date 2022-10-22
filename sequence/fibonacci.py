import sequence.sequence_cpp

def fibonacci(n: int) -> int:
    print("python::", end="")
    return sequence.sequence_cpp.fibonacci(n)
