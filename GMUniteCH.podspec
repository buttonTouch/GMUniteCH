#
#  Be sure to run `pod spec lint GMUniteCH.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|
  spec.name         = "GMUniteCH"
  spec.version      = "1.0.3"#版本号
  spec.summary      = "GMUnite for gama games developer."
  spec.description  = <<-DESC
    GMUnitech for gama games developer.游戏发中国大陆地区使用Umeng统计和穿山甲广告
                   DESC
  spec.homepage     = "https://github.com/buttonTouch/GMUniteCH.git"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "MWS" => "18824676521@163.com" }
  spec.platform     = :ios
  spec.ios.deployment_target = "9.0"
  spec.source       = { :git => "https://github.com/buttonTouch/GMUniteCH.git", :tag => "#{spec.version}" }
  spec.resource = "Framework/GMGSupport.bundle"
  spec.ios.vendored_frameworks = 'Framework/GMUniteCH.framework'
  spec.frameworks = "UIKit", "Foundation","AudioToolbox","AppTrackingTransparency","CFNetwork","StoreKit","WebKit"
  # spec.library   = "iconv"
  # spec.libraries = "iconv", "xml2"
  spec.requires_arc = true
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64'}
  spec.dependency "Reachability"
  spec.dependency "Masonry"
  spec.dependency "AFNetworking"
  spec.dependency "MBProgressHUD"
  spec.dependency "UMCommon"
  spec.dependency "UMDevice"
  spec.dependency "UMAPM"
  spec.dependency "Ads-CN"
end
