<?php
$ans=array();
$maxi=10000;
$maxj=10000;
$max=$maxi*$maxj;
for ($i=0; $i < $maxi ; $i++) { 
	echo $i."\n";
	for($j=0; $j < $maxj ; $j++){
		$n=$i*10000+$j;
		$t=(string)$n;
		$t=strrev($t);
		// echo $i." ".$t." ";
		$t+=$n;
		// echo $t."<br>";
		@$ans[$t]++;
	}
}
$ans[0]=0;
// echo json_encode($ans);
for ($i=1; $i <= 50; $i++) { 
	$in=0;
	while (!@$ans[$in]) {
		$in=rand(1,$max);
	}
	file_put_contents("testdata/".$i.".in", $in."\n");
	file_put_contents("testdata/".$i.".out", (@$ans[$in]*1)."\n");
}
?>
