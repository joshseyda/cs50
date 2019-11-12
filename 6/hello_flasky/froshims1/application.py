from flask import Flask, render_template, request, redirect
import csv

app = Flask(__name__)

# registered students
# students = []

@app.route("/")
def index():
    return render_template("index.html")

# @app.route("/registrants")
# def registrants():
#     return render_template("registered.html", students=students)

@app.route("/register", methods=["POST"])
def register():
    if not request.form.get("name") or not request.form.get("dorm"):
        return render_template("failure.html")
    file = open("registered.csv", "a")
    writer = csv.writer(file)
    writer.writerow((request.form.get("name"), request.form.get("dorm")))
    file.close()
    return render_template("success.html")
