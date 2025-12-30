pipeline {
    agent any

    stages {
        stage('Info') {
            steps {
                sh 'echo "Branch: $BRANCH_NAME"'
            }
        }

        stage('Build') {
            steps {
                sh 'gcc hello.c -o hello'
            }
        }

        stage('Run') {
            steps {
                sh './hello'
            }
        }
    }
}

