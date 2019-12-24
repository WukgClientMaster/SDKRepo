#
# Be sure to run `pod lib lint SDKRepo.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SDKRepo'
  s.version          = '1.0.0'
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
  s.source           = { :git => 'https://github.com/WukgClientMaster/SDKRepo.git'}
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'
  s.preserve_paths = 'Framework/TransnSDK.framework'
  s.vendored_frameworks = 'Framework/TransnSDK.framework'
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

   s.public_header_files = 'Framework/TransnSDK.framework/Headers/*.h'
   s.libraries = [
   "c++",
   ]
   s.dependency 'XMPPFramework'
   s.dependency 'AgoraAudio_iOS'
   s.dependency 'CoreDataEnvir'
   #s.dependency 'AFNetworking', '~> 2.3'
   #s.dependency 'Masonry', '~> 1.1.0'

end
