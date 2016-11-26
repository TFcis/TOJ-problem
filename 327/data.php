<?php
$type=3;
$data="10000\n";
if($type==2){
	for($i=0;$i<10000;$i++){
		$x1=rand(-1000,1000);
		$y1=rand(-1000,1000);
		$x2=rand(-1000,1000);
		$y2=rand(-1000,1000);
		if($x1==$x2||$y1==$y2){
			$i--;
			continue;
		}
		$temp=rand(0,1);
		if($temp)$data.=$x1." ".$y1." ".$x2." ".$y2." ".$x1." ".$y2."\n";
		else $data.=$x1." ".$y1." ".$x2." ".$y2." ".$x2." ".$y1."\n";
	}
}
else if($type==3){
	for($i=0;$i<10000;$i++){
		$x1=rand(-1000,1000);
		$y1=rand(-1000,1000);
		$x2=rand(-1000,1000);
		$y2=rand(-1000,1000);
		$x3=rand(-1000,1000);
		$y3=rand(-1000,1000);
		if($x1==$x2||$x2==$x3||$y1==$y2||$y2==$y3){
			$i--;
			continue;
		}
		$data.=$x1." ".$y1." ".$x2." ".$y2." ".$x3." ".$y3."\n";
	}
}
file_put_contents("0.in",$data);
?>