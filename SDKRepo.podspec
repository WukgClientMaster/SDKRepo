#
# Be sure to run `pod lib lint SDKRepo.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SDKRepo'
  s.version          = '0.1.0'
  s.summary          = 'A short description of SDKRepo.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/WukgClientMaster/SDKRepo'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'WukgClientMaster' => 'WKG160100@163.com' }
  s.source           = { :git => 'https://github.com/WukgClientMaster/SDKRepo.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'
  s.vendored_frameworks = 'TransnSDK.framework'
  s.frameworks = [
          "AVFoundation",
          "AudioToolbox",
          "CoreMedia",
          "CoreTelephony",
          "SystemConfiguration",
          "VideoToolbox",
          "Accelerate",
          "CoreML",
          "CoreData",
          "AdSupport",
          "SystemConfiguration",
  ]

   #s.public_header_files = 'SDKRepo/Classes/Public/**/*.h'
   #s.frameworks = 'UIKit', 'SystemConfiguration'
   #s.dependency 'AFNetworking', '~> 2.3'
   #s.dependency 'Masonry', '~> 1.1.0'

end
