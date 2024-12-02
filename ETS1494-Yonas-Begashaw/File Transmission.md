# Problem Analysis  
**Input:** File size.   
**Output:** The time it takes to transfer the file.  
**Operation:**   
- Variable declaration that holds an input and operation results.
- Inititalizing speed to 960.
- Calculate time: time = file size / speed.
- Calculate days: days = days / 86400.
- Update time: time = time % 86400.
- Calculate hours: hours = time / 3600.
- Update time: time = time % 3600.
- Calcualte minutes: minutes = time / 60.
- Update time: time = time % 60.
- Calculate seconds: seconds = time.
- Print days, hours, minutes, and seconds.


# Pseusocode  
1. Start.
2. Read file size.
3. Calculate time: time = file size / speed.
4. Calculate days: days = days / 86400.
5. Update time: time = time % 86400.
6. Calculate hours: hours = time / 3600.
7. Update time: time = time % 3600.
8. Calcualte minutes: minutes = time / 60.
9. Update time: time = time % 60.
10. Calculate seconds: seconds = time.
11. Print days, hours, minutes, and seconds.   
12. End.

# Flowchart  
```mermaid   
flowchart TD   
A([Start]) --> B[/ Read file size /]
B --> C[ time = file size / speed ]
C --> D[ days = time / 86400,    time = time % 86400]
D --> E[ hours = time / 3600,    time = time % 3600 ]
E --> F[ minutes = time / 60,    time = time % 60]  
F --> G[ seconds = time]
G --> H[/ Print days, hours, minutes and seconds/]
H --> I([ End ])
