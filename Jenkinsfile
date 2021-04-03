pipeline {
  agent {
    docker {
      image 'php:alpine'
    }

  }
  stages {
    stage('check file') {
      steps {
        fileExists 'envset.c'
      }
    }

    stage('build') {
      steps {
        sh 'php create_plist.php > org.miko.osx.envset.plist'
      }
    }

  }
}