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
        publishCppcheck(XSize: 5, YSize: 5, allowNoReport: true, displayAllErrors: true, displayErrorSeverity: true, displayNoCategorySeverity: true, displayPerformanceSeverity: true, displayPortabilitySeverity: true, displayStyleSeverity: true, displayWarningSeverity: true, severityError: true, severityInformation: true, severityNoCategory: true, severityPerformance: true, severityPortability: true, severityStyle: true, severityWarning: true)
      }
    }

  }
}