pipeline {
  agent any
  stages {
    stage('build') {
      steps {
        echo 'build'
      }
    }

    stage('codecheck') {
      steps {
        sh 'cppcheck -j 4 --enable=all --inconclusive --xml --xml-version=2 SOURCE_DIRECTORY 2> cppcheck.xml'
      }
    }

    stage('showcppcheck') {
      steps {
        publishCppcheck(XSize: 5, YSize: 5, allowNoReport: true, displayErrorSeverity: true, displayAllErrors: true, displayNoCategorySeverity: true, displayPerformanceSeverity: true, displayPortabilitySeverity: true, displayStyleSeverity: true, displayWarningSeverity: true, severityError: true, severityInformation: true, severityNoCategory: true, severityPerformance: true, severityPortability: true, severityStyle: true, severityWarning: true)
      }
    }

  }
}