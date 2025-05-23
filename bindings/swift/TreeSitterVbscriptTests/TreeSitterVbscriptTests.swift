import XCTest
import SwiftTreeSitter
import TreeSitterVbscript

final class TreeSitterVbscriptTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_vbscript())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Vbscript grammar")
    }
}
