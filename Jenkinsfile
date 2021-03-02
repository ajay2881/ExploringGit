#!groovy
import groovy.json.JsonSlurperClassic
node {
    stage('Dev Deployment') {
	
	if (env.BRANCH_NAME == "dev") { 
            echo 'Dev Deployment'
        }
        
    }
    stage('UAT Deployment') {
	if (env.BRANCH_NAME == "uat") { 
            echo 'uat Deployment'
        }
        
    }
    stage('Prod Deployment') {
        
	if (env.BRANCH_NAME == "master") { 
		
		mail bcc: '', body: 'Please go to console output of ${env.BUILD_URL} to approve or Reject.', cc: 'ajay2881@gmail.com', from: '', replyTo: '', subject: 'please approve the prod deployment', to: 'ajay.chouhan@yash.com'
		 input "Deploy to prod?"
		
            echo 'prod Deployment'
        }
        
    }
}
