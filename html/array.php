<?php
// associative array
$bca = array(
"stat" => "vs parajuli",
"oop" =>"binod thapa",
"webtach"=> "sk",
"sad" => "kabindra koirala",
"dsa"=> "santos Bista"

);

echo $bca['oop'];
echo "<br>";

foreach($bca as $key => $a){
    echo $key;
    echo "<br>";
// }
// for(i=0;i!= max length;i++){

}


$season = array();
$season[0]="summer";
$season[1]="winter";
$season[2]="spring";
$season[3]="autumn";

$season = array("summer","winter","spring","autumn");
$key=array_search("spring",$season);
echo $key;

 
for ($i = 0; $i < count($season); $i++){
echo $season[$i];
echo "<br>";
}
?>