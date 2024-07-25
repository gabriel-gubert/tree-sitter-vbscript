package tree_sitter_vbscript_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-vbscript"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_vbscript.Language())
	if language == nil {
		t.Errorf("Error loading Vbscript grammar")
	}
}
