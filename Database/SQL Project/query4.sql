SELECT itemID FROM (SELECT itemID, MAX(currently) FROM items);