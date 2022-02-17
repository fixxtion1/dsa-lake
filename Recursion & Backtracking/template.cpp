 vector<vector<int>>  backtrack(vector<object> A) {
        // Set up a vector of vector to hold all possible solutions
        vector<vector<object>> result;
        if (A.size() == 0) return result;

        // As we need to recursively generate every solution,
        // a variable is needed to store single solution.
        vector<Object> solution;

        // The process of constructing the solution corresponds exactly to
        // doing a Depth-First-Search of the backtrack tree. Viewing backtracking
        // as a Depth-First-Search on a tree yields a natural recursive implementation
        // of the algorithm.
        dfs(result, solution, A, 0);
        return result;
}


void dfs(vector<vector<object>> result, vector<object> solution, vector<object> A, int pos) {
        // For recursion, the first thing we need to think about is how to terminate it, i.e., base case.
        // Method isASolution() could be implemented as a method which returns boolean,
        // or for simple test we can directly use the condition replace it, e.g., generate all subsets
        // we can write the condition: if (A.size() == pos)
        if (isASolution(A, pos)) {
            // Because we use the variable - 'solution' to hold partial solution,
            // when this search is terminated, the variable must hold a complete
            // solution.
            // Same like isASolution, processSolution method should print, count or however
            // process the complete solution once it is constructed.
            processSolution(result, solution);
            return;
        }

        for (int i = pos; i < A.size(); i++) {
            // Before Depth-First-Search, we should decide whether we need to prune searching
            // which means it's unnecessary to continue search along a wrong partial solution
            if (!isValid(A[i])) continue; // stop searching along this path

            // Add the ith element of the array into the partial solution.
            // Before searching, we need to record the latest element we are using
            // to build the solution tree. Method makeMove should be able to add A[i]
            // to the solution, i.e., solution.add(A[i])
            makeMove(solution, A[i]);

            // Right now, we are searching all possible solutions based on ith element.
            // Warning: remember as we've already added ith element, the last parameter
            // must be `i + 1`.
            dfs(result, solution, A, i + 1);

            // After searching based on ith element, take back the move and search another
            // possible partial solution.
            unmakeMove(solution, A[i]);
        }
    }
}
