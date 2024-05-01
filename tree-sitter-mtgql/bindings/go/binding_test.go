package tree_sitter_mtgql_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-mtgql"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mtgql.Language())
	if language == nil {
		t.Errorf("Error loading Mtgql grammar")
	}
}
