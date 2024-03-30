import pandas as pd

df = pd.DataFrame({'Data': [11,21,51,101,111,121]})

writer = pd.ExcelWriter('MarvellousPandas.xlsx', engine='xlswriter')

df.to_excel(writer, sheet_name='Sheet1')

writer.save()