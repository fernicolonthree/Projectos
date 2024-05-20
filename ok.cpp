int mes;
double gano;

cout << "Entre la Cantidad ganada por el emp: ";
cin >> gano;

cin >> mes;

if (mes > 6 && gano >= 15000.00)
{
    cout << "Employee has a bonus\n";
}
else
{
    cout << "No bonus\n";
}
