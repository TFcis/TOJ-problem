<?php
/*
for ($i=1; $i <= 5; $i++) { 
	$out="4\n";
	for ($j=0; $j < 4; $j++) { 
		if($j) $out.=" ";
		$out.=rand(1,100);
	}
	$out.="\n";
	file_put_contents("res/testdata/".$i.".in", $out);
}
for ($i=6; $i <= 10; $i++) { 
	$out="10\n";
	for ($j=0; $j < 10; $j++) { 
		if($j) $out.=" ";
		$out.=rand(1,100);
	}
	$out.="\n";
	file_put_contents("res/testdata/".$i.".in", $out);
}
for ($i=11; $i <= 19; $i++) { 
	$out="1000\n";
	for ($j=0; $j < 1000; $j++) { 
		if($j) $out.=" ";
		$out.=rand(1,2000);
	}
	$out.="\n";
	file_put_contents("res/testdata/".$i.".in", $out);
}*/
for ($i=20; $i <= 20; $i++) { 
	$out="1000\n";
	for ($j=0; $j < 999; $j++) { 
		if($j) $out.=" ";
		$out.=rand(1,1);
	}
	for ($j=999; $j < 1000; $j++) { 
		if($j) $out.=" ";
		$out.=rand(2000,2000);
	}
	$out.="\n";
	file_put_contents("res/testdata/".$i.".in", $out);
}
?>