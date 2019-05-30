#
# Be sure to run `pod lib lint QDAliFaceSDK_iOS.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'QDUnionLoanSDK'
  s.version          = '0.0.1'
  s.summary          = '趣店App入驻SDK'
  s.homepage         = 'https://git.qufenqi.com/app/QDUnionLoanSDK_iOS'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'wuyongrui' => 'wuyongrui@qudian.com' }
  s.source           = { :git => 'https://github.com/qudianapp/QDUnionLoanSDK.git', :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'


  s.resources = 'Outlet/QDUnionLoanSDK.bundle'

  # for debug
  s.public_header_files = 'Outlet/QDUnionLoanSDK.h'
  s.source_files = 'Sources/*.{h,m}'

  # s.ios.vendored_library = 'Outlet/libQDUnionLoanSDK.a'
  # s.public_header_files = 'Outlet/QDUnionLoanSDK.h'

  s.dependency 'AliyunOSSiOS', '2.8.0'
  s.dependency 'QDAliFaceSDK_iOS', '0.1.2'
  s.dependency 'QDAliPaySDK', '0.1.2'
end
