Buffer get input from the screen once you hit an enter.

cin - can only read character not whole line, if it encounter space in line it will break

cin.get() - you can read character by character the whole line
```
char temp = cin.get();
while(temp != '\n'){
	cout << temp;
	temp = cin.get();
}
```


cin.getline() - you can read whole line
