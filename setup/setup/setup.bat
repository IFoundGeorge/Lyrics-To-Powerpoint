@echo off
title Setup


set codepath=%~dp0

call :getpath "%codepath%..\.py_embed\python.exe"

echo Interpreter path: %interpreterpath%
echo Setup path: "%codepath%setup_source.py"
echo.
echo Opening setup...


"%interpreterpath%" "%codepath%setup_source.py"

echo Exiting setup...

exit


:getpath
    set interpreterpath=%~f1
    exit /b