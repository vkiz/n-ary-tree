// N-ary tree generation
// Copyright 2018 Vladimir Kizelbashev.

#include "Tree.h"
#include "TreeNode.h"

#include <ctime>
#include <iostream>

using namespace std;

Tree::Tree(size_t treeDepth, size_t maxNodeChildren)
{
	this->treeDepth = treeDepth;
	this->maxNodeChildren = maxNodeChildren;
	TreeNode* root = new TreeNode(NULL);
	root->SetLevel(1);
	root->SetNumber(1);
	nodes.push_back(root);
	count = 1;
	srand((unsigned int)time(0));
	RecurseTree(root);
}

vector<TreeNode*> Tree::GetNodes()
{
	return nodes;
}

void Tree::RecurseTree(TreeNode* node)
{
	if (node)
	{
		size_t level = node->GetLevel();
		size_t number = node->GetNumber();
		size_t parNum = 0;
		if (node->GetParent() != NULL)
			parNum = node->GetParent()->GetNumber();
		cout << "Node (number, parent number, level): " 
			 << number << ", " << parNum << ", " << level << endl;
		
		if (level < treeDepth)
		{
			level++;
			size_t n = rand() % (maxNodeChildren + 1);
			for (size_t i = 0; i < n; i++)
			{
				TreeNode* childNode = new TreeNode(node);
				childNode->SetLevel(level);
				childNode->SetNumber(++count);
				node->GetChildren().push_back(childNode);
				nodes.push_back(childNode);
				RecurseTree(childNode);
			}
		}
	}
}
