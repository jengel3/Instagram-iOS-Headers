

@protocol IGDirectContentUploadInfoObserver <NSObject>
@optional
-(void)notifyUploadProgressForUploadInfo:(id)arg1 withUploadProgress:(float)arg2;

@required
-(void)notifyStatusChangedForUploadInfo:(id)arg1;

@end

