import os
import smtplib
from flask import Flask, render_template, request, redirect

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
    name = request.form.get("name")
    dorm = request.form.get("dorm")
    email = request.form.get("email")
    if not name or not dorm or not email:
        return render_template("failure.html")
    message = "You are registered!"
    server = smtplib.SMTP("smtp.gmail.com", 587)
    server.starttls()
    server.login("jharvard@cs50.net", os.getenv("PASSWORD"))
    server.sendmail("jharvard@cs50.net", email, message)
    # students.append(f"{name} from {dorm}")
    # return redirect("/registrants")
    return render_template("success.html")
