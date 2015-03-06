<?php
$rootNode = new SimpleXMLElement( "<?xml version='1.0' encoding='UTF-8'?>
    <!DOCTYPE plist PUBLIC '-//Apple//DTD PLIST 1.0//EN' 'http://www.apple.com/DTDs/PropertyList-1.0.dtd'>
    <plist version='1.0'></plist>" );

$dictNode = $rootNode->addChild('dict');

$dictNode->addChild( 'key', 'Label' );
$dictNode->addChild( 'string', 'org.miko.osx.envset' );
$dictNode->addChild( 'key', 'ProgramArguments' );

$keyNode = $dictNode->addChild( 'array' );
$homedir = getenv('HOME');
$keyNode->addChild( 'string', $homedir . '/local/bin/envset' );

$dictNode->addChild( 'key', 'RunAtLoad' );
$dictNode->addChild( 'true' );

$dom = new DOMDocument( '1.0' );
$dom->loadXML( $rootNode->asXML() );
$dom->formatOutput = true;
echo $dom->saveXML();
