from flask import Flask, render_template, request

from cs50 import SQL

app = Flask(__name__)

@app.route('/')
def index:
  query = request.args.get("q")
  rows = db.execute("SELECT * FROM Album WHERE Title = :q", q=query)
  return render_template("index.html", albums=rows)