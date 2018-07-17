using System;

public class Class1
{
	public Class1()
	{
	}

    public static void Main()
    {
        Console.WriteLine("test");
    }
}


[System.ComponentModel.RunInstaller(true)]
public class Sample : System.Configuration.Install.Installer
{
    public override void Uninstall(System.Collections.IDictionary savedState)
    {
        Console.WriteLine("pow");
    }
}
