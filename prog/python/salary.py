days=float(input("Enter No Days Present:"))
wages=float(input("Enter wages per Day:"))
basic=wages*days;
HRA=basic*0.1;
DA=basic*0.05;
PF=basic*0.12;  
netsalary=basic+HRA+DA-PF;
print("\nBasic:%lf \nHRA:%lf \nDA:%lf \nPF:%lf \nNet Salary:%lf" %(basic,HRA,DA,PF,netsalary));
  
