# LinkedList vs ArrayList
###### Encoder: Ahmet Can Erol

*Bu projemizde; Diziler ve Bağlantılı Listeler arasındaki performans farkını ölçmek için Ekleme(),Güncelleme(),Silme() metotlarına sırasıyla 10,100 ve 1000 gibi veriler göndererek Liste yapılarının performansını ölçmeyi hedeflemekteyiz. Bu ölçüm işlemini C++ ‘n bize sunmuş olduğu chrono kütüphanesini kullanarak yapmaktayız. Verileri integer değerde metotlarımıza verip, yine çıktılarımızı integer değerde almaktayız. Performans farkını ölçerken kullandığımız chrono kütüphanesinin saniye cinsleri ise; mikro saniye ve belli yerlerde mikro saniye yetersiz kaldığı için nano saniyedir.*

 *-Dizi(ArrayList):  Dizi kullanmamızdaki amaç; Dinamik dizi kavramını benimsemek, dinamik dizinin bize getirdiği artıları, dizilerin genel olarak önceden veri miktarının belirlenmiş olma problemini göstermektir.*
 
 *-Bağlantılı Liste(LinkedList): Bağlantılı Liste kullanmamızdaki amaç; Bağlantılı bir liste oluşturup, oluşturduğumuz bağlantılı listenin düğümleri arasında gezinebilmek, bağlantılı listenin başa ekleme yaparken Diziye göre getirdiği performans artışını göstermektir.*

 ## English
 
In this project, the goal is to measure the performance difference between arrays and linked lists by using the Insert(), Update(), and Delete() methods with various data sizes like 10, 100, and 1000. The performance measurement is done using the C++ chrono library, and the data sent to the methods and the output results are in integer format. The chrono library provides time measurements in seconds and, in some cases, nanoseconds when microseconds are insufficient.

- Array (ArrayList): The use of an array aims to embrace the concept of a dynamic array and highlight the advantages it offers. It also showcases how dynamic arrays can address the problem of fixed data size associated with arrays in general.

- Linked List (LinkedList): The use of a linked list is intended to create a linked list and navigate between its nodes. It demonstrates the performance improvement linked lists offer, especially in terms of inserting elements at the beginning, compared to arrays.

This project essentially compares the performance of arrays and linked lists in terms of their ability to handle data insertion, updates, and deletions for different data sizes. The choice between arrays and linked lists often depends on the specific requirements of the application and the trade-offs between various operations, such as insertion and traversal.


