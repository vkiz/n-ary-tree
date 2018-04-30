// N-ary tree generation
// Copyright 2018 Vladimir Kizelbashev.

#ifndef TREE_H
#define TREE_H

#include <cstdlib>
#include <vector>

class TreeNode;

using namespace std;

class Tree
{
public:
	Tree(size_t treeDepth, size_t maxNodeChildren);

	vector<TreeNode*> GetNodes();

private:
	size_t treeDepth;
	size_t maxNodeChildren;
	size_t count;
	vector<TreeNode*> nodes;

	void RecurseTree(TreeNode* node);
};

#endif
