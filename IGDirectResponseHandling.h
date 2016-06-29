

@protocol IGDirectResponseHandling <NSObject>
@required
+(char)isCompatibleWithDirectResponse:(id)arg1;
-(void)handleFeedItem:(id)arg1 directResponseInfo:(id)arg2 viewController:(id)arg3 context:(id)arg4 showCallConfirmation:(char)arg5 completion:(/*^block*/id)arg6;

@end

