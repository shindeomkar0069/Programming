def main():
    try:
        fobj=open("Demo.txt","a")
        print("File Gets Opened")

        fobj.write(" Pune Maharashtra")
        
        fobj.close
        
    except FileNotFoundError as fobj:
        print("File is not found in current directroy")

if __name__=="__main__":
    main()