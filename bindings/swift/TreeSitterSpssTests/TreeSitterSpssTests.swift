import XCTest
import SwiftTreeSitter
import TreeSitterSpss

final class TreeSitterSpssTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_spss())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Spss grammar")
    }
}
