directory="./"

if [ ! -d "$directory" ]; then
  echo "Directory not found: $directory"
  exit 1
fi

for file in "$directory"/*; do
  if [ -f "$file" ]; then
    filename=$(basename "$file")

    if [[ "$filename" == *.c ]] || [[ "$filename" == *.h ]]; then
      echo -e "\033[38;5;198mCompiling\033[0m \033[36m$filename\033[0m"
      gcc "$file" -o "../bin/${filename%.*}"
    fi
  fi
done
