crun() {
  if [[ -z "$1" ]]; then
    echo "No file provided"
    return 1
  fi

  filename=$(basename "$1")
  gcc "$filename" -o "./${filename%.*}"
  "./${filename%.*}"
  rm "${filename%.*}"
  return 0
}
