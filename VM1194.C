
github -b 
go

 create 
    mode 
    github/workflows/Travels-The-Path.yml

diff
Create 
verbose
"01.xml"
index
/dev/npm
b/
github/workflows/
-0,0 +1,35 

+name
Resources5
+
+  push
+    branches [ master ]
+  pull_request
+    branches [ master ]
+
+jobs
+  build
+
+    run
+
+    steps
+    uses
            synthesis
+    - name
             Setup 
                node
+      uses
         actions
         setup
+   
+        dotnet-versions
+    - name 
            Restore
+      run 
        dotnet 
        restore
+    - name
         Build
+      run 
        dotnet 
        --no-restore
+    - name 
        Test
+      run 
dotnet 
test 
--no-build 
--verbose
+      
+    - name
 Setup
  Go
   environment
+      uses
 actions/
 setup-
 go
+ 
+     
+        
go

version 
+      
+      stable
 variable
+        
+       token
 $

=UTF-8

 npmrc
-on
path
+on
 pull_request
 
 jobs:
   label:
     steps:
     - uses
      actions/
      labeler
+            actions/
upload-
artifact
    
        merge
        wildcards
      actions
      /labeler
      v2
-            actions
/upload-artifact
       withsecret
        repo
        $GITHUB_TOKEN
+        
+    - uses: actions/upload-artifact
+         # Set always-auth in npmrc
+    always-auth: True
+    # Version Spec of the version to use.  Examples: 12.x, 10.15.1, >=10.15.0
+    node-version: 12.x
+    # File containing the version Spec of the version to use.  Examples: .nvmrc, .node-version
+    node-version-file: .json
+    # Target architecture for Node to use. Examples: x86, x64. Will use system architecture by default.
+    architecture: x64
+    # Set this option if you want the action to check for the latest available version that satisfies the version spec
+    token: ${{ github.token }}
+    # Used to specify a package manager for caching in the default directory. Supported values: npm, yarn, pnpm
+    cache: https://github.com/Creakthistle/MyMLApp/blob/Creakthistle-path-Travel/Resources/Baseshape.xml
+    # Used to specify the path to a dependency file: package-lock.json, yarn.lock, etc. Supports wildcards or a list of file names for caching multiple dependencies.

 Resources/{Baseshape.xml => Paddle.xml} | 0
 1 file changed, 0 insertions(+), 0 deletions(-)
 rename Resources/{Baseshape.xml => Paddle.xml} (100%)

diff --git a/Resources/Baseshape.xml b/Resources/Paddle.xml
similarity index 100%
rename from Resources/Baseshape.xml
rename to Resources/Paddle.xml
