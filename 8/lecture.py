from cs50 import SQL

db = SQL("sqlite:///lecture.db")
#  Query database for all albums
rows = db.execute("SELECT * FROM Album WHERE title = :t", t=sys.argv[1])
  # for each album in db 
for row in rows:
  # print title of album
  print(row["Title"])

# never trust the users input! SQL injection attacks are super dangerous. if you don't sanitize their input, anyone can run commands on the db