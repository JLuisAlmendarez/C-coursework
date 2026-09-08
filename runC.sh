if [ -z "$1" ]; then
    echo "Uso: $0 archivo.c"
    exit 1
fi

archivo="$1"
nombre="${archivo%.c}"

gcc "$archivo" -o "$nombre.exe" && ./"$nombre.exe"

