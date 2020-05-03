<?php

class Solution {

    /**
     * @param String $s
     * @return Integer
     */
    function romanToInt($s) {
        $arr = str_split($s);  //将字符串转成数组

        $sum = 0;
        $len = strlen($s);
        $index = 0;
        $step  = 0;
        do{
            //$first = substr($s, $index, 1);//取一个字符
            if($arr[$index] == 'I'){
                //echo "-I-";
                if($arr[$index+1] == "I"){
                    if($arr[$index+2] == "I"){
                        $sum   +=3;
                        $index += 3;  
                        $step  = 3;                     
                    }else{
                        $sum   +=2;
                        $index += 2;
                        $step  = 2; 
                    }                  
                }else if($arr[$index+1] == "V"){
                    //echo "-IV-";
                    $sum += 4;
                    $index += 2;
                    $step  = 2; 
                }else if($arr[$index+1] == "X"){
                    $sum += 9;
                    $index += 2;
                    $step  = 2; 
                }else{
                    $sum += 1;
                    $index +=1;
                    $step  = 1; 
                }
            }else if($arr[$index] == "X"){//X
                if($arr[$index+1] == "L"){
                    $sum   += 40;
                    $index += 2;
                    $step  = 2; 
                }else if($arr[$index+1] == "C"){
                    //echo "-XC-";
                    $sum   += 90;
                    $index += 2;
                    $step  = 2; 
                    //echo "sum=$sum,index=$index,len=$len";
                }else{
                    $sum   += 10;
                    $index += 1;
                    $step  = 1; 
                }
            }else if($arr[$index] == "C"){//C
                if($arr[$index+1] == "D"){
                    $sum += 400;
                    $index += 2;
                    $step  = 2; 
                }else if($arr[$index+1] == "M"){
                    $sum += 900;
                    $index += 2;
                    $step  = 2; 
                }else{
                    $sum += 100;
                    $index += 1;
                    $step  = 1; 
                }
            }else if($arr[$index] == 'V'){
                $sum += 5;
                $index +=1;
                $step  = 1; 
            }else if($arr[$index] == 'L'){
                $sum += 50;
                $index += 1;
                $step  = 1; 
            }else if($arr[$index] == 'D'){
                $sum += 500;
                $index += 1;
                $step  = 1; 
            }else if($arr[$index] == 'M'){
                $sum += 1000;
                $index += 1;
                $step  = 1; 
            }else{
                echo "failed";
            }           

            $len -= $step;
        }while($len > 0 );

        //echo $sum;
        return $sum;

    }
}