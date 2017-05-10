// Declare second integer, double, and String variables.
    int p;
    double q;
    string r;
    
    // Read and save an integer, double, and String to your variables.
    cin>>p;
    cin>>q;
    getline(cin >> ws, r);

    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<<i+p<<endl;
    
    // Print the sum of the double variables on a new line.
    cout<<fixed<<setprecision(1)<<d+q<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s<<r;
