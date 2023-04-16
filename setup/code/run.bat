@echo off


set codepath=%~dp0

call :getpath "%codepath%..\.py_embed\python.exe"

echo Interpreter path: %interpreterpath%
echo Main path: "%codepath%main.py"
echo.
echo Opening program...

"%interpreterpath%" "%codepath%main.py"

echo Exiting program...

exit


:getpath
    set interpreterpath=%~f1
    exit /b