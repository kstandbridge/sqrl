CurDir=$(pwd)
BuildDir="$CurDir/bin"

IncludeDirectories="-I $CurDir/lib/xwn"
CommonCompilerFlags="-nostdlib -Og -g -ggdb -Wall -Werror -Wno-unused-function $IncludeDirectories"
CommonLinkerFlags="-pthread"

[ -d $BuildDir ] || mkdir -p $BuildDir

pushd $BuildDir > /dev/null

gcc $CommonCompilerFlags "$CurDir/src/unit_tests.c" -o unit_tests $CommonLinkerFlags
if [ $? -eq 0 ]
then
    wc -c unit_tests
    ./unit_tests
fi

popd > /dev/null