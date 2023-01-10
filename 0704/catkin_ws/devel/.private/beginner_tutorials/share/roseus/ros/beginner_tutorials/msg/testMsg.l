;; Auto-generated. Do not edit!


(when (boundp 'beginner_tutorials::testMsg)
  (if (not (find-package "BEGINNER_TUTORIALS"))
    (make-package "BEGINNER_TUTORIALS"))
  (shadow 'testMsg (find-package "BEGINNER_TUTORIALS")))
(unless (find-package "BEGINNER_TUTORIALS::TESTMSG")
  (make-package "BEGINNER_TUTORIALS::TESTMSG"))

(in-package "ROS")
;;//! \htmlinclude testMsg.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass beginner_tutorials::testMsg
  :super ros::object
  :slots (_header _str _integer ))

(defmethod beginner_tutorials::testMsg
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:str __str) "")
    ((:integer __integer) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _str (string __str))
   (setq _integer (round __integer))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:str
   (&optional __str)
   (if __str (setq _str __str)) _str)
  (:integer
   (&optional __integer)
   (if __integer (setq _integer __integer)) _integer)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _str
    4 (length _str)
    ;; int64 _integer
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _str
       (write-long (length _str) s) (princ _str s)
     ;; int64 _integer
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _integer (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _integer) (= (length (_integer . bv)) 2)) ;; bignum
              (write-long (ash (elt (_integer . bv) 0) 0) s)
              (write-long (ash (elt (_integer . bv) 1) -1) s))
             ((and (class _integer) (= (length (_integer . bv)) 1)) ;; big1
              (write-long (elt (_integer . bv) 0) s)
              (write-long (if (>= _integer 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _integer s)(write-long (if (>= _integer 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _str
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _str (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int64 _integer
#+(or :alpha :irix6 :x86_64)
      (setf _integer (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _integer (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(setf (get beginner_tutorials::testMsg :md5sum-) "9038168108474b623204af1525717741")
(setf (get beginner_tutorials::testMsg :datatype-) "beginner_tutorials/testMsg")
(setf (get beginner_tutorials::testMsg :definition-)
      "Header header 
string str  
int64 integer 



================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

")



(provide :beginner_tutorials/testMsg "9038168108474b623204af1525717741")


