# ConvivaOoyala Framework

The ConvivaOoyala Framework supports cocoapods and manual installation. The library is delivered as Static Framework and deployment is supported on iOS 8 and above.

## Cocoapods Installation
    Add the following line to your pod file and run 'pod install'

    pod 'ConvivaOoyala','1.0.0'

## Manual Installation
To add the ConvivaOoyala library to your project manually:

Note: **We recommend to include the ConvivaCore and ConvivaOoyala module of the same 
      major version.**

1.	Download the latest ConvivaCore [here](https://github.com/Conviva/ConvivaCore/archive/3.0.2.zip)

2.	Download the latest ConvivaOoyala Module [here](https://github.com/Conviva/ConvivaOoyala/archive/1.0.0.zip)

3.	Unzip the package and add ConvivaCore.framework and ConvivaOoyala.framework to “Link Binary with Libraries” under build phase.

4.	Add the following system frameworks to “Link Binary with Libraries” section in xcode.

    * CoreMedia
    * SystemConfiguration
    * MobileCoreServices
    * CoreTelephony
    * MediaPlayer.framework
    * JavaScriptCore.framework
    * AVFoundation.framework
    * MobileCoreServices
    * AVKit.framework

5.	Add “-ObjC” to “Other Linker Flags” of Xcode.

    
## Import Statements

  Add the following import statements to your source code to refer Conviva classes.

    * @import ConvivaOoayala; (Objective-C)
    * @import ConvivaCore; ( Objective-C)
    * import ConvivaOoayala (Swift)
    * import ConvivaCore (Swift)
    

Note: Refer https://community.conviva.com/ for integration guidelines.
