

@protocol FBSDKSharingDelegate <NSObject>
@required
-(void)sharer:(id)arg1 didFailWithError:(id)arg2;
-(void)sharer:(id)arg1 didCompleteWithResults:(id)arg2;
-(void)sharerDidCancel:(id)arg1;

@end

