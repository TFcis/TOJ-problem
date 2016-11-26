<?php
ini_set("display_errors", 0);
$v=array();
function find($n){
	if($v[$n]==$n)return $n;
	return $v[$n]=find($v[$n]);
}
function check($a,$b){
	$a=find($a);
	$b=find($b);
	return $a==$b;
}
function rand2($a,$b){
	$res=array(0,0);
	while($res[0]==$res[1]){
		$res[0]=rand($a,$b);
		$res[1]=rand($a,$b);
	}
	return $res;
}
function getout($point_num,$side_num,$L){
	$out="";
	$out.=$point_num." ".$side_num."\n";
	$temp=rand2(1,$point_num);
	$out.=$temp[0]." ".$temp[1]."\n";
	$ship=array();
	for ($i=1; $i <= $point_num; $i++) {
		$ship[]=array($i);
	}
	$res=array();
	$used=array();
	for ($i=0; $i < $point_num-1; $i++) { 
		$key1=$key2=-1;
		while ($key1==$key2) {
			$key1=array_rand($ship);
			$key2=array_rand($ship);
		}
		$key3=array_rand($ship[$key1]);
		$key4=array_rand($ship[$key2]);
		$res[]=array($ship[$key1][$key3],$ship[$key2][$key4]);
		$ship[$key1]=array_merge($ship[$key1],$ship[$key2]);
		$used[$ship[$key1][$key3]][$ship[$key2][$key4]]=true;
		$used[$ship[$key2][$key4]][$ship[$key1][$key3]]=true;
		unset($ship[$key2]);
	}
	$side_num-=$point_num-1;
	while ($side_num>0) {
		$temp=rand2(1,$point_num);
		if(isset($used[$temp[0]][$temp[1]])){
			$side_num++;
		}else {
			$res[]=array($temp[0],$temp[1]);
			$used[$temp[0]][$temp[1]]=true;
			$used[$temp[1]][$temp[0]]=true;
		}
		$side_num--;
	}
	shuffle($res);
	foreach ($res as $temp) {
		$out.=$temp[0]." ".$temp[1]." ".rand(1,$L)."\n";
		// $out.=$temp[0]." ".$temp[1]." ".rand(1,$L-1).".".str_pad(rand(0,99),2,"0",STR_PAD_LEFT)."\n";
	}
	return $out;
}

for ($case=1; $case <= 5; $case++) { 
	echo "case ".$case."\n";
	file_put_contents($case.".in", getout(10,9,10));
}
for ($case=6; $case <= 10; $case++) { 
	echo "case ".$case."\n";
	file_put_contents($case.".in", getout(10,rand(20,40),10));
}
for ($case=11; $case <= 15; $case++) { 
	echo "case ".$case."\n";
	file_put_contents($case.".in", getout(100,99,100));
}
for ($case=16; $case <= 20; $case++) { 
	echo "case ".$case."\n";
	file_put_contents($case.".in", getout(100,rand(200,4500),100));
}
for ($case=21; $case <= 25; $case++) { 
	echo "case ".$case."\n";
	file_put_contents($case.".in", getout(1000,999,1000));
}
for ($case=26; $case <= 30; $case++) { 
	echo "case ".$case."\n";
	file_put_contents($case.".in", getout(1000,rand(2000,100000),1000));
}
for ($case=31; $case <= 35; $case++) { 
	echo "case ".$case."\n";
	file_put_contents($case.".in", getout(10000,9999,100000));
}
for ($case=36; $case <= 40; $case++) { 
	echo "case ".$case."\n";
	file_put_contents($case.".in", getout(10000,rand(20000,100000),100000));
}
for ($case=41; $case <= 45; $case++) {
	echo "case ".$case."\n";
	file_put_contents($case.".in", getout(100000,99999,10000000));
}
for ($case=46; $case <= 50; $case++) { 
	echo "case ".$case."\n";
	file_put_contents($case.".in", getout(100000,rand(200000,200000),10000000));
}
?>