-- table creation for testing
/* 
CREATE TABLE coding_exercises.person (
    Id int NOT NULL UNIQUE AUTO_INCREMENT,
    Email varchar(255),
    PRIMARY KEY (Id)
); 
*/

/*
INSERT INTO coding_exercises.person (`Email`) VALUES ("a@b.com");
INSERT INTO coding_exercises.person (`Email`) VALUES ("d@b.com");
INSERT INTO coding_exercises.person (`Email`) VALUES ("a@b.com");
*/

-- Write your MySQL query statement below

SELECT Email FROM Person GROUP BY Email HAVING COUNT(Email) > 1;
 