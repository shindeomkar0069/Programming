def main():
    try:
        open("Demo.txt","w")
        print("File Gets Opened")
    except FileNotFoundError as fobj:
        print("File is not found in current directroy")

if __name__=="__main__":
    main()