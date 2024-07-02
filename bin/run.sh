directory="./"

if [ ! -d "$directory" ]; then
  echo "Directory not found: $directory"
  exit
fi

for file in "$directory"/*; do
  filename=$(basename "$file")

  if [[ "$filename" == *.sh ]]; then
      continue
  fi

  echo -e "\033[32mRunning\033[0m \033[36m$filename\033[0m"
  ./"$filename"
  printf "\n"
done
