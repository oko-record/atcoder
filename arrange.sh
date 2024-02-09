#!/bin/bash

# Initial folder to decrement from
folderName=333

# Start date for the search
currentDate="2023-12-16"

# Number of weeks to go back
weeksBack=20

for (( i=0; i<weeksBack; i++ ))
do
  startDate="$currentDate"
  # Calculate the next day as endDate
  endDate=$(date -j -v+1d -f "%Y-%m-%d" "$currentDate" "+%Y-%m-%d")

  # Create a directory with the current folder name
  mkdir -p "abc$folderName"
  
  # Find files and move them to the current directory
  find ./ -type f -newermt "$startDate" ! -newermt "$endDate" -exec git mv {} "abc$folderName/" \;
  
  # Decrement the folder name for the next iteration
  ((folderName--))
  # Move the currentDate back by one week for the next iteration
  currentDate=$(date -j -v-1w -f "%Y-%m-%d" "$currentDate" "+%Y-%m-%d")
done

