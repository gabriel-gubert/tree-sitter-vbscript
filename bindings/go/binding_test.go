package tree_sitter_vbscript_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_vbscript "github.com/gabriel-gubert/tree-sitter-vbscript.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_vbscript.Language())
	if language == nil {
		t.Errorf("Error loading Vbscript grammar")
	}
}
