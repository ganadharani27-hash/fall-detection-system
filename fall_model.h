// fall_model.h -- Auto-generated for ESP32. Do not edit.
// Requires: features.h (struct Features defined there)
#pragma once
#define N_TREES 10
#define N_FEATURES 46
static int t0(const Features*f){
 if(f->acc_x_rms<=131.333717f){
  if(f->acc_y_min<=-157.962143f){
   if(f->acc_y_rms<=276.754501f){
    if(f->acc_z_jerk_mean<=4.171904f){
     if(f->gyro_x_range<=720.638184f){
      if(f->acc_z_std<=26.568528f){
       if(f->gyro_y_std<=4.306181f){
        if(f->gyro_z_range<=11.003311f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_min<=-363.035950f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_jerk_var<=16.730536f){
        if(f->gyro_x_max<=562.000000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_min<=-363.500000f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_x_mean<=-219.305000f){
       if(f->gyro_x_max<=-113.186447f){
        if(f->gyro_y_min<=-580.053619f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_std<=40.725988f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_range<=125.134651f){
        if(f->acc_x_jerk_var<=11.384859f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_std<=16.833456f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->acc_z_jerk_var<=140.673203f){
      if(f->gyro_x_max<=523.992859f){
       if(f->acc_z_std<=34.064434f){
        if(f->gyro_y_range<=1019.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_jerk_var<=29.264053f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_jerk_var<=57.309559f){
        if(f->gyro_y_rms<=306.115219f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_range<=1323.500000f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_z_rms<=211.535301f){
       if(f->gyro_y_rms<=984.364166f){
        if(f->gyro_x_rms<=1340.791077f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_rms<=836.998444f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_y_rms<=225.321861f){
        if(f->acc_y_max<=138.022514f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_rms<=556.369934f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_z_rms<=305.565704f){
     if(f->gyro_x_std<=975.249481f){
      if(f->acc_y_std<=202.709496f){
       if(f->gyro_x_range<=1340.500000f){
        if(f->acc_z_std<=37.001122f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->svm_gyro_mean<=747.000061f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_jerk_var<=429.551834f){
        if(f->gyro_x_max<=1363.550354f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->svm_acc_max<=1015.280945f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->gyro_x_mean<=1339.830017f){
       if(f->acc_y_min<=-644.500000f){
        if(f->gyro_z_min<=-1373.822632f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_range<=953.742828f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_std<=197.623528f){
        if(f->gyro_z_range<=769.000000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        return 1;
       }
      }
     }
    }else{
     if(f->gyro_z_range<=4092.500000f){
      if(f->gyro_z_std<=705.391907f){
       if(f->acc_y_jerk_var<=3793.858032f){
        if(f->svm_gyro_mean<=1878.149902f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_max<=9102.000000f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       return 0;
      }
     }else{
      return 0;
     }
    }
   }
  }else{
   if(f->gyro_z_rms<=15.797310f){
    if(f->acc_y_mean<=-62.065001f){
     if(f->svm_acc_max<=242.360268f){
      if(f->acc_y_mean<=-83.151367f){
       if(f->acc_x_max<=11.955115f){
        if(f->svm_gyro_mean<=55.653973f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_min<=167.500000f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_y_range<=45.500000f){
        if(f->gyro_z_rms<=9.017176f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_range<=26.500000f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_mean<=-29.435000f){
       if(f->gyro_z_max<=24.500000f){
        if(f->acc_x_rms<=46.658237f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_mean<=-93.055000f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_y_range<=10.371010f){
        if(f->gyro_x_max<=11.500000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->svm_acc_max<=277.483322f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->svm_gyro_max<=82.148102f){
      if(f->acc_x_mean<=-26.872461f){
       if(f->gyro_z_min<=-33.500000f){
        return 1;
       }else{
        if(f->acc_z_mean<=255.804192f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_range<=39.971081f){
        if(f->svm_gyro_mean<=29.190529f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_rms<=18.899705f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_z_range<=9.001664f){
       if(f->svm_acc_mean<=243.889252f){
        if(f->acc_z_mean<=207.549995f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_max<=255.814270f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_mean<=-24.984142f){
        if(f->acc_z_max<=264.533478f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_rms<=49.656872f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_x_std<=5.285447f){
     if(f->gyro_y_mean<=14.690000f){
      if(f->acc_x_rms<=44.590668f){
       if(f->gyro_z_range<=82.500000f){
        if(f->acc_z_rms<=277.133743f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->svm_gyro_mean<=120.978336f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_max<=299.968353f){
        if(f->gyro_x_std<=44.312569f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_jerk_var<=3.359759f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_mean<=-43.715000f){
       if(f->gyro_y_std<=7.939901f){
        if(f->acc_y_max<=-37.000000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_gyro_mean<=192.815483f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_mean<=37.835001f){
        if(f->svm_acc_mean<=258.092163f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_max<=82.402302f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->svm_acc_max<=291.892761f){
      if(f->svm_gyro_mean<=163.611443f){
       if(f->gyro_z_mean<=15.996191f){
        if(f->acc_y_min<=-64.760574f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_std<=10.839160f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_acc_mean<=203.816383f){
        if(f->gyro_y_mean<=1209.140015f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_min<=95.476303f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_std<=42.922277f){
       if(f->acc_x_jerk_var<=26.372820f){
        if(f->gyro_x_rms<=240.046883f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_mean<=-400.596878f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_max<=1197.960693f){
        return 1;
       }else{
        if(f->acc_y_max<=37.169689f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }
 }else{
  if(f->acc_y_std<=4.527767f){
   if(f->gyro_z_range<=38.997475f){
    if(f->gyro_x_std<=11.919325f){
     if(f->acc_z_rms<=34.479118f){
      if(f->gyro_y_std<=5.977249f){
       if(f->acc_y_std<=1.290108f){
        if(f->gyro_x_range<=25.500000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_mean<=-2.735000f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_min<=-5.941531f){
        if(f->gyro_z_std<=8.965959f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_rms<=22.476334f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_rms<=220.688828f){
       if(f->acc_y_jerk_var<=1.410520f){
        if(f->acc_y_max<=-64.000000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_min<=-42.500000f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_mean<=-74.259998f){
        return 0;
       }else{
        if(f->acc_z_std<=3.158531f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_z_max<=98.059448f){
      if(f->acc_y_mean<=26.120000f){
       if(f->acc_z_max<=-34.009100f){
        if(f->acc_y_jerk_mean<=1.207071f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_std<=4.306360f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_min<=211.500000f){
        if(f->acc_y_mean<=30.784443f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_gyro_max<=124.562321f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_z_min<=70.500000f){
       return 1;
      }else{
       if(f->acc_x_min<=-248.500000f){
        return 0;
       }else{
        if(f->gyro_z_max<=33.204115f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_y_min<=12.025134f){
     if(f->acc_z_min<=89.500000f){
      if(f->acc_z_rms<=81.159126f){
       if(f->gyro_y_rms<=131.627876f){
        if(f->acc_y_mean<=-25.615000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_mean<=-264.255005f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_min<=226.868362f){
        if(f->acc_z_jerk_mean<=3.515152f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_std<=2.194494f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_rms<=52.343815f){
       if(f->gyro_z_std<=6.915452f){
        return 1;
       }else{
        if(f->gyro_x_mean<=-86.603210f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_max<=85.306541f){
        if(f->gyro_y_range<=56.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_min<=22.500000f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_y_jerk_mean<=1.939445f){
      if(f->acc_x_rms<=258.063004f){
       if(f->acc_x_max<=251.595551f){
        if(f->gyro_z_min<=-3.939888f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_range<=138.500000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_z_min<=-74.881363f){
        if(f->gyro_z_std<=26.798866f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_max<=0.505080f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->gyro_y_rms<=96.804955f){
       if(f->acc_x_mean<=245.750946f){
        if(f->gyro_y_max<=12.237514f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_mean<=258.238983f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_min<=228.000000f){
        if(f->acc_x_jerk_mean<=1.641414f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_max<=44.500000f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->acc_y_rms<=321.897079f){
    if(f->acc_z_rms<=86.637901f){
     if(f->acc_y_max<=34.031954f){
      if(f->svm_gyro_mean<=383.768356f){
       if(f->gyro_y_std<=40.577673f){
        if(f->acc_x_std<=4.235745f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_min<=247.974655f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_z_range<=2397.000000f){
        if(f->gyro_x_min<=-1072.500000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_range<=2812.692139f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_mean<=237.014999f){
       if(f->acc_x_jerk_mean<=9.459596f){
        if(f->acc_y_min<=-132.004303f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_max<=-427.422104f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_jerk_var<=13.514555f){
        if(f->acc_y_range<=72.500000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_min<=-519.470703f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_y_jerk_mean<=6.736679f){
      if(f->acc_y_mean<=12.527686f){
       if(f->gyro_x_rms<=187.854698f){
        if(f->svm_gyro_max<=649.312988f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_rms<=774.263458f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_y_min<=170.630981f){
        if(f->gyro_y_mean<=-706.494995f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_jerk_mean<=3.858586f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_mean<=-163.009995f){
       if(f->acc_y_std<=197.790581f){
        if(f->acc_z_range<=743.500000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_range<=1059.500000f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_max<=3572.483276f){
        if(f->acc_x_max<=306.831757f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_rms<=351.850891f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_x_min<=-810.500000f){
     if(f->acc_y_max<=90.500000f){
      if(f->gyro_x_min<=-1774.000000f){
       return 1;
      }else{
       return 1;
      }
     }else{
      if(f->acc_x_range<=1704.500000f){
       if(f->acc_y_std<=524.418732f){
        if(f->gyro_z_range<=8610.626953f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_rms<=610.804321f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       return 1;
      }
     }
    }else{
     if(f->acc_x_mean<=56.850000f){
      if(f->acc_x_mean<=-53.611483f){
       if(f->svm_gyro_max<=3831.327881f){
        return 0;
       }else{
        if(f->acc_x_min<=-437.471878f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_rms<=417.951767f){
        if(f->gyro_x_mean<=1040.074951f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_min<=-3459.855957f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_z_mean<=-327.664993f){
       return 1;
      }else{
       if(f->gyro_x_std<=3087.082275f){
        if(f->svm_gyro_max<=6220.003906f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_jerk_mean<=41.111538f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }
 }
}
static int t1(const Features*f){
 if(f->acc_x_rms<=131.563805f){
  if(f->acc_y_mean<=-152.666313f){
   if(f->acc_y_range<=350.979492f){
    if(f->acc_x_jerk_mean<=4.444615f){
     if(f->gyro_y_std<=4.631533f){
      if(f->gyro_y_rms<=21.773758f){
       if(f->gyro_y_range<=11.994378f){
        if(f->svm_acc_max<=267.415405f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_range<=12.016575f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_max<=-7.000739f){
        if(f->acc_z_max<=85.000000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_range<=11.002418f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->svm_acc_mean<=255.517555f){
       if(f->gyro_x_mean<=-101.514999f){
        if(f->gyro_z_min<=2.055832f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_rms<=210.870697f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_x_min<=-128.105766f){
        if(f->gyro_y_range<=43.969461f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_range<=55.990314f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->acc_y_jerk_mean<=9.464574f){
      if(f->gyro_x_std<=232.906509f){
       if(f->acc_z_max<=-34.982037f){
        if(f->gyro_x_mean<=-119.704998f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->svm_acc_max<=358.219910f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_y_rms<=306.192993f){
        if(f->gyro_y_rms<=239.479904f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_range<=947.774811f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->gyro_z_min<=-555.663513f){
       if(f->acc_z_jerk_mean<=10.209393f){
        if(f->gyro_z_range<=1447.922180f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_rms<=815.029327f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_std<=78.669193f){
        if(f->acc_z_min<=-283.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_mean<=-236.959999f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }else{
    if(f->gyro_x_max<=1072.722961f){
     if(f->gyro_x_mean<=-780.100006f){
      if(f->svm_gyro_mean<=1177.751343f){
       if(f->gyro_y_max<=534.000000f){
        if(f->svm_acc_max<=554.417694f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_jerk_mean<=5.237374f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_x_range<=5536.469482f){
        if(f->gyro_y_rms<=426.066849f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }
     }else{
      if(f->acc_x_mean<=11.463511f){
       if(f->acc_z_jerk_mean<=8.853536f){
        if(f->acc_x_rms<=34.993481f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_range<=947.772705f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_x_min<=-1619.615295f){
        if(f->acc_z_rms<=190.606522f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_min<=-549.551422f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->gyro_x_min<=-314.500000f){
      if(f->gyro_x_mean<=1284.914490f){
       if(f->acc_y_std<=85.114326f){
        if(f->gyro_z_range<=937.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_range<=4983.114990f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_x_rms<=1816.628479f){
        return 0;
       }else{
        if(f->acc_y_min<=-1122.363892f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_min<=-59.500000f){
       if(f->acc_z_mean<=-54.919630f){
        if(f->acc_y_mean<=-249.060005f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_range<=799.236328f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_std<=982.178009f){
        if(f->gyro_y_rms<=331.932053f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_mean<=-245.874237f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->gyro_z_std<=9.127267f){
    if(f->gyro_x_std<=7.576913f){
     if(f->gyro_x_rms<=9.798213f){
      if(f->acc_y_rms<=105.225937f){
       if(f->gyro_y_range<=10.004932f){
        if(f->acc_z_min<=196.500000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_jerk_var<=1.142070f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_max<=-9.000000f){
        return 1;
       }else{
        if(f->acc_y_jerk_mean<=1.585859f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_rms<=138.191872f){
       if(f->acc_y_mean<=-79.915001f){
        if(f->svm_acc_mean<=236.147659f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_max<=264.806656f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_rms<=178.767014f){
        if(f->acc_y_rms<=225.241592f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_mean<=6.360000f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->gyro_z_range<=7.003660f){
      if(f->acc_x_rms<=25.721585f){
       if(f->svm_acc_mean<=244.302368f){
        if(f->gyro_x_range<=53.726519f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_mean<=21.220000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_rms<=13.327723f){
        if(f->svm_acc_mean<=223.935898f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_max<=-94.500000f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_x_range<=91.983379f){
       if(f->gyro_z_max<=36.000000f){
        if(f->acc_z_max<=269.500000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        return 0;
       }
      }else{
       if(f->acc_x_max<=-18.068381f){
        if(f->gyro_z_rms<=24.249187f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_mean<=231.240005f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_y_jerk_var<=15.293031f){
     if(f->acc_y_min<=-36.927704f){
      if(f->svm_acc_mean<=259.692490f){
       if(f->acc_x_mean<=-37.071569f){
        if(f->svm_gyro_mean<=437.877533f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->svm_acc_mean<=212.603790f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_x_mean<=-314.939804f){
        if(f->gyro_z_mean<=-86.953815f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_max<=-133.119690f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_x_min<=48.120770f){
       if(f->gyro_z_std<=21.970106f){
        if(f->acc_z_min<=-20.000000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_range<=621.500000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->svm_acc_mean<=225.873154f){
        if(f->gyro_x_rms<=63.343859f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->svm_gyro_max<=1103.703186f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->gyro_z_std<=522.047424f){
      if(f->acc_x_rms<=34.964607f){
       if(f->acc_z_range<=90.500000f){
        if(f->acc_y_rms<=92.117393f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_rms<=890.554382f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_max<=252.084618f){
        if(f->acc_y_rms<=214.697708f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_rms<=151.545280f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_rms<=215.159920f){
       if(f->acc_z_rms<=309.166687f){
        if(f->gyro_x_range<=8765.080078f){
         return 1;
        }else{
         return 0;
        }
       }else{
        return 0;
       }
      }else{
       if(f->acc_z_max<=69.000000f){
        if(f->acc_y_max<=193.600372f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_std<=185.301491f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }
 }else{
  if(f->svm_gyro_mean<=120.026325f){
   if(f->svm_gyro_mean<=77.632656f){
    if(f->acc_y_min<=10.001314f){
     if(f->gyro_x_std<=8.493816f){
      if(f->acc_x_min<=-277.804138f){
       return 0;
      }else{
       if(f->acc_y_std<=2.739228f){
        if(f->acc_x_mean<=252.022278f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_std<=3.181574f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_z_min<=83.004307f){
       if(f->acc_x_rms<=275.120636f){
        if(f->gyro_y_range<=50.977621f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_mean<=-80.535049f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_x_rms<=26.366740f){
        if(f->acc_x_range<=20.957242f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_range<=36.892725f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_z_rms<=55.474585f){
      if(f->gyro_z_range<=33.974995f){
       if(f->gyro_y_min<=-51.980276f){
        if(f->gyro_x_mean<=47.184999f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_rms<=254.441574f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_jerk_var<=9.455973f){
        if(f->gyro_y_max<=62.554716f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }
     }else{
      if(f->gyro_x_std<=57.581026f){
       if(f->gyro_z_rms<=50.364313f){
        if(f->gyro_y_std<=65.530884f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }else{
       if(f->svm_acc_mean<=259.074631f){
        return 0;
       }else{
        return 1;
       }
      }
     }
    }
   }else{
    if(f->acc_x_max<=247.981285f){
     if(f->acc_x_rms<=233.462036f){
      if(f->acc_x_max<=-193.619057f){
       if(f->acc_y_mean<=-54.226017f){
        if(f->gyro_x_rms<=59.004688f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_std<=3.977369f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_max<=86.286201f){
        return 1;
       }else{
        if(f->gyro_z_min<=-120.000000f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_y_std<=30.059834f){
       if(f->acc_z_max<=-30.294206f){
        if(f->acc_y_jerk_var<=1.102133f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_std<=15.443447f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_min<=-266.857544f){
        if(f->acc_x_jerk_mean<=1.827846f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_rms<=36.602005f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->gyro_y_max<=140.900337f){
      if(f->gyro_x_rms<=22.292578f){
       if(f->acc_y_rms<=69.222931f){
        if(f->svm_acc_mean<=263.579483f){
         return 1;
        }else{
         return 0;
        }
       }else{
        return 0;
       }
      }else{
       if(f->acc_y_max<=46.500000f){
        if(f->gyro_x_std<=26.960803f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_jerk_var<=1.655545f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_z_std<=5.464861f){
       if(f->gyro_z_rms<=15.715307f){
        if(f->svm_acc_max<=261.206818f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_rms<=51.475386f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_jerk_var<=2.492651f){
        if(f->acc_x_rms<=257.002136f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_std<=3.134886f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->acc_x_max<=700.500000f){
    if(f->acc_x_mean<=-41.109591f){
     if(f->acc_z_jerk_mean<=7.782371f){
      if(f->gyro_z_mean<=89.179996f){
       if(f->gyro_z_max<=2.006986f){
        if(f->acc_y_min<=-63.761782f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_rms<=17.439506f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_mean<=27.615000f){
        if(f->acc_x_range<=479.498901f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_mean<=68.344975f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_min<=-553.530060f){
       if(f->acc_y_jerk_mean<=9.191919f){
        if(f->gyro_x_mean<=120.784996f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_jerk_var<=7496.551758f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_mean<=-260.616333f){
        if(f->acc_y_range<=1217.038940f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_range<=213.491859f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_x_std<=130.680107f){
      if(f->acc_x_range<=128.226685f){
       if(f->svm_gyro_mean<=514.046631f){
        if(f->acc_x_mean<=223.215042f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_jerk_mean<=3.840295f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_mean<=-19.155000f){
        if(f->acc_x_jerk_var<=14.014180f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_rms<=46.919865f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_z_mean<=80.340073f){
       if(f->acc_z_mean<=-214.513359f){
        if(f->svm_gyro_max<=3593.080078f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_mean<=-149.433403f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_jerk_var<=56.953806f){
        return 0;
       }else{
        if(f->gyro_x_range<=4095.947754f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_x_rms<=252.091057f){
     if(f->acc_x_std<=226.341454f){
      if(f->acc_x_mean<=56.715000f){
       if(f->acc_z_mean<=-108.614090f){
        if(f->gyro_y_rms<=1029.359467f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_min<=-1607.000000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_mean<=185.099998f){
        if(f->acc_y_std<=73.758324f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }
     }else{
      if(f->acc_y_min<=-923.000000f){
       return 0;
      }else{
       return 1;
      }
     }
    }else{
     if(f->acc_y_mean<=-305.475006f){
      return 0;
     }else{
      if(f->acc_y_std<=55.592663f){
       return 1;
      }else{
       if(f->acc_z_jerk_mean<=47.146465f){
        return 1;
       }else{
        if(f->acc_x_jerk_var<=5260.149658f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }
 }
}
static int t2(const Features*f){
 if(f->acc_y_rms<=180.950989f){
  if(f->acc_y_std<=2.907103f){
   if(f->acc_y_max<=-99.966087f){
    if(f->svm_acc_mean<=237.426796f){
     if(f->acc_x_mean<=2.045000f){
      if(f->svm_acc_max<=234.944778f){
       return 1;
      }else{
       return 0;
      }
     }else{
      if(f->svm_acc_mean<=222.617828f){
       if(f->acc_z_max<=184.500000f){
        if(f->acc_x_max<=19.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }else{
       if(f->acc_z_jerk_mean<=1.959596f){
        if(f->acc_y_min<=-155.500000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->svm_gyro_max<=123.966896f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->acc_z_mean<=-184.519997f){
      if(f->acc_z_rms<=216.361946f){
       if(f->acc_z_std<=4.334284f){
        if(f->gyro_y_mean<=37.375000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        return 0;
       }
      }else{
       if(f->svm_acc_mean<=255.069389f){
        if(f->acc_z_jerk_var<=3.334630f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }
     }else{
      if(f->acc_y_mean<=-151.721352f){
       if(f->acc_x_mean<=5.613633f){
        if(f->gyro_y_std<=14.435744f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_rms<=3.845179f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_min<=204.594124f){
        if(f->acc_z_mean<=197.955002f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_mean<=-2.445000f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->gyro_y_range<=55.999851f){
     if(f->svm_acc_max<=250.054001f){
      if(f->acc_z_min<=211.998993f){
       if(f->acc_y_rms<=82.498634f){
        if(f->gyro_x_range<=57.958519f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_mean<=234.662292f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_std<=10.009371f){
        if(f->acc_x_max<=-17.048008f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_rms<=46.756758f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_z_std<=7.729719f){
       if(f->acc_x_min<=234.980873f){
        if(f->acc_z_mean<=248.781967f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_max<=92.982250f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_y_mean<=36.014343f){
        if(f->acc_x_mean<=-44.470501f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_range<=42.983974f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_y_mean<=-35.639999f){
      if(f->acc_x_min<=-49.500000f){
       if(f->acc_z_max<=80.034428f){
        if(f->acc_y_mean<=-60.765001f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_max<=48.000000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_rms<=88.076290f){
        if(f->acc_x_mean<=40.520000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_mean<=240.416153f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_z_rms<=80.571083f){
       if(f->gyro_y_std<=43.615562f){
        if(f->acc_y_rms<=39.470430f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_gyro_max<=234.770882f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_x_min<=-117.997665f){
        if(f->svm_gyro_mean<=53.299448f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_mean<=-40.615000f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->acc_y_mean<=11.575000f){
    if(f->acc_z_jerk_var<=27.334046f){
     if(f->svm_acc_mean<=261.545044f){
      if(f->gyro_x_rms<=85.833733f){
       if(f->gyro_x_std<=47.599844f){
        if(f->gyro_z_mean<=7.855000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_range<=79.813393f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_jerk_var<=11.710336f){
        if(f->gyro_y_range<=181.500000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->svm_gyro_mean<=369.684052f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_max<=-3.921208f){
       if(f->gyro_x_mean<=-300.000427f){
        if(f->gyro_y_mean<=-119.994999f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_min<=57.940817f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_rms<=260.947784f){
        if(f->acc_y_mean<=-19.745001f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_max<=17.000000f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->acc_x_range<=135.048027f){
      if(f->acc_y_max<=-68.500000f){
       if(f->gyro_z_rms<=101.551216f){
        if(f->gyro_x_std<=377.634155f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_range<=745.339783f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_mean<=7.175000f){
        if(f->acc_x_jerk_var<=11.047247f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_std<=61.178505f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_jerk_var<=42.333130f){
       if(f->acc_x_range<=267.500000f){
        if(f->acc_y_range<=111.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_mean<=-71.055000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_max<=-40.203892f){
        if(f->acc_y_mean<=-32.083710f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_std<=140.666817f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_x_jerk_mean<=4.254875f){
     if(f->gyro_x_rms<=172.455421f){
      if(f->gyro_z_max<=-21.517128f){
       if(f->gyro_x_max<=296.000000f){
        if(f->acc_y_rms<=50.946676f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }else{
       if(f->acc_x_mean<=243.365005f){
        if(f->acc_x_rms<=36.062723f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_mean<=21.957512f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_jerk_var<=5.897153f){
       if(f->acc_z_max<=-218.500000f){
        if(f->gyro_y_rms<=108.893425f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_rms<=313.560349f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_min<=-15.912334f){
        if(f->gyro_y_range<=188.000000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_gyro_max<=986.848358f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->acc_y_jerk_var<=18.434511f){
      if(f->gyro_y_min<=84.918797f){
       if(f->svm_gyro_max<=1808.956909f){
        if(f->gyro_y_mean<=-657.220001f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_std<=17.186721f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_x_std<=154.573441f){
        return 1;
       }else{
        if(f->acc_z_max<=164.000000f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_mean<=34.459999f){
       if(f->svm_acc_mean<=282.655640f){
        if(f->acc_x_max<=415.661652f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_mean<=216.674995f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_max<=329.500000f){
        if(f->acc_z_min<=-139.500000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_rms<=650.062988f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }
 }else{
  if(f->acc_z_jerk_var<=174.595146f){
   if(f->acc_x_max<=53.016439f){
    if(f->acc_y_rms<=211.573334f){
     if(f->svm_gyro_max<=322.037552f){
      if(f->gyro_y_max<=57.754633f){
       if(f->acc_y_max<=-193.944702f){
        if(f->acc_y_rms<=205.404312f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_min<=4.015852f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_acc_mean<=245.319901f){
        if(f->gyro_x_min<=-74.598049f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_rms<=3.295612f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->gyro_x_max<=27.932215f){
       if(f->gyro_z_min<=100.000000f){
        if(f->svm_gyro_mean<=1060.702576f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_mean<=260.060852f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_max<=-128.945045f){
        if(f->svm_acc_mean<=254.233391f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->svm_acc_max<=265.803421f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->svm_acc_max<=259.915100f){
      if(f->acc_x_max<=-9.024286f){
       if(f->acc_y_range<=11.891552f){
        if(f->gyro_y_min<=8.014898f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_mean<=252.936577f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_mean<=-65.236404f){
        if(f->svm_gyro_mean<=222.333832f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_mean<=31.442479f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_min<=-246.000465f){
       if(f->acc_x_max<=32.003914f){
        if(f->gyro_z_min<=-2.986858f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_range<=23.975941f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_min<=-39.019209f){
        if(f->acc_x_std<=2.055870f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_min<=-292.500000f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }else{
    if(f->gyro_x_range<=1018.855103f){
     if(f->svm_acc_max<=377.443253f){
      if(f->acc_y_jerk_var<=13.813386f){
       if(f->gyro_x_std<=123.199894f){
        if(f->acc_x_min<=22.988167f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_std<=41.961040f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_max<=-5.940722f){
        if(f->acc_z_max<=-43.649147f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_std<=255.263138f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_x_jerk_mean<=4.172353f){
       if(f->acc_z_range<=122.188980f){
        if(f->gyro_y_mean<=-285.261627f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_mean<=-272.100342f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_rms<=218.575745f){
        if(f->acc_y_min<=-390.000641f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_std<=70.045738f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->gyro_y_mean<=423.713867f){
      if(f->gyro_x_max<=528.977570f){
       if(f->gyro_y_std<=251.895699f){
        if(f->acc_z_jerk_var<=19.643913f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_jerk_var<=17.396594f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_std<=30.912709f){
        if(f->gyro_y_mean<=-363.786438f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_rms<=265.376938f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_z_mean<=9.477473f){
       if(f->acc_x_rms<=95.964958f){
        if(f->gyro_x_mean<=-178.792915f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_mean<=622.640015f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_jerk_mean<=12.881415f){
        if(f->gyro_z_max<=893.500000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_std<=136.914223f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->acc_x_rms<=227.968399f){
    if(f->gyro_x_mean<=-531.339996f){
     if(f->acc_y_mean<=-271.682907f){
      if(f->acc_z_min<=-830.000000f){
       return 1;
      }else{
       if(f->gyro_x_std<=1384.759460f){
        if(f->gyro_y_std<=337.013977f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }
     }else{
      if(f->svm_gyro_max<=3037.586426f){
       if(f->gyro_y_mean<=-14.905000f){
        if(f->acc_x_min<=-72.000000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_rms<=164.288315f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_rms<=198.080467f){
        if(f->acc_y_min<=-267.209076f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_rms<=62.634464f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_y_mean<=-108.555000f){
      if(f->acc_z_max<=982.236420f){
       if(f->acc_z_mean<=75.464027f){
        if(f->gyro_z_range<=1491.619629f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_rms<=261.261108f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_min<=-414.000000f){
        if(f->gyro_x_max<=6962.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_std<=887.121460f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->svm_gyro_mean<=950.057373f){
       if(f->acc_y_jerk_var<=2139.792725f){
        if(f->acc_x_std<=62.391935f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }else{
       if(f->acc_z_rms<=158.027267f){
        if(f->svm_acc_mean<=260.919830f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }
     }
    }
   }else{
    if(f->acc_y_min<=-767.917572f){
     if(f->svm_acc_max<=1342.356323f){
      if(f->acc_y_rms<=350.117844f){
       if(f->gyro_x_rms<=1032.575867f){
        return 1;
       }else{
        return 1;
       }
      }else{
       if(f->gyro_y_range<=4019.500000f){
        return 0;
       }else{
        return 0;
       }
      }
     }else{
      if(f->acc_x_jerk_var<=5126.428711f){
       if(f->svm_acc_mean<=486.070740f){
        if(f->acc_y_rms<=447.963150f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_min<=-1042.000000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_jerk_mean<=68.186871f){
        if(f->acc_z_jerk_mean<=86.944443f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }
     }
    }else{
     if(f->acc_y_std<=309.074142f){
      return 1;
     }else{
      if(f->acc_x_rms<=240.828278f){
       return 0;
      }else{
       return 1;
      }
     }
    }
   }
  }
 }
}
static int t3(const Features*f){
 if(f->acc_y_rms<=176.901253f){
  if(f->gyro_z_range<=39.997034f){
   if(f->acc_y_min<=-111.999531f){
    if(f->acc_x_mean<=3.960000f){
     if(f->svm_acc_max<=279.077942f){
      if(f->gyro_x_mean<=-25.419531f){
       if(f->acc_z_min<=-203.765823f){
        if(f->acc_y_min<=-157.500000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_range<=11.500000f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_jerk_mean<=2.580808f){
        if(f->acc_z_range<=29.000000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_range<=20.000000f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->gyro_x_range<=59.000000f){
       return 0;
      }else{
       return 0;
      }
     }
    }else{
     if(f->gyro_y_range<=14.015144f){
      if(f->gyro_z_max<=2.046657f){
       if(f->gyro_y_max<=65.500000f){
        if(f->svm_gyro_mean<=59.146175f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }else{
       if(f->acc_x_rms<=26.308228f){
        if(f->acc_z_min<=167.500000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_max<=188.499893f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_z_jerk_mean<=2.232928f){
       if(f->acc_x_min<=38.500000f){
        if(f->gyro_x_mean<=-89.290001f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_std<=1.773684f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_min<=107.000000f){
        if(f->acc_x_min<=101.000000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_mean<=167.875000f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->gyro_x_range<=49.991474f){
     if(f->gyro_x_range<=28.999442f){
      if(f->gyro_y_rms<=31.780700f){
       if(f->acc_z_mean<=257.005005f){
        if(f->acc_z_max<=226.934273f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }else{
       if(f->acc_z_min<=252.500000f){
        if(f->acc_y_mean<=-74.216167f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }
     }else{
      if(f->acc_y_mean<=5.050859f){
       if(f->acc_z_rms<=248.642357f){
        if(f->acc_x_rms<=264.829788f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_jerk_var<=6.777798f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_mean<=259.220001f){
        if(f->acc_x_mean<=-261.274994f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }
     }
    }else{
     if(f->acc_x_std<=1.558830f){
      if(f->gyro_z_std<=1.604291f){
       if(f->acc_z_min<=203.329529f){
        return 1;
       }else{
        if(f->acc_z_max<=246.500000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_rms<=3.403671f){
        if(f->acc_z_min<=28.000000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_std<=20.279659f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_min<=-28.029325f){
       if(f->gyro_x_rms<=63.431553f){
        if(f->acc_x_mean<=-261.435699f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_mean<=68.393646f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_min<=24.017534f){
        if(f->gyro_z_std<=2.017428f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_max<=60.276329f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->acc_x_jerk_var<=23.480053f){
    if(f->acc_y_mean<=11.430572f){
     if(f->gyro_x_std<=47.936617f){
      if(f->acc_z_rms<=251.888748f){
       if(f->acc_y_mean<=-64.220001f){
        if(f->acc_x_min<=-223.209023f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_max<=251.994713f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_std<=4.369960f){
        if(f->acc_x_std<=4.098867f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_range<=89.500000f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_jerk_var<=7.392919f){
       if(f->acc_z_rms<=43.993855f){
        if(f->svm_gyro_mean<=291.852310f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_jerk_mean<=2.888581f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_rms<=62.655775f){
        if(f->gyro_z_mean<=-307.096222f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_rms<=162.870377f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->acc_x_mean<=-43.002464f){
      if(f->acc_x_mean<=-255.361794f){
       if(f->svm_gyro_mean<=165.668953f){
        if(f->gyro_z_mean<=-20.233684f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_range<=244.332855f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_max<=761.452179f){
        if(f->acc_y_rms<=16.841596f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_rms<=34.350864f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_max<=48.067520f){
       if(f->acc_y_rms<=58.913641f){
        if(f->gyro_z_rms<=53.873201f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_jerk_var<=4.778460f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_mean<=534.696747f){
        if(f->acc_x_max<=254.953522f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_max<=-43.000000f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_y_max<=118.116547f){
     if(f->acc_z_mean<=-61.703283f){
      if(f->acc_y_min<=-98.000000f){
       if(f->acc_z_range<=82.500000f){
        if(f->acc_y_jerk_mean<=5.639212f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_range<=517.500000f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_min<=46.500000f){
        if(f->acc_y_mean<=-32.637125f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }
     }else{
      if(f->svm_gyro_mean<=582.422424f){
       if(f->acc_y_rms<=22.844212f){
        if(f->acc_x_rms<=264.370544f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_jerk_var<=11.758902f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_y_range<=679.000000f){
        if(f->svm_acc_mean<=210.551559f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->svm_acc_mean<=217.096130f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->svm_acc_mean<=274.697723f){
      if(f->gyro_x_max<=1633.500000f){
       if(f->gyro_z_min<=166.401482f){
        if(f->gyro_z_rms<=1129.508179f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_range<=1684.500000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_y_min<=-2535.834717f){
        if(f->acc_z_jerk_var<=57.299562f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_mean<=72.686569f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_mean<=146.909996f){
       if(f->gyro_x_range<=8983.193359f){
        if(f->gyro_x_max<=2465.500000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_std<=1716.922729f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       return 1;
      }
     }
    }
   }
  }
 }else{
  if(f->acc_x_jerk_var<=3653.287598f){
   if(f->acc_z_jerk_var<=181.603302f){
    if(f->acc_x_range<=125.009739f){
     if(f->gyro_x_range<=910.860321f){
      if(f->gyro_y_rms<=21.172033f){
       if(f->acc_z_mean<=123.363735f){
        if(f->svm_acc_mean<=261.460587f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_mean<=20.045000f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_range<=84.030788f){
        if(f->gyro_x_mean<=-117.141464f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_std<=28.760492f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_z_range<=101.031342f){
       if(f->acc_y_mean<=-236.930000f){
        if(f->gyro_x_min<=-818.325073f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_mean<=-323.824997f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_rms<=272.266907f){
        if(f->gyro_y_rms<=433.170120f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_rms<=359.158615f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->gyro_x_std<=233.724571f){
      if(f->acc_z_max<=-34.918121f){
       if(f->acc_z_max<=-66.500000f){
        if(f->gyro_x_max<=-85.213505f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->svm_acc_max<=357.214218f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_range<=171.002266f){
        if(f->gyro_z_std<=250.807800f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_min<=-545.967438f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_std<=72.645172f){
       if(f->gyro_y_std<=278.388321f){
        if(f->acc_x_jerk_var<=21.526581f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_jerk_mean<=6.994950f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_mean<=1527.135925f){
        if(f->svm_acc_mean<=233.190460f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_std<=1352.048828f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_y_mean<=-149.663879f){
     if(f->acc_x_rms<=254.223656f){
      if(f->gyro_x_mean<=1213.260071f){
       if(f->gyro_y_min<=-478.500000f){
        if(f->acc_z_std<=89.021698f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_max<=1520.933472f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->svm_gyro_mean<=1550.199036f){
        if(f->svm_acc_mean<=303.908524f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_range<=169.500000f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_x_std<=2242.838013f){
       if(f->acc_z_jerk_mean<=47.121212f){
        return 1;
       }else{
        return 0;
       }
      }else{
       if(f->acc_x_max<=608.000000f){
        return 0;
       }else{
        return 0;
       }
      }
     }
    }else{
     if(f->acc_z_min<=-335.823380f){
      if(f->acc_z_std<=148.651855f){
       if(f->acc_y_max<=193.258621f){
        if(f->acc_y_std<=178.094887f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_range<=1490.669983f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->svm_acc_mean<=271.792969f){
        if(f->acc_y_std<=187.076935f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_rms<=182.511658f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->svm_gyro_mean<=748.871490f){
       return 0;
      }else{
       if(f->acc_x_jerk_var<=83.873489f){
        return 1;
       }else{
        if(f->acc_x_rms<=96.501156f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->acc_x_mean<=-36.628372f){
    if(f->acc_y_mean<=-219.415001f){
     if(f->acc_x_range<=1295.000000f){
      return 1;
     }else{
      return 1;
     }
    }else{
     return 1;
    }
   }else{
    if(f->acc_x_max<=610.578430f){
     if(f->acc_z_std<=265.446091f){
      if(f->acc_y_min<=-653.018402f){
       if(f->acc_z_min<=-338.309280f){
        if(f->gyro_x_min<=-7288.000000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        return 1;
       }
      }else{
       if(f->acc_y_range<=817.000000f){
        if(f->acc_x_max<=229.000000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }
     }else{
      if(f->acc_y_mean<=-255.924995f){
       if(f->gyro_x_rms<=2150.318787f){
        return 0;
       }else{
        return 1;
       }
      }else{
       if(f->acc_x_rms<=194.568550f){
        return 1;
       }else{
        return 1;
       }
      }
     }
    }else{
     if(f->svm_acc_max<=1559.039368f){
      if(f->acc_z_mean<=-192.930000f){
       return 1;
      }else{
       if(f->acc_y_rms<=318.945175f){
        if(f->acc_y_mean<=-178.619598f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_jerk_mean<=41.181818f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_rms<=486.800354f){
       if(f->acc_x_rms<=217.790512f){
        if(f->gyro_y_std<=1673.530090f){
         return 1;
        }else{
         return 0;
        }
       }else{
        return 1;
       }
      }else{
       if(f->gyro_y_range<=6888.798340f){
        if(f->acc_z_jerk_var<=3315.975342f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_mean<=-338.324997f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }
  }
 }
}
static int t4(const Features*f){
 if(f->acc_y_rms<=177.439041f){
  if(f->gyro_x_range<=93.996971f){
   if(f->acc_y_min<=-67.931595f){
    if(f->acc_x_min<=-33.111200f){
     if(f->acc_x_min<=-230.500000f){
      if(f->acc_z_jerk_var<=9.584227f){
       return 0;
      }else{
       if(f->acc_z_jerk_var<=10.781348f){
        return 1;
       }else{
        return 0;
       }
      }
     }else{
      if(f->acc_z_mean<=-66.993660f){
       if(f->acc_y_max<=-60.500000f){
        return 0;
       }else{
        return 1;
       }
      }else{
       if(f->gyro_z_max<=20.974639f){
        if(f->gyro_y_range<=121.500000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_std<=11.416090f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_x_rms<=93.718426f){
      if(f->svm_acc_mean<=255.342873f){
       if(f->svm_acc_mean<=237.558212f){
        if(f->acc_x_min<=-3.311574f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_mean<=195.519997f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_max<=77.086662f){
        if(f->svm_acc_max<=273.347733f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->svm_acc_max<=272.192017f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_mean<=243.465004f){
       if(f->gyro_y_std<=9.937250f){
        if(f->acc_x_mean<=242.045029f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_jerk_var<=7.618796f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_max<=36.000000f){
        if(f->acc_x_max<=251.500000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }
     }
    }
   }else{
    if(f->svm_gyro_max<=89.842495f){
     if(f->gyro_z_std<=7.888543f){
      if(f->acc_x_rms<=19.011706f){
       if(f->gyro_x_range<=30.904519f){
        if(f->gyro_x_range<=22.996215f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_mean<=243.543930f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_rms<=33.604313f){
        if(f->acc_x_mean<=-261.429993f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_mean<=257.779999f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_z_rms<=256.274246f){
       if(f->acc_x_mean<=-254.265007f){
        if(f->gyro_x_min<=-18.500000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_mean<=32.225000f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_rms<=29.390317f){
        return 0;
       }else{
        return 0;
       }
      }
     }
    }else{
     if(f->acc_x_mean<=255.930458f){
      if(f->acc_y_max<=23.016581f){
       if(f->gyro_z_std<=10.597990f){
        if(f->gyro_x_mean<=-62.084999f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_max<=-32.964491f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_mean<=-27.410000f){
        if(f->gyro_y_mean<=-73.938066f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_min<=34.139755f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_mean<=64.709999f){
       if(f->gyro_z_mean<=-7.925378f){
        if(f->acc_z_min<=13.826499f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_min<=-91.932594f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_rms<=33.963202f){
        return 0;
       }else{
        return 0;
       }
      }
     }
    }
   }
  }else{
   if(f->acc_y_jerk_var<=26.254445f){
    if(f->acc_y_mean<=-15.097822f){
     if(f->gyro_z_rms<=21.807451f){
      if(f->gyro_x_std<=62.484169f){
       if(f->acc_z_min<=-194.790550f){
        if(f->acc_y_min<=-35.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_min<=-98.878490f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_max<=97.500000f){
        if(f->acc_y_jerk_var<=4.152536f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_mean<=263.290359f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_x_jerk_var<=6.675952f){
       if(f->acc_y_jerk_mean<=1.848777f){
        if(f->acc_x_rms<=52.123600f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_mean<=19.880000f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_rms<=71.408386f){
        if(f->svm_gyro_mean<=442.306137f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->svm_acc_mean<=212.914558f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->gyro_z_mean<=28.684999f){
      if(f->acc_x_max<=252.974548f){
       if(f->svm_gyro_mean<=298.618225f){
        if(f->acc_z_rms<=205.966415f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_jerk_mean<=3.082829f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_rms<=14.103137f){
        if(f->gyro_y_range<=76.836739f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_max<=456.918594f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->gyro_y_min<=94.500000f){
       if(f->svm_acc_max<=301.977356f){
        if(f->acc_z_min<=160.500000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_min<=-1552.500000f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_mean<=-157.693344f){
        return 1;
       }else{
        if(f->acc_y_range<=130.000000f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_y_mean<=9.190000f){
     if(f->gyro_z_range<=2898.000000f){
      if(f->acc_x_rms<=205.251984f){
       if(f->gyro_z_range<=572.063171f){
        if(f->acc_z_std<=13.077430f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_std<=15.212219f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_jerk_var<=133.173141f){
        if(f->acc_y_mean<=-44.467451f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_gyro_max<=3503.067993f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_jerk_var<=49.223900f){
       return 1;
      }else{
       if(f->acc_z_jerk_var<=46.513418f){
        if(f->acc_x_std<=71.728081f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_min<=-7725.000000f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_z_min<=-137.500000f){
      if(f->gyro_y_range<=251.500000f){
       if(f->svm_gyro_max<=820.366333f){
        return 1;
       }else{
        if(f->acc_y_min<=-13.000000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->svm_gyro_max<=6795.081543f){
        if(f->gyro_x_max<=-136.676970f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_gyro_max<=7118.763916f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_jerk_mean<=11.045455f){
       if(f->gyro_z_rms<=908.292786f){
        if(f->gyro_y_mean<=-750.699982f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_range<=2970.500000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_jerk_var<=48.275614f){
        if(f->acc_z_rms<=177.885590f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_max<=115.955963f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }
 }else{
  if(f->acc_x_rms<=243.582939f){
   if(f->acc_z_min<=-315.980438f){
    if(f->acc_x_jerk_var<=4746.134033f){
     if(f->acc_z_max<=-53.465446f){
      if(f->acc_x_std<=28.471995f){
       if(f->gyro_z_max<=673.582764f){
        if(f->svm_gyro_mean<=1123.783508f){
         return 0;
        }else{
         return 0;
        }
       }else{
        return 1;
       }
      }else{
       if(f->acc_y_min<=-361.500000f){
        if(f->acc_z_min<=-370.101883f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_std<=57.390236f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_z_mean<=-212.110001f){
       if(f->acc_y_mean<=-169.475601f){
        if(f->gyro_z_mean<=215.278076f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_jerk_var<=1129.540405f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_min<=-373.907410f){
        if(f->gyro_z_min<=-712.965088f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_jerk_var<=137.252022f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->svm_acc_max<=1757.901428f){
      if(f->acc_z_mean<=-141.089828f){
       if(f->acc_x_jerk_mean<=43.970730f){
        if(f->acc_y_mean<=-114.368465f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_mean<=-191.635323f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_y_max<=2517.500000f){
        if(f->gyro_x_mean<=-189.824997f){
         return 0;
        }else{
         return 0;
        }
       }else{
        return 1;
       }
      }
     }else{
      if(f->acc_y_mean<=-205.016655f){
       if(f->acc_z_rms<=431.725159f){
        if(f->acc_x_min<=-612.000000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        return 1;
       }
      }else{
       if(f->gyro_z_std<=1147.955566f){
        return 1;
       }else{
        return 1;
       }
      }
     }
    }
   }else{
    if(f->gyro_x_max<=-40.000286f){
     if(f->svm_acc_mean<=279.126358f){
      if(f->gyro_y_min<=-666.500000f){
       if(f->gyro_x_min<=-978.755524f){
        if(f->acc_y_mean<=-241.415001f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_gyro_max<=1336.533447f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_max<=-79.033092f){
        if(f->svm_gyro_max<=745.370056f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_max<=26.966276f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_mean<=-245.589996f){
       if(f->acc_z_mean<=33.290001f){
        if(f->gyro_x_mean<=-1201.705017f){
         return 1;
        }else{
         return 0;
        }
       }else{
        return 0;
       }
      }else{
       if(f->gyro_z_mean<=-93.231339f){
        if(f->acc_z_mean<=-150.289948f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_min<=-234.044548f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->acc_z_range<=121.015923f){
      if(f->gyro_y_max<=32.992580f){
       if(f->acc_z_range<=31.978679f){
        if(f->acc_y_max<=-207.997711f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_max<=14.010224f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_min<=-99.966961f){
        if(f->acc_z_max<=-32.975702f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_range<=704.950317f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_std<=72.646568f){
       if(f->acc_y_min<=-390.010666f){
        if(f->gyro_x_rms<=237.789177f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_rms<=281.180344f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_max<=513.000000f){
        if(f->acc_x_mean<=-61.594999f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_mean<=-194.959999f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->acc_y_std<=339.791458f){
    if(f->gyro_z_rms<=1574.146973f){
     if(f->svm_gyro_max<=4492.622314f){
      if(f->acc_x_jerk_mean<=45.212120f){
       return 1;
      }else{
       if(f->acc_y_jerk_var<=3012.397461f){
        if(f->acc_x_max<=550.000000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        return 1;
       }
      }
     }else{
      if(f->gyro_x_std<=3088.335571f){
       if(f->acc_x_mean<=-12.179614f){
        return 1;
       }else{
        if(f->acc_y_mean<=-237.614998f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       return 1;
      }
     }
    }else{
     return 1;
    }
   }else{
    if(f->acc_y_mean<=-256.360001f){
     if(f->gyro_x_min<=-1849.000000f){
      if(f->acc_z_jerk_mean<=28.429293f){
       return 0;
      }else{
       if(f->gyro_x_max<=6157.000000f){
        return 0;
       }else{
        return 0;
       }
      }
     }else{
      return 1;
     }
    }else{
     if(f->acc_z_std<=169.476974f){
      if(f->gyro_x_mean<=334.369995f){
       if(f->acc_y_mean<=-145.369705f){
        if(f->gyro_z_std<=1379.257690f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }else{
       if(f->acc_z_jerk_mean<=19.176767f){
        return 1;
       }else{
        return 1;
       }
      }
     }else{
      if(f->acc_y_mean<=-243.600006f){
       return 1;
      }else{
       if(f->gyro_z_range<=4078.000000f){
        if(f->acc_y_jerk_var<=3670.460815f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }
     }
    }
   }
  }
 }
}
static int t5(const Features*f){
 if(f->acc_y_min<=-111.999531f){
  if(f->acc_x_min<=-683.061890f){
   if(f->gyro_z_min<=-1472.500000f){
    if(f->acc_y_min<=-723.675171f){
     if(f->acc_z_range<=895.923157f){
      if(f->acc_x_min<=-1019.500000f){
       return 1;
      }else{
       if(f->gyro_z_std<=1630.008972f){
        if(f->acc_x_mean<=-25.500000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        return 1;
       }
      }
     }else{
      if(f->acc_y_jerk_var<=6006.447998f){
       if(f->acc_z_jerk_var<=6898.504150f){
        if(f->acc_y_std<=378.424637f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_max<=2689.000000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_z_range<=12286.496582f){
        if(f->svm_acc_mean<=369.287415f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_jerk_var<=169931.875000f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->gyro_y_min<=-1631.447937f){
      return 1;
     }else{
      if(f->acc_y_max<=326.770157f){
       return 1;
      }else{
       return 1;
      }
     }
    }
   }else{
    if(f->acc_x_rms<=242.306564f){
     if(f->acc_z_std<=212.327118f){
      if(f->acc_x_mean<=-12.441715f){
       if(f->acc_z_jerk_var<=10045.395020f){
        return 1;
       }else{
        return 1;
       }
      }else{
       return 0;
      }
     }else{
      return 1;
     }
    }else{
     return 1;
    }
   }
  }else{
   if(f->acc_y_mean<=-155.674995f){
    if(f->acc_y_std<=78.313503f){
     if(f->gyro_y_std<=202.819801f){
      if(f->acc_z_jerk_var<=48.205286f){
       if(f->svm_acc_max<=259.485062f){
        if(f->acc_y_max<=-207.997711f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_rms<=22.634266f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_rms<=28.432035f){
        if(f->acc_z_rms<=90.045769f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_std<=216.282112f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_std<=32.083721f){
       if(f->gyro_x_range<=526.811768f){
        if(f->acc_z_range<=89.349781f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_std<=29.904439f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_x_max<=522.867554f){
        if(f->acc_x_max<=66.004200f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_jerk_var<=44.562799f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->gyro_z_mean<=-568.974976f){
      if(f->gyro_y_min<=-1211.543579f){
       if(f->acc_x_max<=572.500000f){
        if(f->acc_x_rms<=79.620930f){
         return 0;
        }else{
         return 0;
        }
       }else{
        return 1;
       }
      }else{
       if(f->acc_x_jerk_var<=55.495455f){
        return 0;
       }else{
        if(f->gyro_y_min<=-1106.500000f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_z_mean<=498.750000f){
       if(f->gyro_z_std<=399.402664f){
        if(f->svm_gyro_mean<=1690.156189f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_jerk_var<=1446.173401f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_y_max<=993.588348f){
        if(f->acc_z_jerk_var<=64.147709f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_mean<=655.589996f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_y_jerk_mean<=5.104934f){
     if(f->acc_x_rms<=201.169937f){
      if(f->gyro_y_max<=54.940952f){
       if(f->svm_acc_mean<=256.074173f){
        if(f->gyro_x_min<=20.328107f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_range<=133.500000f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_min<=-28.007159f){
        if(f->acc_z_max<=-199.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_jerk_var<=2.317802f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->svm_gyro_max<=279.421829f){
       if(f->acc_y_range<=9.021790f){
        return 1;
       }else{
        if(f->acc_x_rms<=234.578720f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_mean<=92.094997f){
        if(f->gyro_z_rms<=151.174423f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_min<=-61.252773f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->svm_gyro_mean<=1218.412842f){
      if(f->acc_y_rms<=222.354034f){
       if(f->acc_y_mean<=-45.469999f){
        if(f->gyro_y_std<=135.103088f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_rms<=88.063133f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_acc_mean<=317.627350f){
        if(f->acc_y_max<=549.469543f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }
     }else{
      if(f->acc_y_jerk_var<=43.023357f){
       if(f->gyro_z_rms<=1212.058167f){
        if(f->acc_x_max<=-119.163746f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_mean<=-196.389999f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_range<=367.465378f){
        if(f->acc_x_rms<=195.980286f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_max<=414.000000f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }
 }else{
  if(f->gyro_z_rms<=21.910956f){
   if(f->svm_gyro_max<=97.877674f){
    if(f->gyro_x_range<=32.995657f){
     if(f->acc_y_max<=-77.880245f){
      if(f->gyro_y_min<=15.777767f){
       if(f->acc_y_mean<=-102.910000f){
        if(f->gyro_y_mean<=10.530000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }else{
       if(f->gyro_z_std<=1.317185f){
        return 0;
       }else{
        if(f->acc_z_jerk_mean<=2.703675f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_mean<=185.445000f){
       if(f->acc_x_mean<=-261.500000f){
        return 0;
       }else{
        if(f->acc_y_min<=3.005074f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_mean<=203.000000f){
        return 0;
       }else{
        return 1;
       }
      }
     }
    }else{
     if(f->acc_x_rms<=25.967769f){
      if(f->acc_z_mean<=238.985001f){
       if(f->gyro_x_max<=23.959424f){
        if(f->acc_z_rms<=216.203300f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_min<=10.947440f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_mean<=258.654999f){
        if(f->acc_y_min<=-81.500000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_max<=2.500000f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_mean<=-60.230001f){
       if(f->acc_x_rms<=241.969353f){
        if(f->gyro_z_max<=1.999341f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_gyro_mean<=72.465572f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_max<=43.003559f){
        if(f->acc_x_max<=249.953972f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_std<=1.258811f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->svm_acc_mean<=244.343475f){
     if(f->gyro_x_range<=99.977615f){
      if(f->acc_z_rms<=65.502600f){
       if(f->acc_x_min<=-239.500000f){
        if(f->gyro_z_mean<=-5.937844f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_min<=-21.500000f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_min<=193.739059f){
        if(f->acc_z_mean<=-208.467964f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_mean<=-25.545000f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_mean<=19.079061f){
       if(f->gyro_x_min<=-113.500000f){
        if(f->acc_x_mean<=-20.222736f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_jerk_mean<=3.444444f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_y_min<=12.000000f){
        if(f->acc_z_min<=221.500000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_min<=-38.500000f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->acc_z_max<=102.014328f){
      if(f->acc_y_min<=-41.982086f){
       if(f->acc_z_min<=-245.500000f){
        if(f->acc_x_std<=5.050063f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_range<=81.811916f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_max<=32.006588f){
        if(f->acc_z_mean<=-38.215883f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_min<=-48.220177f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_z_std<=1.739669f){
       return 0;
      }else{
       if(f->acc_z_mean<=248.934998f){
        if(f->acc_x_min<=234.595551f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_mean<=-11.290000f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->acc_y_mean<=15.028543f){
    if(f->gyro_x_std<=53.893612f){
     if(f->gyro_y_min<=-35.227804f){
      if(f->gyro_y_mean<=-52.246803f){
       if(f->acc_z_rms<=113.883339f){
        if(f->acc_x_max<=26.500000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_rms<=476.590851f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_rms<=246.302185f){
        if(f->gyro_z_mean<=10.770636f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_gyro_mean<=220.436081f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_z_rms<=244.432243f){
       if(f->acc_z_rms<=71.437092f){
        if(f->acc_y_std<=7.012365f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_mean<=447.479996f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_x_min<=-11.643831f){
        if(f->gyro_x_range<=195.000000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->svm_acc_max<=261.364609f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->acc_y_jerk_mean<=3.576904f){
      if(f->gyro_z_min<=-30.170170f){
       if(f->svm_gyro_mean<=506.105652f){
        if(f->acc_x_min<=233.916351f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_mean<=-107.314999f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->svm_acc_mean<=214.112350f){
        if(f->acc_z_std<=19.671273f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_std<=31.534028f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->svm_gyro_mean<=518.022949f){
       if(f->acc_x_min<=201.060455f){
        if(f->gyro_z_mean<=56.948536f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_rms<=54.610725f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_std<=37.352629f){
        if(f->acc_y_max<=14.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_rms<=232.142143f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->gyro_y_min<=6.942239f){
     if(f->acc_x_rms<=52.091082f){
      if(f->acc_y_jerk_var<=23.337722f){
       if(f->svm_gyro_mean<=241.697052f){
        if(f->gyro_z_mean<=25.125000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_jerk_mean<=3.177020f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_range<=56.500000f){
        if(f->svm_gyro_max<=867.516602f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_min<=-17.161363f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_z_min<=-113.303646f){
       if(f->acc_x_rms<=225.957954f){
        if(f->gyro_y_std<=1343.304626f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_mean<=30.235000f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_rms<=254.436890f){
        if(f->gyro_y_std<=100.477745f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_max<=6.135670f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->svm_acc_mean<=278.443726f){
      if(f->acc_x_mean<=-74.190002f){
       if(f->gyro_x_mean<=-79.284821f){
        if(f->acc_y_jerk_mean<=3.494950f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_mean<=25.045798f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_z_max<=418.500000f){
        if(f->gyro_z_mean<=19.087981f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_rms<=256.657478f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_jerk_var<=6.982348f){
       if(f->acc_z_jerk_mean<=2.583737f){
        return 1;
       }else{
        return 1;
       }
      }else{
       return 1;
      }
     }
    }
   }
  }
 }
}
static int t6(const Features*f){
 if(f->acc_y_std<=2.851941f){
  if(f->acc_z_rms<=151.772202f){
   if(f->acc_x_rms<=101.339352f){
    if(f->gyro_y_range<=17.999277f){
     if(f->gyro_y_range<=17.002804f){
      if(f->gyro_z_std<=1.953241f){
       if(f->gyro_y_mean<=22.440001f){
        if(f->acc_y_min<=-219.916687f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_rms<=255.694603f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_min<=-246.024933f){
        if(f->gyro_z_rms<=3.892300f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_max<=38.253353f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      return 1;
     }
    }else{
     if(f->gyro_z_rms<=42.653866f){
      if(f->gyro_y_std<=11.172545f){
       if(f->gyro_z_rms<=7.335956f){
        if(f->svm_gyro_max<=56.861044f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_rms<=212.585770f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->svm_acc_mean<=248.904320f){
        if(f->svm_acc_mean<=234.135368f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_max<=-14.064697f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->svm_gyro_max<=584.797821f){
       if(f->gyro_z_range<=73.763569f){
        if(f->acc_x_rms<=5.006963f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_min<=34.000000f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_y_mean<=103.474998f){
        if(f->acc_z_std<=9.353271f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_std<=4.853963f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }else{
    if(f->gyro_x_std<=12.568170f){
     if(f->acc_z_rms<=32.476273f){
      if(f->svm_acc_mean<=257.789963f){
       if(f->acc_x_jerk_var<=8.319968f){
        if(f->acc_y_rms<=19.644932f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }else{
       if(f->acc_y_max<=-51.841499f){
        if(f->acc_y_rms<=61.113537f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_max<=-1.993328f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_mean<=-261.498734f){
       if(f->gyro_y_range<=30.500000f){
        return 0;
       }else{
        return 1;
       }
      }else{
       if(f->gyro_y_rms<=123.263718f){
        if(f->svm_gyro_max<=79.784084f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }
     }
    }else{
     if(f->acc_y_max<=30.036493f){
      if(f->gyro_y_range<=102.940002f){
       if(f->acc_z_std<=3.966448f){
        if(f->gyro_z_range<=51.902985f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_rms<=102.950741f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_max<=224.370102f){
        if(f->acc_z_rms<=94.375725f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_mean<=12.565000f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_x_jerk_var<=1.010203f){
       return 0;
      }else{
       if(f->acc_y_jerk_var<=1.723396f){
        if(f->acc_x_mean<=242.830002f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_mean<=238.559998f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->gyro_z_rms<=18.654177f){
    if(f->acc_x_max<=-22.019846f){
     if(f->acc_z_min<=251.706863f){
      if(f->acc_x_mean<=-45.855534f){
       if(f->gyro_z_max<=57.500000f){
        if(f->acc_z_max<=257.500000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }else{
       if(f->acc_y_mean<=-200.604996f){
        return 0;
       }else{
        if(f->gyro_x_max<=90.500000f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      return 1;
     }
    }else{
     if(f->acc_y_min<=-109.993279f){
      if(f->gyro_x_min<=-10.808110f){
       if(f->acc_z_mean<=236.684998f){
        if(f->acc_y_max<=-128.500000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_jerk_mean<=1.779422f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_max<=-141.790901f){
        if(f->acc_z_max<=183.500000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_max<=66.603294f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_z_mean<=189.536018f){
       if(f->acc_y_max<=-42.500000f){
        if(f->acc_z_min<=-239.975906f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_std<=2.339185f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_rms<=48.740881f){
        if(f->gyro_z_range<=7.006325f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_rms<=191.402222f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_x_max<=-41.000000f){
     return 1;
    }else{
     if(f->gyro_y_mean<=32.719999f){
      if(f->acc_z_mean<=-241.014999f){
       if(f->acc_y_min<=-3.000000f){
        if(f->gyro_x_range<=155.000000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_rms<=65.523321f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_acc_max<=257.161423f){
        if(f->acc_y_mean<=-110.179550f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_min<=-29.500000f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_max<=82.713676f){
       if(f->gyro_z_max<=-10.225288f){
        if(f->gyro_z_min<=-49.419371f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_jerk_mean<=2.373864f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_jerk_mean<=2.343434f){
        return 1;
       }else{
        return 1;
       }
      }
     }
    }
   }
  }
 }else{
  if(f->acc_x_rms<=180.891045f){
   if(f->acc_y_mean<=-153.575005f){
    if(f->gyro_x_max<=947.914154f){
     if(f->acc_x_range<=111.004955f){
      if(f->acc_z_std<=28.558436f){
       if(f->gyro_z_rms<=210.637817f){
        if(f->gyro_x_std<=180.841873f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_range<=52.964138f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_x_min<=-368.795822f){
        if(f->acc_y_min<=-270.926651f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_std<=19.373798f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_x_std<=233.375481f){
       if(f->acc_y_std<=35.478579f){
        if(f->acc_z_max<=-23.958755f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_rms<=310.997849f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_y_rms<=281.602112f){
        if(f->acc_z_range<=161.249367f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_rms<=937.089539f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_z_jerk_var<=203.705795f){
      if(f->svm_acc_max<=272.744873f){
       if(f->acc_z_min<=-39.500000f){
        if(f->acc_z_range<=134.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_rms<=42.435024f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_jerk_var<=23.215672f){
        if(f->acc_z_mean<=91.650002f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_mean<=-478.532822f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_z_mean<=98.698719f){
       if(f->gyro_z_mean<=528.100006f){
        if(f->acc_y_range<=2829.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_mean<=373.529999f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_std<=218.514236f){
        if(f->gyro_y_mean<=193.864998f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_mean<=1228.569458f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_x_jerk_var<=19.849196f){
     if(f->gyro_x_rms<=100.616325f){
      if(f->acc_x_rms<=30.076818f){
       if(f->acc_z_mean<=203.995003f){
        if(f->gyro_y_min<=10.500000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->svm_gyro_mean<=110.867767f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_x_range<=244.919556f){
        if(f->svm_gyro_max<=773.993896f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->svm_acc_mean<=216.621620f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_jerk_var<=6.629935f){
       if(f->acc_x_rms<=67.565224f){
        if(f->gyro_x_mean<=-395.360001f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->svm_gyro_max<=742.996368f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_max<=0.017103f){
        if(f->gyro_x_rms<=721.648926f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_rms<=238.790314f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_y_rms<=219.800407f){
      if(f->acc_y_range<=185.443787f){
       if(f->acc_y_jerk_var<=15.439650f){
        if(f->acc_y_min<=-18.769923f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_mean<=161.855003f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_min<=-151.967758f){
        if(f->acc_z_rms<=164.284218f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_jerk_mean<=4.478938f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->svm_gyro_mean<=1170.821289f){
       if(f->acc_y_jerk_var<=2221.668823f){
        if(f->acc_y_min<=-456.250061f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_max<=205.000000f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_rms<=224.042084f){
        if(f->gyro_x_range<=8027.474609f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_range<=15809.880859f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->acc_y_mean<=15.624022f){
    if(f->svm_gyro_max<=4330.369629f){
     if(f->acc_y_rms<=64.659222f){
      if(f->gyro_y_rms<=98.271564f){
       if(f->acc_x_max<=253.934708f){
        if(f->gyro_z_mean<=12.316896f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_mean<=14.085000f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_mean<=515.513336f){
        if(f->acc_x_rms<=223.936653f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_jerk_mean<=3.580808f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_z_mean<=98.225002f){
       if(f->acc_y_rms<=336.217804f){
        if(f->gyro_y_range<=1704.594482f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_max<=1280.015625f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_jerk_var<=313.364182f){
        if(f->gyro_z_rms<=121.826962f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }
     }
    }else{
     if(f->acc_y_mean<=-277.669998f){
      if(f->gyro_x_mean<=728.220001f){
       if(f->acc_z_max<=798.000000f){
        if(f->gyro_y_mean<=847.584991f){
         return 0;
        }else{
         return 0;
        }
       }else{
        return 0;
       }
      }else{
       return 1;
      }
     }else{
      if(f->acc_y_std<=307.326492f){
       if(f->acc_y_min<=-101.457371f){
        if(f->gyro_z_rms<=1376.700928f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }else{
       if(f->acc_x_jerk_var<=3351.195312f){
        if(f->gyro_x_mean<=716.295013f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_std<=242.643555f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_x_mean<=238.320000f){
     if(f->acc_z_min<=-113.287220f){
      if(f->acc_x_jerk_mean<=15.713752f){
       if(f->gyro_y_rms<=1809.569946f){
        if(f->acc_y_min<=-140.000000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_mean<=15.975000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_rms<=71.639240f){
        if(f->gyro_z_min<=-856.000000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }
     }else{
      if(f->acc_y_mean<=56.044142f){
       if(f->svm_gyro_mean<=166.928467f){
        if(f->acc_z_mean<=0.895000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_rms<=27.162787f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_min<=90.153656f){
        if(f->acc_z_jerk_var<=3.067544f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_range<=87.843945f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_y_jerk_mean<=5.550505f){
      if(f->gyro_y_rms<=88.580284f){
       if(f->acc_y_jerk_var<=1.671054f){
        if(f->acc_z_jerk_mean<=2.244578f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_mean<=37.100000f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_jerk_var<=3.986124f){
        if(f->gyro_x_range<=161.500000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_min<=-391.312683f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_min<=108.866974f){
       if(f->svm_acc_mean<=272.549423f){
        return 1;
       }else{
        return 1;
       }
      }else{
       if(f->acc_y_range<=276.500000f){
        if(f->gyro_y_range<=3519.500000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_rms<=788.451050f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }
 }
}
static int t7(const Features*f){
 if(f->acc_x_mean<=-44.735001f){
  if(f->acc_y_std<=4.882243f){
   if(f->gyro_y_std<=19.101307f){
    if(f->acc_x_max<=-220.958466f){
     if(f->acc_y_mean<=-57.615000f){
      return 0;
     }else{
      if(f->acc_z_mean<=-39.292288f){
       if(f->svm_acc_mean<=268.068527f){
        if(f->acc_x_mean<=-261.581635f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }else{
       if(f->gyro_z_range<=34.903984f){
        if(f->svm_acc_max<=237.557365f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_std<=9.986468f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_z_min<=251.706863f){
      if(f->acc_y_min<=-230.837364f){
       if(f->gyro_y_range<=64.500000f){
        if(f->acc_y_mean<=-244.485046f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 0;
       }
      }else{
       if(f->acc_z_mean<=255.290001f){
        if(f->acc_x_min<=-246.000000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_min<=49.357679f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->svm_acc_max<=270.778915f){
       return 0;
      }else{
       return 1;
      }
     }
    }
   }else{
    if(f->acc_x_mean<=-228.419998f){
     if(f->gyro_y_min<=-241.500000f){
      if(f->acc_x_jerk_mean<=2.253848f){
       if(f->acc_z_min<=-80.000000f){
        return 1;
       }else{
        if(f->acc_y_rms<=37.803534f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_mean<=5.635244f){
        return 0;
       }else{
        if(f->gyro_z_std<=30.465715f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_mean<=-55.429415f){
       return 0;
      }else{
       if(f->acc_x_max<=-248.995941f){
        if(f->svm_gyro_max<=158.925987f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_min<=-44.016077f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_y_max<=-165.000000f){
      if(f->gyro_y_mean<=97.880001f){
       if(f->gyro_x_mean<=-47.089298f){
        if(f->gyro_z_min<=86.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_mean<=258.883774f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_z_max<=318.933014f){
        return 1;
       }else{
        return 1;
       }
      }
     }else{
      if(f->acc_z_std<=16.573322f){
       if(f->acc_z_rms<=73.449696f){
        if(f->gyro_x_range<=148.500000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_rms<=151.814301f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       return 0;
      }
     }
    }
   }
  }else{
   if(f->acc_z_jerk_var<=40.425875f){
    if(f->acc_y_rms<=155.346649f){
     if(f->svm_gyro_mean<=298.853882f){
      if(f->acc_x_min<=-234.820534f){
       if(f->acc_z_rms<=38.593060f){
        if(f->acc_y_max<=10.104668f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_mean<=256.018982f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_std<=2.407740f){
        return 0;
       }else{
        if(f->acc_z_mean<=241.789993f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_jerk_var<=9.806801f){
       if(f->svm_acc_mean<=262.319458f){
        if(f->acc_y_mean<=15.564065f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_rms<=36.367893f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_rms<=210.864349f){
        if(f->acc_y_max<=82.008881f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_min<=-132.500000f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->gyro_y_range<=168.000000f){
      if(f->gyro_z_min<=-304.483101f){
       if(f->acc_y_min<=-204.000000f){
        return 0;
       }else{
        return 0;
       }
      }else{
       if(f->gyro_x_range<=139.657631f){
        if(f->acc_x_jerk_var<=5.019386f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_mean<=459.419998f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_x_range<=39.561102f){
       if(f->acc_y_max<=-181.500000f){
        if(f->gyro_z_min<=-149.000000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_max<=-126.997814f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_range<=160.255196f){
        if(f->gyro_z_min<=227.000000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->svm_acc_mean<=224.739136f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_y_mean<=-215.625000f){
     if(f->acc_x_range<=816.779846f){
      if(f->gyro_x_mean<=769.970001f){
       if(f->gyro_z_min<=-551.121552f){
        if(f->gyro_x_max<=446.000000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_max<=-167.990845f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       return 1;
      }
     }else{
      if(f->acc_x_mean<=-55.955000f){
       if(f->svm_gyro_max<=4015.099365f){
        return 1;
       }else{
        return 1;
       }
      }else{
       if(f->svm_gyro_max<=5388.408691f){
        return 0;
       }else{
        return 1;
       }
      }
     }
    }else{
     if(f->acc_y_jerk_var<=37.801329f){
      if(f->acc_y_jerk_var<=16.956025f){
       if(f->gyro_x_max<=287.123291f){
        return 1;
       }else{
        if(f->svm_acc_max<=327.040924f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_min<=-36.246643f){
        if(f->gyro_z_max<=111.387623f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }
     }else{
      if(f->acc_x_rms<=132.860245f){
       if(f->gyro_z_range<=2636.406982f){
        if(f->acc_y_jerk_mean<=6.344616f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_max<=683.126648f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->svm_acc_mean<=274.303894f){
        if(f->acc_x_max<=-161.500000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_std<=112.449902f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }
 }else{
  if(f->acc_y_min<=-111.999531f){
   if(f->acc_y_std<=80.913708f){
    if(f->gyro_y_std<=206.121887f){
     if(f->acc_y_rms<=212.710396f){
      if(f->acc_z_min<=-8.905599f){
       if(f->gyro_z_std<=6.833882f){
        if(f->svm_acc_max<=261.405838f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_mean<=-79.595001f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_std<=1.780496f){
        if(f->gyro_y_min<=15.000000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_min<=-10.949749f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_y_range<=16.999869f){
       if(f->gyro_y_min<=18.500000f){
        if(f->gyro_x_range<=28.048153f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_std<=2.405400f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_range<=122.002113f){
        if(f->gyro_x_max<=-42.073437f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_mean<=-56.539852f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_y_std<=32.010645f){
      if(f->acc_y_mean<=-194.785004f){
       if(f->gyro_x_max<=260.918579f){
        if(f->acc_z_range<=118.390770f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_max<=61.008171f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_min<=-37.000000f){
        if(f->gyro_x_range<=4581.000000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_min<=54.000000f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->gyro_y_rms<=382.296570f){
       if(f->gyro_x_std<=210.578835f){
        if(f->acc_x_jerk_var<=42.667479f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_jerk_var<=22.769514f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_x_range<=790.865540f){
        if(f->acc_y_jerk_var<=20.874381f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_mean<=238.950607f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_y_max<=392.168793f){
     if(f->acc_y_mean<=-149.484993f){
      if(f->acc_x_mean<=55.907326f){
       if(f->acc_z_min<=-415.929276f){
        if(f->gyro_x_max<=608.000000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_mean<=497.654922f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_mean<=922.244904f){
        if(f->svm_acc_mean<=294.906128f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_range<=367.910400f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_z_max<=62.045269f){
       if(f->gyro_y_rms<=939.569855f){
        if(f->acc_y_min<=-396.331512f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_rms<=2066.901855f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_range<=1979.095642f){
        if(f->acc_x_min<=57.000000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_rms<=304.587814f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_y_rms<=365.907715f){
      if(f->gyro_x_std<=2320.344971f){
       if(f->acc_z_jerk_mean<=12.848485f){
        if(f->acc_y_mean<=10.475000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_mean<=-215.805000f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_jerk_mean<=49.010099f){
        if(f->gyro_y_mean<=119.477875f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }
     }else{
      if(f->svm_acc_max<=1866.771484f){
       if(f->gyro_x_mean<=1085.125000f){
        if(f->acc_y_max<=965.124084f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_gyro_mean<=2487.279907f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_z_max<=4122.433472f){
        if(f->svm_acc_mean<=389.538956f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_range<=8631.000000f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->gyro_y_std<=20.456897f){
    if(f->gyro_z_std<=9.338688f){
     if(f->gyro_x_range<=38.995850f){
      if(f->acc_y_rms<=185.231216f){
       if(f->acc_y_max<=-73.927837f){
        if(f->gyro_y_range<=10.122952f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_gyro_mean<=105.656113f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       return 0;
      }
     }else{
      if(f->acc_x_rms<=25.759889f){
       if(f->gyro_z_mean<=3.890931f){
        if(f->gyro_z_range<=8.002479f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_max<=32.500000f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_mean<=243.124870f){
        if(f->svm_acc_max<=233.120140f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_range<=8.001531f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_z_min<=-221.713547f){
      if(f->acc_z_min<=-247.500000f){
       if(f->acc_x_mean<=70.264999f){
        if(f->svm_gyro_max<=204.076080f){
         return 0;
        }else{
         return 0;
        }
       }else{
        return 1;
       }
      }else{
       if(f->gyro_x_max<=-32.000000f){
        return 1;
       }else{
        if(f->acc_x_rms<=51.630571f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_max<=-63.949778f){
       if(f->gyro_x_mean<=3.615000f){
        if(f->acc_x_max<=5.500000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_mean<=43.862919f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_z_mean<=-28.790000f){
        if(f->acc_x_rms<=253.032806f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_rms<=2.368430f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_y_jerk_var<=21.949259f){
     if(f->gyro_z_range<=80.967686f){
      if(f->acc_x_max<=244.889908f){
       if(f->gyro_z_mean<=12.388587f){
        if(f->acc_x_rms<=28.272601f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_min<=56.500000f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_min<=-127.970455f){
        if(f->gyro_y_max<=106.957020f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->svm_acc_mean<=256.402420f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_x_min<=-206.970551f){
       if(f->acc_x_mean<=249.834091f){
        if(f->gyro_y_mean<=425.900009f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_mean<=-127.829861f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->svm_gyro_max<=694.230042f){
        if(f->acc_y_max<=-15.684077f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_min<=-46.000000f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->acc_x_jerk_var<=26.873923f){
      if(f->acc_z_min<=-107.868584f){
       if(f->acc_y_jerk_mean<=3.560606f){
        if(f->svm_gyro_mean<=132.080963f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_rms<=173.851852f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_z_std<=411.602036f){
        if(f->gyro_y_rms<=351.819397f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_min<=-423.000000f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_jerk_var<=98.543518f){
       if(f->gyro_x_range<=1978.000000f){
        if(f->gyro_y_mean<=-665.315796f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_rms<=70.487484f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_mean<=-24.074376f){
        return 1;
       }else{
        if(f->acc_x_std<=11.022787f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }
 }
}
static int t8(const Features*f){
 if(f->gyro_x_std<=23.331740f){
  if(f->acc_y_min<=-157.964676f){
   if(f->gyro_y_max<=24.998869f){
    if(f->gyro_y_std<=2.115435f){
     if(f->svm_acc_mean<=262.478958f){
      if(f->gyro_z_rms<=6.512677f){
       if(f->acc_x_mean<=-0.330000f){
        if(f->gyro_x_min<=-63.385113f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_jerk_var<=4.073672f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_min<=-2.009781f){
        if(f->acc_x_mean<=1.488562f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_mean<=-53.713234f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_z_jerk_var<=11.211918f){
       if(f->acc_x_min<=-0.758016f){
        return 1;
       }else{
        if(f->gyro_y_mean<=14.856111f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       return 0;
      }
     }
    }else{
     if(f->acc_y_mean<=-216.909996f){
      if(f->gyro_y_max<=24.003513f){
       if(f->acc_x_min<=3.023765f){
        if(f->gyro_x_std<=6.107611f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_min<=32.218710f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       return 1;
      }
     }else{
      if(f->acc_y_rms<=178.955544f){
       if(f->svm_acc_mean<=249.784683f){
        if(f->acc_z_std<=2.675393f){
         return 0;
        }else{
         return 0;
        }
       }else{
        return 1;
       }
      }else{
       if(f->svm_acc_mean<=249.430901f){
        if(f->acc_z_mean<=-157.436691f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_min<=-14.896696f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->gyro_y_min<=52.010584f){
     if(f->gyro_z_min<=1.018889f){
      if(f->gyro_y_max<=43.992752f){
       if(f->gyro_z_max<=1.014517f){
        if(f->acc_y_rms<=212.350365f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_max<=-219.645935f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_z_range<=12.015057f){
        if(f->acc_y_std<=1.929827f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_min<=40.000362f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_z_max<=-1.500000f){
       if(f->gyro_z_max<=43.115517f){
        if(f->svm_gyro_max<=70.583889f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_range<=116.500000f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_acc_mean<=236.671989f){
        return 1;
       }else{
        if(f->acc_x_mean<=3.507110f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->gyro_z_std<=2.164394f){
      if(f->acc_y_rms<=208.192535f){
       if(f->gyro_z_rms<=3.241305f){
        if(f->gyro_x_min<=-30.000000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_min<=-8.781234f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_rms<=73.122776f){
        if(f->acc_x_max<=-9.160844f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_min<=34.000000f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_y_max<=78.940933f){
       if(f->acc_x_max<=-7.000739f){
        if(f->svm_acc_mean<=264.967133f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_rms<=15.351564f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_min<=-24.011867f){
        if(f->acc_y_rms<=171.022209f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_rms<=80.950733f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->acc_y_mean<=-63.339622f){
    if(f->acc_z_mean<=-67.304998f){
     if(f->gyro_x_max<=48.034685f){
      if(f->svm_acc_mean<=254.252480f){
       if(f->gyro_y_rms<=36.285728f){
        return 0;
       }else{
        return 0;
       }
      }else{
       return 0;
      }
     }else{
      if(f->svm_acc_max<=257.875946f){
       return 0;
      }else{
       if(f->gyro_y_mean<=41.110001f){
        if(f->gyro_z_rms<=23.487425f){
         return 1;
        }else{
         return 0;
        }
       }else{
        return 0;
       }
      }
     }
    }else{
     if(f->gyro_y_std<=2.779991f){
      if(f->acc_x_rms<=77.997593f){
       if(f->acc_y_rms<=80.024284f){
        return 1;
       }else{
        if(f->acc_x_max<=21.809690f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       return 1;
      }
     }else{
      if(f->gyro_x_mean<=28.533138f){
       if(f->acc_x_mean<=-208.819267f){
        return 0;
       }else{
        if(f->acc_x_min<=-10.365724f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_min<=-224.819229f){
        if(f->gyro_z_min<=-22.000000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_max<=89.500000f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }else{
    if(f->gyro_x_std<=7.802019f){
     if(f->acc_y_mean<=185.220001f){
      if(f->acc_x_max<=258.996384f){
       if(f->acc_x_std<=0.980204f){
        if(f->svm_acc_max<=251.765694f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_range<=86.509098f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->svm_acc_mean<=257.472168f){
        if(f->gyro_x_mean<=-10.405000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_min<=25.898617f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_mean<=202.902916f){
       return 0;
      }else{
       return 1;
      }
     }
    }else{
     if(f->gyro_z_max<=25.969827f){
      if(f->acc_y_max<=22.004071f){
       if(f->acc_y_std<=2.616409f){
        if(f->acc_x_max<=-21.134141f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_max<=-239.500000f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_y_min<=18.997561f){
        if(f->gyro_z_min<=-122.621807f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_std<=2.817056f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_rms<=34.088039f){
       if(f->acc_z_mean<=15.249001f){
        if(f->svm_gyro_max<=176.400459f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_mean<=220.341377f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_mean<=244.000000f){
        if(f->acc_x_max<=-243.530060f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_rms<=26.818364f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }
 }else{
  if(f->acc_y_min<=-204.977539f){
   if(f->acc_y_std<=76.824856f){
    if(f->acc_z_std<=33.706612f){
     if(f->gyro_x_max<=-31.002991f){
      if(f->acc_x_min<=2.995364f){
       if(f->acc_y_mean<=-267.414993f){
        if(f->gyro_z_min<=-172.000000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_mean<=-125.491543f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_z_mean<=-98.329998f){
        if(f->gyro_x_rms<=469.297211f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_rms<=363.622253f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_z_mean<=-60.754999f){
       if(f->gyro_y_rms<=379.599319f){
        if(f->gyro_y_max<=50.984653f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_max<=-37.923752f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_x_jerk_mean<=4.122097f){
        if(f->gyro_x_range<=739.882294f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_rms<=246.849274f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }
    }else{
     if(f->gyro_x_max<=526.917603f){
      if(f->acc_x_jerk_mean<=4.061435f){
       if(f->gyro_x_min<=-246.000000f){
        if(f->gyro_z_mean<=-88.540001f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_rms<=57.611532f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_y_std<=307.644638f){
        if(f->gyro_z_rms<=348.806442f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_min<=-390.000641f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_y_rms<=293.784561f){
       if(f->acc_y_rms<=166.824631f){
        if(f->acc_x_min<=-36.000000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_mean<=-265.346680f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_min<=-427.017715f){
        if(f->acc_y_rms<=275.393661f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_mean<=-19.835000f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }else{
    if(f->acc_x_jerk_var<=3304.453735f){
     if(f->gyro_z_rms<=1773.624207f){
      if(f->acc_z_mean<=103.318588f){
       if(f->gyro_x_max<=527.724792f){
        if(f->svm_gyro_max<=2557.196411f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_min<=-330.974747f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_y_rms<=153.609108f){
        if(f->acc_z_rms<=211.151474f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_jerk_var<=11.300478f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->gyro_z_range<=7767.580811f){
       if(f->acc_x_jerk_var<=83.188442f){
        return 0;
       }else{
        if(f->gyro_x_range<=9333.514160f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_std<=1504.151428f){
        return 1;
       }else{
        return 0;
       }
      }
     }
    }else{
     if(f->acc_x_jerk_var<=6953.371582f){
      if(f->acc_z_jerk_mean<=60.404406f){
       if(f->acc_z_min<=-424.500000f){
        if(f->acc_y_rms<=354.594818f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_max<=142.500000f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_max<=548.932434f){
        if(f->acc_z_rms<=414.486450f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_rms<=1530.914490f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_x_jerk_var<=9322.110840f){
       if(f->acc_y_mean<=-206.627403f){
        if(f->acc_z_min<=-512.549240f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }else{
       if(f->acc_x_rms<=137.077721f){
        if(f->acc_x_mean<=5.060000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_max<=215.095978f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->acc_y_min<=-20.987484f){
    if(f->acc_z_jerk_mean<=6.182140f){
     if(f->svm_gyro_mean<=85.735031f){
      if(f->gyro_z_std<=16.041236f){
       if(f->gyro_x_min<=-75.949776f){
        if(f->acc_x_max<=-11.373449f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_max<=72.260731f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_rms<=243.323494f){
        if(f->acc_x_max<=-29.171398f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_range<=34.643656f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_jerk_var<=10.571330f){
       if(f->gyro_y_rms<=336.895737f){
        if(f->acc_y_rms<=50.099426f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_std<=615.948242f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_max<=13.112556f){
        if(f->gyro_y_min<=-1725.122925f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_gyro_max<=1087.733215f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_y_max<=91.500000f){
      if(f->svm_acc_max<=403.542282f){
       if(f->acc_y_max<=8.500000f){
        if(f->gyro_x_rms<=625.500214f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_rms<=330.371216f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_jerk_var<=33.320375f){
        if(f->gyro_x_mean<=48.025002f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_mean<=192.284996f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_mean<=34.570679f){
       if(f->gyro_z_rms<=915.445282f){
        if(f->gyro_y_rms<=432.330582f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_mean<=282.014374f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_jerk_var<=77.513519f){
        if(f->svm_gyro_mean<=934.416016f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_mean<=952.869995f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->gyro_y_min<=77.576176f){
     if(f->acc_x_mean<=242.917007f){
      if(f->gyro_z_std<=2.114270f){
       if(f->acc_z_min<=195.500000f){
        return 1;
       }else{
        if(f->acc_z_rms<=229.469299f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_y_max<=2.006735f){
        if(f->acc_x_jerk_mean<=4.444444f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_mean<=1167.340027f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->gyro_y_rms<=70.403084f){
       if(f->svm_gyro_mean<=72.039806f){
        if(f->acc_y_rms<=17.473121f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_rms<=15.817358f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_std<=13.896868f){
        if(f->gyro_y_mean<=91.215000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_range<=122.600590f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_y_max<=187.000000f){
      if(f->acc_x_max<=242.500000f){
       if(f->svm_gyro_max<=590.554810f){
        if(f->acc_x_max<=-242.844673f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_max<=-67.588898f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_jerk_var<=12.652179f){
        if(f->gyro_z_min<=-315.610703f){
         return 0;
        }else{
         return 0;
        }
       }else{
        return 0;
       }
      }
     }else{
      if(f->acc_x_min<=-15.000000f){
       return 1;
      }else{
       return 0;
      }
     }
    }
   }
  }
 }
}
static int t9(const Features*f){
 if(f->acc_x_rms<=131.308006f){
  if(f->acc_z_max<=-196.006477f){
   if(f->acc_y_max<=-19.987344f){
    if(f->gyro_x_std<=6.652369f){
     if(f->svm_gyro_mean<=64.733986f){
      if(f->acc_y_jerk_mean<=2.299178f){
       if(f->gyro_z_rms<=9.958236f){
        return 1;
       }else{
        return 1;
       }
      }else{
       return 1;
      }
     }else{
      if(f->acc_y_rms<=25.464835f){
       return 1;
      }else{
       return 0;
      }
     }
    }else{
     if(f->gyro_x_max<=-52.500000f){
      if(f->gyro_z_std<=43.416588f){
       if(f->svm_acc_max<=263.502365f){
        if(f->acc_x_range<=25.000000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_jerk_var<=2.681563f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->svm_gyro_max<=931.194275f){
        if(f->acc_x_max<=18.650517f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_rms<=82.830662f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_z_mean<=-241.728714f){
       if(f->svm_gyro_max<=979.392578f){
        if(f->gyro_x_min<=-397.500000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->svm_gyro_mean<=529.603455f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->svm_acc_mean<=255.811913f){
        if(f->svm_acc_mean<=251.577972f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_rms<=114.582500f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }else{
    if(f->gyro_z_rms<=16.570897f){
     if(f->svm_acc_max<=245.855972f){
      if(f->acc_z_max<=-211.500000f){
       return 0;
      }else{
       return 0;
      }
     }else{
      if(f->gyro_z_mean<=4.318559f){
       if(f->svm_acc_mean<=241.137833f){
        return 0;
       }else{
        if(f->acc_y_min<=81.876823f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_jerk_var<=3.521375f){
        if(f->acc_y_min<=61.000000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_rms<=256.006981f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->gyro_y_rms<=101.621677f){
      if(f->acc_x_max<=41.069075f){
       if(f->gyro_y_std<=26.782436f){
        if(f->gyro_z_range<=197.762863f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->svm_gyro_mean<=173.963570f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->svm_gyro_mean<=366.259689f){
        return 1;
       }else{
        if(f->acc_y_std<=31.236303f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_y_min<=-55.812357f){
       if(f->acc_x_jerk_var<=8.138149f){
        if(f->svm_acc_max<=290.789688f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_std<=59.179743f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_std<=18.158751f){
        if(f->svm_acc_max<=260.115494f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_max<=289.799774f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->acc_z_jerk_mean<=10.191203f){
    if(f->acc_x_jerk_mean<=5.101620f){
     if(f->acc_y_mean<=-153.137009f){
      if(f->gyro_x_mean<=-76.460747f){
       if(f->svm_acc_max<=344.180191f){
        if(f->acc_x_min<=-89.875427f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_y_std<=198.735283f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_max<=-45.995872f){
        if(f->gyro_x_range<=55.965364f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_z_range<=120.001919f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->gyro_z_std<=16.658719f){
       if(f->svm_gyro_max<=151.944046f){
        if(f->gyro_z_range<=7.003660f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_range<=13.095411f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_x_std<=46.514500f){
        if(f->acc_y_jerk_var<=11.440863f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_range<=138.500000f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->gyro_x_rms<=233.077766f){
      if(f->acc_y_jerk_var<=31.204249f){
       if(f->acc_y_min<=-346.007858f){
        if(f->acc_x_mean<=-4.315301f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_mean<=-59.430000f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_min<=-367.053619f){
        if(f->gyro_z_min<=-531.960938f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_rms<=341.036041f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->gyro_x_max<=528.977570f){
       if(f->acc_z_range<=144.141205f){
        if(f->acc_y_max<=-83.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_std<=315.117126f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_min<=-238.819740f){
        if(f->gyro_x_max<=1134.836487f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_jerk_var<=23.791959f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }else{
    if(f->gyro_z_std<=345.034470f){
     if(f->acc_z_range<=774.957977f){
      if(f->acc_z_mean<=-167.250000f){
       if(f->gyro_y_range<=1022.500000f){
        if(f->gyro_x_rms<=566.890900f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_mean<=493.760010f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_std<=116.177368f){
        if(f->gyro_x_max<=721.000000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_mean<=1396.100891f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_z_min<=-250.138100f){
       if(f->acc_y_mean<=-179.272583f){
        if(f->gyro_y_min<=-172.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_min<=-704.500000f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_rms<=871.133636f){
        return 0;
       }else{
        if(f->acc_z_rms<=220.484894f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_x_rms<=58.621370f){
      if(f->gyro_x_mean<=345.974991f){
       if(f->gyro_y_max<=-238.000000f){
        return 1;
       }else{
        if(f->acc_y_min<=-292.988419f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_rms<=120.336006f){
        return 1;
       }else{
        if(f->acc_x_rms<=54.482454f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_z_jerk_var<=734.829834f){
       if(f->acc_y_rms<=224.672226f){
        if(f->svm_gyro_max<=2286.037476f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_max<=22.500000f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_y_max<=377.600418f){
        if(f->acc_y_min<=-360.000000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_range<=3902.000000f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }
    }
   }
  }
 }else{
  if(f->gyro_y_std<=37.162111f){
   if(f->acc_x_rms<=240.751083f){
    if(f->gyro_z_rms<=173.862930f){
     if(f->gyro_y_rms<=117.127220f){
      if(f->acc_y_mean<=5.055000f){
       if(f->gyro_z_range<=34.993969f){
        if(f->acc_x_rms<=220.432312f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_mean<=-53.427944f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_z_rms<=59.828262f){
        if(f->acc_z_min<=46.500000f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_range<=59.927149f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->svm_acc_max<=270.700470f){
       if(f->acc_z_mean<=103.884998f){
        return 0;
       }else{
        if(f->gyro_z_std<=15.355404f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       return 1;
      }
     }
    }else{
     if(f->acc_y_max<=-55.000000f){
      return 0;
     }else{
      return 0;
     }
    }
   }else{
    if(f->gyro_y_max<=122.995552f){
     if(f->gyro_x_range<=51.999125f){
      if(f->acc_z_range<=22.997616f){
       if(f->acc_x_mean<=-261.518723f){
        if(f->acc_x_jerk_mean<=2.025253f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->svm_gyro_max<=91.266094f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_x_range<=46.844387f){
        if(f->gyro_z_min<=-34.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_x_rms<=256.179642f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }else{
      if(f->acc_y_min<=12.009202f){
       if(f->acc_x_rms<=265.205475f){
        if(f->acc_y_rms<=36.789328f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_std<=21.573554f){
         return 1;
        }else{
         return 0;
        }
       }
      }else{
       if(f->gyro_y_rms<=35.577099f){
        if(f->acc_x_mean<=-256.759995f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_max<=-33.294388f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_y_mean<=-31.795000f){
      if(f->acc_z_max<=12.215028f){
       if(f->acc_x_range<=13.998836f){
        return 1;
       }else{
        return 0;
       }
      }else{
       if(f->gyro_z_min<=-19.245026f){
        if(f->gyro_z_std<=9.795630f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_x_rms<=248.662758f){
         return 0;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_x_max<=262.950958f){
       if(f->gyro_z_min<=-6.067875f){
        if(f->gyro_x_std<=43.866760f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->svm_acc_mean<=257.893112f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->gyro_y_min<=47.093321f){
        if(f->gyro_x_range<=106.000000f){
         return 0;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_x_mean<=-12.249915f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }
   }
  }else{
   if(f->acc_x_range<=1231.469849f){
    if(f->acc_y_jerk_var<=764.680267f){
     if(f->acc_z_mean<=-124.948917f){
      if(f->gyro_z_max<=696.629761f){
       if(f->acc_x_rms<=248.838905f){
        if(f->gyro_x_mean<=-222.865005f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_y_std<=229.430336f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_jerk_mean<=24.808081f){
        if(f->gyro_y_range<=1121.000000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_x_mean<=-533.119995f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->svm_acc_max<=318.311172f){
       if(f->gyro_y_rms<=144.286835f){
        if(f->acc_y_max<=25.042152f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_max<=1.234436f){
         return 0;
        }else{
         return 0;
        }
       }
      }else{
       if(f->acc_z_jerk_var<=773.450653f){
        if(f->acc_y_jerk_var<=26.676051f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_z_min<=-279.500000f){
         return 0;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->gyro_x_min<=-1383.018494f){
      if(f->gyro_x_mean<=-539.630005f){
       if(f->gyro_x_std<=2636.677490f){
        if(f->gyro_z_range<=6928.047852f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_mean<=128.945000f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       if(f->acc_y_max<=490.500000f){
        if(f->acc_y_min<=-546.500000f){
         return 0;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_std<=346.656250f){
         return 1;
        }else{
         return 0;
        }
       }
      }
     }else{
      if(f->acc_z_min<=-310.000000f){
       if(f->acc_y_max<=268.000000f){
        if(f->acc_x_max<=227.000000f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->gyro_z_rms<=1371.209473f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_max<=3335.155151f){
        if(f->acc_y_min<=-723.867065f){
         return 0;
        }else{
         return 1;
        }
       }else{
        return 1;
       }
      }
     }
    }
   }else{
    if(f->acc_x_range<=1527.500000f){
     if(f->acc_y_mean<=-238.247131f){
      if(f->gyro_x_mean<=305.214996f){
       if(f->gyro_y_mean<=-752.730011f){
        return 1;
       }else{
        return 0;
       }
      }else{
       if(f->gyro_x_max<=4809.500000f){
        return 1;
       }else{
        return 1;
       }
      }
     }else{
      if(f->acc_y_jerk_mean<=58.069670f){
       if(f->acc_z_jerk_var<=6844.229492f){
        if(f->acc_x_jerk_mean<=53.393940f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->gyro_z_mean<=-41.695001f){
         return 1;
        }else{
         return 1;
        }
       }
      }else{
       if(f->svm_gyro_max<=4851.576660f){
        if(f->gyro_x_std<=1308.214294f){
         return 1;
        }else{
         return 0;
        }
       }else{
        if(f->acc_y_mean<=-188.014999f){
         return 1;
        }else{
         return 1;
        }
       }
      }
     }
    }else{
     if(f->acc_x_range<=1768.831665f){
      if(f->acc_x_range<=1766.500000f){
       if(f->acc_y_rms<=494.107544f){
        if(f->acc_x_jerk_var<=36984.648438f){
         return 1;
        }else{
         return 1;
        }
       }else{
        if(f->acc_y_mean<=-244.034996f){
         return 0;
        }else{
         return 1;
        }
       }
      }else{
       return 1;
      }
     }else{
      return 1;
     }
    }
   }
  }
 }
}
static int rf_predict(const Features*f){
int v=0;
v+=t0(f);
v+=t1(f);
v+=t2(f);
v+=t3(f);
v+=t4(f);
v+=t5(f);
v+=t6(f);
v+=t7(f);
v+=t8(f);
v+=t9(f);
return v>5?1:0;}
static int rf_fall_probability(const Features*f){
int v=0;
v+=t0(f);
v+=t1(f);
v+=t2(f);
v+=t3(f);
v+=t4(f);
v+=t5(f);
v+=t6(f);
v+=t7(f);
v+=t8(f);
v+=t9(f);
return(v*100)/10;}