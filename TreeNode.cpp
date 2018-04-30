// N-ary tree generation
// Copyright 2018 Vladimir Kizelbashev.

#include "TreeNode.h"

TreeNode::TreeNode(TreeNode* parent)
{
	this->parent = parent;
}

void TreeNode::SetLevel(size_t level)
{
	this->level = level;
}

void TreeNode::SetNumber(size_t number)
{
	this->number = number;
}

size_t TreeNode::GetLevel()
{
	return level;
}

size_t TreeNode::GetNumber()
{
	return number;
}

TreeNode* TreeNode::GetParent()
{
	return parent;
}

TreeNode* TreeNode::AddChild()
{
	TreeNode* child = new TreeNode(this);
	child->SetLevel(this->GetLevel() + 1);
	children.push_back(child);
	return child;
}

vector<TreeNode*> TreeNode::GetChildren()
{
	return children;
}
