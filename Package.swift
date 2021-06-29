// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let baseURL: String = "https://github.com/wingssoft/WingsPushSdkiOS_SPM/releases/download/"
let versionPackage: String = "2.4.32"
let packageName = "WingsPushSDK.xcframework.zip"
let checksum: String = "52f8aac4b26c37395371abaf9487171c1fd06a6d64341a1845d0a54598a20aae"

let package = Package(
    name: "WingsPushSDK",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "WingsPushSDK",
            targets: ["WingsPushSDK"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .binaryTarget(name: "WingsPushSDK", url: "\(baseURL)\(versionPackage)/\(packageName)", checksum: checksum),
    ]
)
