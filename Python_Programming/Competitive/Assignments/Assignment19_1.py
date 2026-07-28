Function=lambda a :a *a 

def main():
    Element=int(input("Enter the element:"))

    iRet=Function(Element)
    print(f"power of two of {Element}:",iRet)

if __name__=="__main__":
    main()