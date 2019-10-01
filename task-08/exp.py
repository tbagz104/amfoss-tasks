from PIL import Image
except ImportError:
    import Image
import pytesseract 


text = pytesseract.image_to_string(Image.open('exp.png'), config='--psm 7')  #pagesegmode(psm) value 7 = Treat the image as a single text line

print(text) 
print(eval(text))

