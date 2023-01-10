
(cl:in-package :asdf)

(defsystem "beginner_tutorials-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "NamedPoint" :depends-on ("_package_NamedPoint"))
    (:file "_package_NamedPoint" :depends-on ("_package"))
    (:file "testMsg" :depends-on ("_package_testMsg"))
    (:file "_package_testMsg" :depends-on ("_package"))
  ))