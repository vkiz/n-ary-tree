// N-ary tree generation
// Copyright 2018 Vladimir Kizelbashev.

#ifndef TREENODE_H
#define TREENODE_H

#include <cstdlib>
#include <vector>

using namespace std;

class TreeNode
{
public:
	TreeNode(TreeNode* parent);

	void SetLevel(size_t level);
	void SetNumber(size_t number);
	size_t GetLevel();
	size_t GetNumber();
	TreeNode* AddChild();
	TreeNode* GetParent();
	vector<TreeNode*> GetChildren();

private:
	size_t level;
	size_t number;
	TreeNode* parent;
	vector<TreeNode*> children;
};

#endif
