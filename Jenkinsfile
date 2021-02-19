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
            echo 'prod Deployment'
        }
        
    }
}
