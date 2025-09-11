import datetime as dt

td = dt.timedelta(seconds=32400)
print(dt.datetime.now().date() + td)