
# 21) Write a Python program to create a database and a table using SQLite3. 
import sqlite3

# Connect to the SQLite3 database (or create it if it doesn't exist)
conn = sqlite3.connect('my_database.db')

# Create a cursor object
cursor = conn.cursor()

# Create a table if it doesn't exist
cursor.execute("""
CREATE TABLE IF NOT EXISTS customer (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    price INTEGER NOT NULL
)
""")

print("Database and table created successfully.")

# Commit changes and close the connection
conn.commit()
conn.close()



# 22) Write a Python program to insert data into an SQLite3 database and fetch it. 

# Connect to the SQLite3 database
conn = sqlite3.connect('my_database.db')

# Create a cursor object
cursor = conn.cursor()

# Insert data into the table
cursor.execute("INSERT INTO customer (name, price) VALUES (?, ?)", ('Alice', 100))
cursor.execute("INSERT INTO customer (name, price) VALUES (?, ?)", ('Bob', 200))

# Commit the changes
conn.commit()

print("Data inserted successfully.")

# Fetch and display the data
cursor.execute("SELECT * FROM customer")
rows = cursor.fetchall()

print("\nCustomer Table Data:")
for row in rows:
    print(f"ID: {row[0]}, Name: {row[1]}, Price: {row[2]}")

# Close the connection
conn.close()
