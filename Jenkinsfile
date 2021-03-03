#!groovy
import groovy.json.JsonSlurperClassic
node {
	def BUILD_NUMBER=env.BUILD_NUMBER
    def jenkins_url="http://localhost:8080/blue/organizations/jenkins/JenkinsFilePOC_Scripted/detail/master/"+BUILD_NUMBER+"/pipeline"
	//def final_url=jenkins_url+BUILD_NUMBER+"/pipeline"
	    def email_body="Please"+"<a href=final_url>Approve\Reject</a>"+"the prod deployment"
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
		
		    println(jenkins_url)
		mail bcc: '', body: email_body, cc: 'ajay2881@gmail.com', from: '', replyTo: '', subject: 'please approve the prod deployment', to: 'ajay.chouhan@yash.com'
		 input "Deploy to prod?"
		
            echo 'prod Deployment'
        }
        
    }
}
