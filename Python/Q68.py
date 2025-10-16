import tkinter as tk
import time

root = tk.Tk()
root.title("🕒 Digital Clock")

label = tk.Label(root, font=("Arial", 50, "bold"), bg="black", fg="cyan")
label.pack(padx=40, pady=40)

def update_time():
    current_time = time.strftime("%H:%M:%S")
    label.config(text=current_time)
    label.after(1000, update_time)  # update every 1 second

update_time()
root.mainloop()
