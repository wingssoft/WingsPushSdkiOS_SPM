// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

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
        .binaryTarget(name: "WingsPushSDK", url: "https://github.com/extended-dev97/WingsPushSDK/releases/download/2.4.3.1/WingsPushSDK.xcframework.zip", checksum: "ac6a15ccabb689f45e0f55caa4dfd453b4695b0936360d1e6b4f171aaa126a32"),
    ]
)
