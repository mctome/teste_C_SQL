create TABLE if not EXISTS dogs (
  id INTEGER NOT NULL PRIMARY KEY,
  name VARCHAR (50) NOT NULL
);

create TABLE if not EXISTS cats (
  id INTEGER NOT NULL PRIMARY KEY,
  name VARCHAR (50) NOT NULL
);

insert into dogs (name)
VALUEs
	("Doggo"),
    ("Fluffy"),
    ("Zeus")
;

insert into cats (name)
VALUES
	("King"),
    ("Fluffy"),
    ("Mel")
;
