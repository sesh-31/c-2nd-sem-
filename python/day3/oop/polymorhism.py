class hajurbuwa :
    def property(self):
        print("sabai hjr buwa ko property")
class buwa(hajurbuwa):
    def property(self):
        super().property()
        print("buwa ko property")
obj =buwa()
obj.property()
