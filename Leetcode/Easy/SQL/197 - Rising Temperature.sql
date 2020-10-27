-- table creation for testing
/*
Create table If Not Exists coding_exercises.Weather (
    Id int, 
    RecordDate date, 
    Temperature int);
Truncate table Weather;
insert into coding_exercises.Weather (Id, RecordDate, Temperature) values ('1', '2015-01-01', '10');
insert into coding_exercises.Weather (Id, RecordDate, Temperature) values ('2', '2015-01-02', '25');
insert into coding_exercises.Weather (Id, RecordDate, Temperature) values ('3', '2015-01-03', '20');
insert into coding_exercises.Weather (Id, RecordDate, Temperature) values ('4', '2015-01-04', '30');
*/

SELECT B.Id 
FROM coding_exercises.Weather B
JOIN coding_exercises.Weather A ON B.RecordDate = DATE_ADD(A.RecordDate, INTERVAL 1 DAY)
WHERE B.Temperature > A.Temperature;