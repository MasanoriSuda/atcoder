def main():
    N = input()
    S = input()

    # print(N)
    for i in range(len(S) - 1):
        if S[i] == "a" and S[i + 1] == "b" or S[i] == "b" and S[i + 1] == "a":
            print("Yes")
            return
    print("No")
    return


if __name__ == "__main__":
    main()
