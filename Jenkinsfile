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
		 input "Deploy to prod?"
		mail bcc: '', body: 'approve or reject the prod deployment', cc: 'ajay2881@gmail.com', from: '', replyTo: '', subject: 'please approve the prod deployment', to: 'ajay.chouhan@yash.com'
		
            echo 'prod Deployment'
        }
        
    }
}
