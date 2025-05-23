// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterVbscript",
    products: [
        .library(name: "TreeSitterVbscript", targets: ["TreeSitterVbscript"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterVbscript",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterVbscriptTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterVbscript",
            ],
            path: "bindings/swift/TreeSitterVbscriptTests"
        )
    ],
    cLanguageStandard: .c11
)
