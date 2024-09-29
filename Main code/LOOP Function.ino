void loop()
{
  reading();
  
  // AVOIDING OBSTACLES
  if (Distance <= 30)
  {
    Right(70, 70);
    delay(1500);
    FWD(70);
    delay(2000);
    Left(70, 70);
    delay(1500);
    FWD(70);
    delay(2000);
    Left(70, 70);
    delay(1500);
    FWD(70);
    delay(2000);
    Right(70, 70);
  }
  
  // LINE FOLLOWING
  else
  {
    // Move Forward if all sensors are detecting white (W)
    if (L2 == W && L1 == W && R1 == W && R2 == W)
    {
      FWD(40);
    }
    // Adjust left if L1 detects black (B) and rest detect white
    else if (L2 == W && L1 == B && R1 == W && R2 == W)
    {
      Left(75, 70);
    }
    // Adjust right if R1 detects black (B) and rest detect white
    else if (L2 == W && L1 == W && R1 == B && R2 == W)
    {
      Right(70, 75);
    }
    // Move forward if both L1 and R1 detect black (B)
    else if (L2 == W && L1 == B && R1 == B && R2 == W)
    {
      FWD(40);
    }
    // Handle sharp right turn when R1 and R2 detect black (B)
    else if (L2 == W && L1 == W && R1 == B && R2 == B)
    {
      while (L1 == W)
      {
        Right(65, 70);
        reading();  // Update sensor values
      }
    }
    // Handle sharp left turn when L1 and L2 detect black (B)
    else if (L2 == B && L1 == B && R1 == W && R2 == W)
    {
      while (R1 == W)
      {
        Left(70, 65);
        reading();  // Update sensor values
      }
    }
    // Handle right turn correction when L1 and L2 detect black (B)
    else if (L2 == W && L1 == B && R1 == B && R2 == B)
    {
      while (L1 == B)
      {
        Right(70, 90);
        reading();  // Update sensor values
      }
    }
    // Handle left turn correction when R1 and R2 detect black (B)
    else if (L2 == B && L1 == B && R1 == B && R2 == W)
    {
      while (R1 == B)
      {
        Left(90, 70);
        reading();  // Update sensor values
      }
    }
    // Handle right correction when R2 detects black (B)
    else if (L2 == W && L1 == W && R1 == W && R2 == B)
    {
      while (R1 == W)
      {
        Right(70, 90);
        reading();  // Update sensor values
      }
    }
    // Handle left correction when L2 detects black (B)
    else if (L2 == B && L1 == W && R1 == W && R2 == W)
    {
      while (L1 == W)
      {
        Left(90, 70);
        reading();  // Update sensor values
      }
    }
    // Move forward if all sensors detect black (B)
    else if (L2 == B && L1 == B && R1 == B && R2 == B)
    {
      FWD(40);
    }
    // Handle sharp right turn when L3 detects white and R3 detects black
    else if (L3 == W && L1 == B && R3 == B)
    {
      while (L1 == B)
      {
        Right(50, 100);
        reading();  // Update sensor values
      }
    }
    // Handle sharp left turn when L3 detects black and R3 detects white
    else if (L3 == B && R1 == B && R3 == W)
    {
      while (R1 == B)
      {
        Left(100, 50);
        reading();  // Update sensor values
      }
    }
  }
}