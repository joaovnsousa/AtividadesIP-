public class MapTester {     private HashMap<String, String> phoneBook = new HashMap<String, String> ();      public MapTester()     {         phoneBook.put("Homer Jay Simpson", "(531) 9392 4587");         phoneBook.put("Charles Montgomery Burns", "(531) 5432 1945");        phoneBook.put("Apu Nahasapeemapetilon", "(531) 4234 4418");        }          public void enterNumber(String name, String number)     {         phoneBook.put(name, number);     }      public String lookupNumber(String name)      {         return phoneBook.get(name);     }    } 